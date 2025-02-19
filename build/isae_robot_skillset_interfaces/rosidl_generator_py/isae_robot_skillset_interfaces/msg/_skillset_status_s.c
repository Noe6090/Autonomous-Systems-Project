// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from isae_robot_skillset_interfaces:msg/SkillsetStatus.idl
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
#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__struct.h"
#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "isae_robot_skillset_interfaces/msg/detail/resource_state__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool isae_robot_skillset_interfaces__msg__resource_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * isae_robot_skillset_interfaces__msg__resource_state__convert_to_py(void * raw_ros_message);
bool isae_robot_skillset_interfaces__msg__skill_detect_target_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * isae_robot_skillset_interfaces__msg__skill_detect_target_status__convert_to_py(void * raw_ros_message);
bool isae_robot_skillset_interfaces__msg__skill_move_to_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * isae_robot_skillset_interfaces__msg__skill_move_to_status__convert_to_py(void * raw_ros_message);
bool isae_robot_skillset_interfaces__msg__skill_take_picture_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * isae_robot_skillset_interfaces__msg__skill_take_picture_status__convert_to_py(void * raw_ros_message);
bool isae_robot_skillset_interfaces__msg__skill_track_target_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * isae_robot_skillset_interfaces__msg__skill_track_target_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool isae_robot_skillset_interfaces__msg__skillset_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("isae_robot_skillset_interfaces.msg._skillset_status.SkillsetStatus", full_classname_dest, 66) == 0);
  }
  isae_robot_skillset_interfaces__msg__SkillsetStatus * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // resources
    PyObject * field = PyObject_GetAttrString(_pymsg, "resources");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'resources'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!isae_robot_skillset_interfaces__msg__ResourceState__Sequence__init(&(ros_message->resources), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create isae_robot_skillset_interfaces__msg__ResourceState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    isae_robot_skillset_interfaces__msg__ResourceState * dest = ros_message->resources.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!isae_robot_skillset_interfaces__msg__resource_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // skill_detect_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "skill_detect_target");
    if (!field) {
      return false;
    }
    if (!isae_robot_skillset_interfaces__msg__skill_detect_target_status__convert_from_py(field, &ros_message->skill_detect_target)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // skill_move_to
    PyObject * field = PyObject_GetAttrString(_pymsg, "skill_move_to");
    if (!field) {
      return false;
    }
    if (!isae_robot_skillset_interfaces__msg__skill_move_to_status__convert_from_py(field, &ros_message->skill_move_to)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // skill_take_picture
    PyObject * field = PyObject_GetAttrString(_pymsg, "skill_take_picture");
    if (!field) {
      return false;
    }
    if (!isae_robot_skillset_interfaces__msg__skill_take_picture_status__convert_from_py(field, &ros_message->skill_take_picture)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // skill_track_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "skill_track_target");
    if (!field) {
      return false;
    }
    if (!isae_robot_skillset_interfaces__msg__skill_track_target_status__convert_from_py(field, &ros_message->skill_track_target)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->info, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * isae_robot_skillset_interfaces__msg__skillset_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SkillsetStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("isae_robot_skillset_interfaces.msg._skillset_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SkillsetStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  isae_robot_skillset_interfaces__msg__SkillsetStatus * ros_message = (isae_robot_skillset_interfaces__msg__SkillsetStatus *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // resources
    PyObject * field = NULL;
    size_t size = ros_message->resources.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    isae_robot_skillset_interfaces__msg__ResourceState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->resources.data[i]);
      PyObject * pyitem = isae_robot_skillset_interfaces__msg__resource_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "resources", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // skill_detect_target
    PyObject * field = NULL;
    field = isae_robot_skillset_interfaces__msg__skill_detect_target_status__convert_to_py(&ros_message->skill_detect_target);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "skill_detect_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // skill_move_to
    PyObject * field = NULL;
    field = isae_robot_skillset_interfaces__msg__skill_move_to_status__convert_to_py(&ros_message->skill_move_to);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "skill_move_to", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // skill_take_picture
    PyObject * field = NULL;
    field = isae_robot_skillset_interfaces__msg__skill_take_picture_status__convert_to_py(&ros_message->skill_take_picture);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "skill_take_picture", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // skill_track_target
    PyObject * field = NULL;
    field = isae_robot_skillset_interfaces__msg__skill_track_target_status__convert_to_py(&ros_message->skill_track_target);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "skill_track_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // info
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->info.data,
      strlen(ros_message->info.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
