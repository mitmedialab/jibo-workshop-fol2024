// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from jibo_msgs:msg/JiboAsrResult.idl
// generated code does not contain a copyright notice
#include "jibo_msgs/msg/detail/jibo_asr_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `transcription`
// Member `slotaction`
#include "rosidl_runtime_c/string_functions.h"

bool
jibo_msgs__msg__JiboAsrResult__init(jibo_msgs__msg__JiboAsrResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    jibo_msgs__msg__JiboAsrResult__fini(msg);
    return false;
  }
  // transcription
  if (!rosidl_runtime_c__String__init(&msg->transcription)) {
    jibo_msgs__msg__JiboAsrResult__fini(msg);
    return false;
  }
  // heyjibo
  // confidence
  // heuristic_score
  // slotaction
  if (!rosidl_runtime_c__String__init(&msg->slotaction)) {
    jibo_msgs__msg__JiboAsrResult__fini(msg);
    return false;
  }
  return true;
}

void
jibo_msgs__msg__JiboAsrResult__fini(jibo_msgs__msg__JiboAsrResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // transcription
  rosidl_runtime_c__String__fini(&msg->transcription);
  // heyjibo
  // confidence
  // heuristic_score
  // slotaction
  rosidl_runtime_c__String__fini(&msg->slotaction);
}

bool
jibo_msgs__msg__JiboAsrResult__are_equal(const jibo_msgs__msg__JiboAsrResult * lhs, const jibo_msgs__msg__JiboAsrResult * rhs)
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
  // transcription
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->transcription), &(rhs->transcription)))
  {
    return false;
  }
  // heyjibo
  if (lhs->heyjibo != rhs->heyjibo) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // heuristic_score
  if (lhs->heuristic_score != rhs->heuristic_score) {
    return false;
  }
  // slotaction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->slotaction), &(rhs->slotaction)))
  {
    return false;
  }
  return true;
}

bool
jibo_msgs__msg__JiboAsrResult__copy(
  const jibo_msgs__msg__JiboAsrResult * input,
  jibo_msgs__msg__JiboAsrResult * output)
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
  // transcription
  if (!rosidl_runtime_c__String__copy(
      &(input->transcription), &(output->transcription)))
  {
    return false;
  }
  // heyjibo
  output->heyjibo = input->heyjibo;
  // confidence
  output->confidence = input->confidence;
  // heuristic_score
  output->heuristic_score = input->heuristic_score;
  // slotaction
  if (!rosidl_runtime_c__String__copy(
      &(input->slotaction), &(output->slotaction)))
  {
    return false;
  }
  return true;
}

jibo_msgs__msg__JiboAsrResult *
jibo_msgs__msg__JiboAsrResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jibo_msgs__msg__JiboAsrResult * msg = (jibo_msgs__msg__JiboAsrResult *)allocator.allocate(sizeof(jibo_msgs__msg__JiboAsrResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jibo_msgs__msg__JiboAsrResult));
  bool success = jibo_msgs__msg__JiboAsrResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jibo_msgs__msg__JiboAsrResult__destroy(jibo_msgs__msg__JiboAsrResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jibo_msgs__msg__JiboAsrResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jibo_msgs__msg__JiboAsrResult__Sequence__init(jibo_msgs__msg__JiboAsrResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jibo_msgs__msg__JiboAsrResult * data = NULL;

  if (size) {
    data = (jibo_msgs__msg__JiboAsrResult *)allocator.zero_allocate(size, sizeof(jibo_msgs__msg__JiboAsrResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jibo_msgs__msg__JiboAsrResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jibo_msgs__msg__JiboAsrResult__fini(&data[i - 1]);
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
jibo_msgs__msg__JiboAsrResult__Sequence__fini(jibo_msgs__msg__JiboAsrResult__Sequence * array)
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
      jibo_msgs__msg__JiboAsrResult__fini(&array->data[i]);
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

jibo_msgs__msg__JiboAsrResult__Sequence *
jibo_msgs__msg__JiboAsrResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jibo_msgs__msg__JiboAsrResult__Sequence * array = (jibo_msgs__msg__JiboAsrResult__Sequence *)allocator.allocate(sizeof(jibo_msgs__msg__JiboAsrResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jibo_msgs__msg__JiboAsrResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jibo_msgs__msg__JiboAsrResult__Sequence__destroy(jibo_msgs__msg__JiboAsrResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jibo_msgs__msg__JiboAsrResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jibo_msgs__msg__JiboAsrResult__Sequence__are_equal(const jibo_msgs__msg__JiboAsrResult__Sequence * lhs, const jibo_msgs__msg__JiboAsrResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jibo_msgs__msg__JiboAsrResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jibo_msgs__msg__JiboAsrResult__Sequence__copy(
  const jibo_msgs__msg__JiboAsrResult__Sequence * input,
  jibo_msgs__msg__JiboAsrResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jibo_msgs__msg__JiboAsrResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    jibo_msgs__msg__JiboAsrResult * data =
      (jibo_msgs__msg__JiboAsrResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jibo_msgs__msg__JiboAsrResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          jibo_msgs__msg__JiboAsrResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!jibo_msgs__msg__JiboAsrResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
