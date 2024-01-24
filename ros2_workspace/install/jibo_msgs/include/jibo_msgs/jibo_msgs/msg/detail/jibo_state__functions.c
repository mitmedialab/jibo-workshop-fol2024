// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from jibo_msgs:msg/JiboState.idl
// generated code does not contain a copyright notice
#include "jibo_msgs/msg/detail/jibo_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `in_motion`
// Member `audio`
// Member `tts_msg`
#include "rosidl_runtime_c/string_functions.h"

bool
jibo_msgs__msg__JiboState__init(jibo_msgs__msg__JiboState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    jibo_msgs__msg__JiboState__fini(msg);
    return false;
  }
  // in_motion
  if (!rosidl_runtime_c__String__init(&msg->in_motion)) {
    jibo_msgs__msg__JiboState__fini(msg);
    return false;
  }
  // audio
  if (!rosidl_runtime_c__String__init(&msg->audio)) {
    jibo_msgs__msg__JiboState__fini(msg);
    return false;
  }
  // tts_msg
  if (!rosidl_runtime_c__String__init(&msg->tts_msg)) {
    jibo_msgs__msg__JiboState__fini(msg);
    return false;
  }
  // volume
  // doing_motion
  // is_playing_sound
  // is_listening
  return true;
}

void
jibo_msgs__msg__JiboState__fini(jibo_msgs__msg__JiboState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // in_motion
  rosidl_runtime_c__String__fini(&msg->in_motion);
  // audio
  rosidl_runtime_c__String__fini(&msg->audio);
  // tts_msg
  rosidl_runtime_c__String__fini(&msg->tts_msg);
  // volume
  // doing_motion
  // is_playing_sound
  // is_listening
}

bool
jibo_msgs__msg__JiboState__are_equal(const jibo_msgs__msg__JiboState * lhs, const jibo_msgs__msg__JiboState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // in_motion
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->in_motion), &(rhs->in_motion)))
  {
    return false;
  }
  // audio
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->audio), &(rhs->audio)))
  {
    return false;
  }
  // tts_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tts_msg), &(rhs->tts_msg)))
  {
    return false;
  }
  // volume
  if (lhs->volume != rhs->volume) {
    return false;
  }
  // doing_motion
  if (lhs->doing_motion != rhs->doing_motion) {
    return false;
  }
  // is_playing_sound
  if (lhs->is_playing_sound != rhs->is_playing_sound) {
    return false;
  }
  // is_listening
  if (lhs->is_listening != rhs->is_listening) {
    return false;
  }
  return true;
}

bool
jibo_msgs__msg__JiboState__copy(
  const jibo_msgs__msg__JiboState * input,
  jibo_msgs__msg__JiboState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // in_motion
  if (!rosidl_runtime_c__String__copy(
      &(input->in_motion), &(output->in_motion)))
  {
    return false;
  }
  // audio
  if (!rosidl_runtime_c__String__copy(
      &(input->audio), &(output->audio)))
  {
    return false;
  }
  // tts_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->tts_msg), &(output->tts_msg)))
  {
    return false;
  }
  // volume
  output->volume = input->volume;
  // doing_motion
  output->doing_motion = input->doing_motion;
  // is_playing_sound
  output->is_playing_sound = input->is_playing_sound;
  // is_listening
  output->is_listening = input->is_listening;
  return true;
}

jibo_msgs__msg__JiboState *
jibo_msgs__msg__JiboState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jibo_msgs__msg__JiboState * msg = (jibo_msgs__msg__JiboState *)allocator.allocate(sizeof(jibo_msgs__msg__JiboState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jibo_msgs__msg__JiboState));
  bool success = jibo_msgs__msg__JiboState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jibo_msgs__msg__JiboState__destroy(jibo_msgs__msg__JiboState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jibo_msgs__msg__JiboState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jibo_msgs__msg__JiboState__Sequence__init(jibo_msgs__msg__JiboState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jibo_msgs__msg__JiboState * data = NULL;

  if (size) {
    data = (jibo_msgs__msg__JiboState *)allocator.zero_allocate(size, sizeof(jibo_msgs__msg__JiboState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jibo_msgs__msg__JiboState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jibo_msgs__msg__JiboState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
jibo_msgs__msg__JiboState__Sequence__fini(jibo_msgs__msg__JiboState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      jibo_msgs__msg__JiboState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

jibo_msgs__msg__JiboState__Sequence *
jibo_msgs__msg__JiboState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jibo_msgs__msg__JiboState__Sequence * array = (jibo_msgs__msg__JiboState__Sequence *)allocator.allocate(sizeof(jibo_msgs__msg__JiboState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jibo_msgs__msg__JiboState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jibo_msgs__msg__JiboState__Sequence__destroy(jibo_msgs__msg__JiboState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jibo_msgs__msg__JiboState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jibo_msgs__msg__JiboState__Sequence__are_equal(const jibo_msgs__msg__JiboState__Sequence * lhs, const jibo_msgs__msg__JiboState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jibo_msgs__msg__JiboState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jibo_msgs__msg__JiboState__Sequence__copy(
  const jibo_msgs__msg__JiboState__Sequence * input,
  jibo_msgs__msg__JiboState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jibo_msgs__msg__JiboState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    jibo_msgs__msg__JiboState * data =
      (jibo_msgs__msg__JiboState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jibo_msgs__msg__JiboState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          jibo_msgs__msg__JiboState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!jibo_msgs__msg__JiboState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
