// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from jibo_msgs:msg/JiboAction.idl
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
#include "jibo_msgs/msg/detail/jibo_action__struct.h"
#include "jibo_msgs/msg/detail/jibo_action__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool jibo_msgs__msg__jibo_vec3__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * jibo_msgs__msg__jibo_vec3__convert_to_py(void * raw_ros_message);
bool jibo_msgs__msg__jibo_vec3__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * jibo_msgs__msg__jibo_vec3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool jibo_msgs__msg__jibo_action__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("jibo_msgs.msg._jibo_action.JiboAction", full_classname_dest, 37) == 0);
  }
  jibo_msgs__msg__JiboAction * ros_message = _ros_message;
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
  {  // do_motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "do_motion");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->do_motion = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->motion, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // do_lookat
    PyObject * field = PyObject_GetAttrString(_pymsg, "do_lookat");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->do_lookat = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lookat
    PyObject * field = PyObject_GetAttrString(_pymsg, "lookat");
    if (!field) {
      return false;
    }
    if (!jibo_msgs__msg__jibo_vec3__convert_from_py(field, &ros_message->lookat)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // do_tts
    PyObject * field = PyObject_GetAttrString(_pymsg, "do_tts");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->do_tts = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tts_text
    PyObject * field = PyObject_GetAttrString(_pymsg, "tts_text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->tts_text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // do_mim
    PyObject * field = PyObject_GetAttrString(_pymsg, "do_mim");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->do_mim = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mim_body
    PyObject * field = PyObject_GetAttrString(_pymsg, "mim_body");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mim_body, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // mim_rule
    PyObject * field = PyObject_GetAttrString(_pymsg, "mim_rule");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mim_rule, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // do_sound_playback
    PyObject * field = PyObject_GetAttrString(_pymsg, "do_sound_playback");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->do_sound_playback = (Py_True == field);
    Py_DECREF(field);
  }
  {  // audio_filename
    PyObject * field = PyObject_GetAttrString(_pymsg, "audio_filename");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->audio_filename, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // led_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_color");
    if (!field) {
      return false;
    }
    if (!jibo_msgs__msg__jibo_vec3__convert_from_py(field, &ros_message->led_color)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // do_volume
    PyObject * field = PyObject_GetAttrString(_pymsg, "do_volume");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->do_volume = (Py_True == field);
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
  {  // do_anim_transition
    PyObject * field = PyObject_GetAttrString(_pymsg, "do_anim_transition");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->do_anim_transition = (Py_True == field);
    Py_DECREF(field);
  }
  {  // anim_transition
    PyObject * field = PyObject_GetAttrString(_pymsg, "anim_transition");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->anim_transition = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // do_attention_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "do_attention_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->do_attention_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // attention_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "attention_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->attention_mode = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tts_duration_stretch
    PyObject * field = PyObject_GetAttrString(_pymsg, "tts_duration_stretch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tts_duration_stretch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tts_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "tts_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tts_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * jibo_msgs__msg__jibo_action__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JiboAction */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("jibo_msgs.msg._jibo_action");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JiboAction");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  jibo_msgs__msg__JiboAction * ros_message = (jibo_msgs__msg__JiboAction *)raw_ros_message;
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
  {  // do_motion
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->do_motion ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "do_motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->motion.data,
      strlen(ros_message->motion.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // do_lookat
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->do_lookat ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "do_lookat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lookat
    PyObject * field = NULL;
    field = jibo_msgs__msg__jibo_vec3__convert_to_py(&ros_message->lookat);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lookat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // do_tts
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->do_tts ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "do_tts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tts_text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->tts_text.data,
      strlen(ros_message->tts_text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tts_text", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // do_mim
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->do_mim ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "do_mim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mim_body
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mim_body.data,
      strlen(ros_message->mim_body.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mim_body", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mim_rule
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mim_rule.data,
      strlen(ros_message->mim_rule.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mim_rule", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // do_sound_playback
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->do_sound_playback ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "do_sound_playback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // audio_filename
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->audio_filename.data,
      strlen(ros_message->audio_filename.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "audio_filename", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // led_color
    PyObject * field = NULL;
    field = jibo_msgs__msg__jibo_vec3__convert_to_py(&ros_message->led_color);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // do_volume
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->do_volume ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "do_volume", field);
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
  {  // do_anim_transition
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->do_anim_transition ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "do_anim_transition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // anim_transition
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->anim_transition);
    {
      int rc = PyObject_SetAttrString(_pymessage, "anim_transition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // do_attention_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->do_attention_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "do_attention_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attention_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->attention_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attention_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tts_duration_stretch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tts_duration_stretch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tts_duration_stretch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tts_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tts_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tts_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
