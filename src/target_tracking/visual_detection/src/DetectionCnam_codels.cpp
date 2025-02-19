#include "DetectionCnam_codels.hpp"

#include <opencv2/core/core_c.h>
#include <opencv2/imgproc/types_c.h>
#include <opencv2/imgproc/imgproc_c.h>
#include <opencv2/highgui/highgui_c.h>


CvPoint gravcenter;

using namespace std;
CvPoint binarisation(IplImage* image, int b, int g, int r, int tolerance) {
        int x, y;
        IplImage *mask, *bgr;
        IplConvKernel *kernel;
        int sommeX = 0, sommeY = 0;
        int nbPixels = 0;
        //gravcenter = {0,0};
        gravcenter.x=0;
        gravcenter.y=0;
        // Create the mask &initialize it to white (no color detected)
        mask = cvCreateImage(cvGetSize(image), image->depth, 1);
        // Create the bgr image
        bgr = cvCloneImage(image);
        // We create the mask
        cvInRangeS(bgr, cvScalar(b-tolerance, g-tolerance,r-tolerance), cvScalar(b+tolerance, g+tolerance,r+tolerance), mask);
        // Create kernels for the morphological operation
        kernel = cvCreateStructuringElementEx(5, 5, 2, 2, CV_SHAPE_ELLIPSE);
        // Morphological opening (inverse because we have white pixels on black background)
        cvDilate(mask, mask, kernel, 1);
        cvErode(mask, mask, kernel, 1);
        // We go through the mask to look for the tracked object and get its gravity center
        for(x = 0; x < mask->width; x++) {
                for(y = 0; y < mask->height; y++) {
                        // If its a tracked pixel, count it to the center of gravity's calcul
                        if(((uchar *)(mask->imageData + y*mask->widthStep))[x] == 255) {
                                sommeX += x;
                                sommeY += y;
                                (nbPixels)++;
                        }
                }
        }
        // Show the result of the mask image
//     cvShowImage("DetectionCnam_Codels Mask", mask);
    //Image camera
//     cvShowImage("image_camera",image);
//     cvWaitKey(3);
        // We release the memory of kernels
        cvReleaseStructuringElement(&kernel);
        // We release the memory of the mask
        cvReleaseImage(&mask);
        // We release the memory of the hsv image
    cvReleaseImage(&bgr);
        //return nbPixels;
    if(nbPixels > 0)
    {
                    // gravcenter = ((int)(sommeX / (nbPixels)), (int)(sommeY / (*nbPixels)));
                    gravcenter.x = (int)(sommeX / (nbPixels));
                    gravcenter.y = (int)(sommeY / (nbPixels));
            cvCircle(image,gravcenter,10,cvScalar(0,0,255,0),2);
        //     cvShowImage("image_camera",image);
        //     cvWaitKey(3);
                    return gravcenter;
    } else
            return cvPoint(-1, -1);
}

