// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from jibo_msgs:msg/JiboVec3.idl
// generated code does not contain a copyright notice
#include "jibo_msgs/msg/detail/jibo_vec3__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
jibo_msgs__msg__JiboVec3__init(jibo_msgs__msg__JiboVec3 * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
jibo_msgs__msg__JiboVec3__fini(jibo_msgs__msg__JiboVec3 * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
jibo_msgs__msg__JiboVec3__are_equal(const jibo_msgs__msg__JiboVec3 * lhs, const jibo_msgs__msg__JiboVec3 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
jibo_msgs__msg__JiboVec3__copy(
  const jibo_msgs__msg__JiboVec3 * input,
  jibo_msgs__msg__JiboVec3 * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

jibo_msgs__msg__JiboVec3 *
jibo_msgs__msg__JiboVec3__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jibo_msgs__msg__JiboVec3 * msg = (jibo_msgs__msg__JiboVec3 *)allocator.allocate(sizeof(jibo_msgs__msg__JiboVec3), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jibo_msgs__msg__JiboVec3));
  bool success = jibo_msgs__msg__JiboVec3__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jibo_msgs__msg__JiboVec3__destroy(jibo_msgs__msg__JiboVec3 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jibo_msgs__msg__JiboVec3__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jibo_msgs__msg__JiboVec3__Sequence__init(jibo_msgs__msg__JiboVec3__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jibo_msgs__msg__JiboVec3 * data = NULL;

  if (size) {
    data = (jibo_msgs__msg__JiboVec3 *)allocator.zero_allocate(size, sizeof(jibo_msgs__msg__JiboVec3), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jibo_msgs__msg__JiboVec3__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jibo_msgs__msg__JiboVec3__fini(&data[i - 1]);
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
jibo_msgs__msg__JiboVec3__Sequence__fini(jibo_msgs__msg__JiboVec3__Sequence * array)
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
      jibo_msgs__msg__JiboVec3__fini(&array->data[i]);
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

jibo_msgs__msg__JiboVec3__Sequence *
jibo_msgs__msg__JiboVec3__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jibo_msgs__msg__JiboVec3__Sequence * array = (jibo_msgs__msg__JiboVec3__Sequence *)allocator.allocate(sizeof(jibo_msgs__msg__JiboVec3__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jibo_msgs__msg__JiboVec3__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jibo_msgs__msg__JiboVec3__Sequence__destroy(jibo_msgs__msg__JiboVec3__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jibo_msgs__msg__JiboVec3__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jibo_msgs__msg__JiboVec3__Sequence__are_equal(const jibo_msgs__msg__JiboVec3__Sequence * lhs, const jibo_msgs__msg__JiboVec3__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jibo_msgs__msg__JiboVec3__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jibo_msgs__msg__JiboVec3__Sequence__copy(
  const jibo_msgs__msg__JiboVec3__Sequence * input,
  jibo_msgs__msg__JiboVec3__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jibo_msgs__msg__JiboVec3);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    jibo_msgs__msg__JiboVec3 * data =
      (jibo_msgs__msg__JiboVec3 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jibo_msgs__msg__JiboVec3__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          jibo_msgs__msg__JiboVec3__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!jibo_msgs__msg__JiboVec3__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
