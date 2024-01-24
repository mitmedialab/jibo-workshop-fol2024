// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from jibo_msgs:msg/JiboState.idl
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
#include "jibo_msgs/msg/detail/jibo_state__struct.h"
#include "jibo_msgs/msg/detail/jibo_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool jibo_msgs__msg__jibo_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("jibo_msgs.msg._jibo_state.JiboState", full_classname_dest, 35) == 0);
  }
  jibo_msgs__msg__JiboState * ros_message = _ros_message;
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
  {  // in_motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_motion");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->in_motion, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // audio
    PyObject * field = PyObject_GetAttrString(_pymsg, "audio");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->audio, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // tts_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "tts_msg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->tts_msg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // volume
    PyObject * field = PyObject_GetAttrString(_pymsg, "volume");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->volume = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // doing_motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "doing_motion");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->doing_motion = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_playing_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_playing_sound");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_playing_sound = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_listening
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_listening");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_listening = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * jibo_msgs__msg__jibo_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JiboState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("jibo_msgs.msg._jibo_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JiboState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  jibo_msgs__msg__JiboState * ros_message = (jibo_msgs__msg__JiboState *)raw_ros_message;
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
  {  // in_motion
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->in_motion.data,
      strlen(ros_message->in_motion.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // audio
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->audio.data,
      strlen(ros_message->audio.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "audio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tts_msg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->tts_msg.data,
      strlen(ros_message->tts_msg.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tts_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // volume
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->volume);
    {
      int rc = PyObject_SetAttrString(_pymessage, "volume", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // doing_motion
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->doing_motion ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "doing_motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_playing_sound
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_playing_sound ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_playing_sound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_listening
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_listening ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_listening", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
