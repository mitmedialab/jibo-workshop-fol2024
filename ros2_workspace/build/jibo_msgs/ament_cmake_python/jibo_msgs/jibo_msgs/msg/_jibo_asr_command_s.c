// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from jibo_msgs:msg/JiboAsrCommand.idl
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
#include "jibo_msgs/msg/detail/jibo_asr_command__struct.h"
#include "jibo_msgs/msg/detail/jibo_asr_command__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool jibo_msgs__msg__jibo_asr_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("jibo_msgs.msg._jibo_asr_command.JiboAsrCommand", full_classname_dest, 46) == 0);
  }
  jibo_msgs__msg__JiboAsrCommand * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heyjibo
    PyObject * field = PyObject_GetAttrString(_pymsg, "heyjibo");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heyjibo = (Py_True == field);
    Py_DECREF(field);
  }
  {  // continuous
    PyObject * field = PyObject_GetAttrString(_pymsg, "continuous");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->continuous = (Py_True == field);
    Py_DECREF(field);
  }
  {  // incremental
    PyObject * field = PyObject_GetAttrString(_pymsg, "incremental");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->incremental = (Py_True == field);
    Py_DECREF(field);
  }
  {  // alternatives
    PyObject * field = PyObject_GetAttrString(_pymsg, "alternatives");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->alternatives = (Py_True == field);
    Py_DECREF(field);
  }
  {  // detectend
    PyObject * field = PyObject_GetAttrString(_pymsg, "detectend");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->detectend = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rule
    PyObject * field = PyObject_GetAttrString(_pymsg, "rule");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->rule, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * jibo_msgs__msg__jibo_asr_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JiboAsrCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("jibo_msgs.msg._jibo_asr_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JiboAsrCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  jibo_msgs__msg__JiboAsrCommand * ros_message = (jibo_msgs__msg__JiboAsrCommand *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heyjibo
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heyjibo ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heyjibo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // continuous
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->continuous ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "continuous", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // incremental
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->incremental ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "incremental", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alternatives
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->alternatives ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alternatives", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // detectend
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->detectend ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "detectend", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rule
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->rule.data,
      strlen(ros_message->rule.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rule", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
