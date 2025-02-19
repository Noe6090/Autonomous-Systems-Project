#ifndef _CNAM_DETECTION_CODELS_HPP_
#define _CNAM_DETECTION_CODELS_HPP_

//pour utiliser la librairie OpenCV:
#include <opencv2/opencv.hpp>
#include <opencv2/core/types_c.h>

CvPoint binarisation(IplImage* image, int b, int g, int r, int tolerance);

#endif //_CNAM_DETECTION_CODELS_HPP_


