// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from isae_robot_skillset_interfaces:msg/SkillTakePictureRequest.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_request__struct.h"
#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_request__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool isae_robot_skillset_interfaces__msg__skill_take_picture_input__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * isae_robot_skillset_interfaces__msg__skill_take_picture_input__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool isae_robot_skillset_interfaces__msg__skill_take_picture_request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[87];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("isae_robot_skillset_interfaces.msg._skill_take_picture_request.SkillTakePictureRequest", full_classname_dest, 86) == 0);
  }
  isae_robot_skillset_interfaces__msg__SkillTakePictureRequest * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // input
    PyObject * field = PyObject_GetAttrString(_pymsg, "input");
    if (!field) {
      return false;
    }
    if (!isae_robot_skillset_interfaces__msg__skill_take_picture_input__convert_from_py(field, &ros_message->input)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * isae_robot_skillset_interfaces__msg__skill_take_picture_request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SkillTakePictureRequest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("isae_robot_skillset_interfaces.msg._skill_take_picture_request");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SkillTakePictureRequest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  isae_robot_skillset_interfaces__msg__SkillTakePictureRequest * ros_message = (isae_robot_skillset_interfaces__msg__SkillTakePictureRequest *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input
    PyObject * field = NULL;
    field = isae_robot_skillset_interfaces__msg__skill_take_picture_input__convert_to_py(&ros_message->input);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "input", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
