// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from jibo_msgs:msg/JiboAction.idl
// generated code does not contain a copyright notice
#include "jibo_msgs/msg/detail/jibo_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `motion`
// Member `tts_text`
// Member `mim_body`
// Member `mim_rule`
// Member `audio_filename`
#include "rosidl_runtime_c/string_functions.h"
// Member `lookat`
// Member `led_color`
#include "jibo_msgs/msg/detail/jibo_vec3__functions.h"

bool
jibo_msgs__msg__JiboAction__init(jibo_msgs__msg__JiboAction * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    jibo_msgs__msg__JiboAction__fini(msg);
    return false;
  }
  // do_motion
  // motion
  if (!rosidl_runtime_c__String__init(&msg->motion)) {
    jibo_msgs__msg__JiboAction__fini(msg);
    return false;
  }
  // do_lookat
  // lookat
  if (!jibo_msgs__msg__JiboVec3__init(&msg->lookat)) {
    jibo_msgs__msg__JiboAction__fini(msg);
    return false;
  }
  // do_tts
  // tts_text
  if (!rosidl_runtime_c__String__init(&msg->tts_text)) {
    jibo_msgs__msg__JiboAction__fini(msg);
    return false;
  }
  // do_mim
  // mim_body
  if (!rosidl_runtime_c__String__init(&msg->mim_body)) {
    jibo_msgs__msg__JiboAction__fini(msg);
    return false;
  }
  // mim_rule
  if (!rosidl_runtime_c__String__init(&msg->mim_rule)) {
    jibo_msgs__msg__JiboAction__fini(msg);
    return false;
  }
  // do_sound_playback
  // audio_filename
  if (!rosidl_runtime_c__String__init(&msg->audio_filename)) {
    jibo_msgs__msg__JiboAction__fini(msg);
    return false;
  }
  // led_color
  if (!jibo_msgs__msg__JiboVec3__init(&msg->led_color)) {
    jibo_msgs__msg__JiboAction__fini(msg);
    return false;
  }
  // do_volume
  // volume
  // do_anim_transition
  // anim_transition
  // do_attention_mode
  // attention_mode
  // tts_duration_stretch
  // tts_pitch
  return true;
}

void
jibo_msgs__msg__JiboAction__fini(jibo_msgs__msg__JiboAction * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // do_motion
  // motion
  rosidl_runtime_c__String__fini(&msg->motion);
  // do_lookat
  // lookat
  jibo_msgs__msg__JiboVec3__fini(&msg->lookat);
  // do_tts
  // tts_text
  rosidl_runtime_c__String__fini(&msg->tts_text);
  // do_mim
  // mim_body
  rosidl_runtime_c__String__fini(&msg->mim_body);
  // mim_rule
  rosidl_runtime_c__String__fini(&msg->mim_rule);
  // do_sound_playback
  // audio_filename
  rosidl_runtime_c__String__fini(&msg->audio_filename);
  // led_color
  jibo_msgs__msg__JiboVec3__fini(&msg->led_color);
  // do_volume
  // volume
  // do_anim_transition
  // anim_transition
  // do_attention_mode
  // attention_mode
  // tts_duration_stretch
  // tts_pitch
}

bool
jibo_msgs__msg__JiboAction__are_equal(const jibo_msgs__msg__JiboAction * lhs, const jibo_msgs__msg__JiboAction * rhs)
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
  // do_motion
  if (lhs->do_motion != rhs->do_motion) {
    return false;
  }
  // motion
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->motion), &(rhs->motion)))
  {
    return false;
  }
  // do_lookat
  if (lhs->do_lookat != rhs->do_lookat) {
    return false;
  }
  // lookat
  if (!jibo_msgs__msg__JiboVec3__are_equal(
      &(lhs->lookat), &(rhs->lookat)))
  {
    return false;
  }
  // do_tts
  if (lhs->do_tts != rhs->do_tts) {
    return false;
  }
  // tts_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tts_text), &(rhs->tts_text)))
  {
    return false;
  }
  // do_mim
  if (lhs->do_mim != rhs->do_mim) {
    return false;
  }
  // mim_body
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mim_body), &(rhs->mim_body)))
  {
    return false;
  }
  // mim_rule
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mim_rule), &(rhs->mim_rule)))
  {
    return false;
  }
  // do_sound_playback
  if (lhs->do_sound_playback != rhs->do_sound_playback) {
    return false;
  }
  // audio_filename
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->audio_filename), &(rhs->audio_filename)))
  {
    return false;
  }
  // led_color
  if (!jibo_msgs__msg__JiboVec3__are_equal(
      &(lhs->led_color), &(rhs->led_color)))
  {
    return false;
  }
  // do_volume
  if (lhs->do_volume != rhs->do_volume) {
    return false;
  }
  // volume
  if (lhs->volume != rhs->volume) {
    return false;
  }
  // do_anim_transition
  if (lhs->do_anim_transition != rhs->do_anim_transition) {
    return false;
  }
  // anim_transition
  if (lhs->anim_transition != rhs->anim_transition) {
    return false;
  }
  // do_attention_mode
  if (lhs->do_attention_mode != rhs->do_attention_mode) {
    return false;
  }
  // attention_mode
  if (lhs->attention_mode != rhs->attention_mode) {
    return false;
  }
  // tts_duration_stretch
  if (lhs->tts_duration_stretch != rhs->tts_duration_stretch) {
    return false;
  }
  // tts_pitch
  if (lhs->tts_pitch != rhs->tts_pitch) {
    return false;
  }
  return true;
}

bool
jibo_msgs__msg__JiboAction__copy(
  const jibo_msgs__msg__JiboAction * input,
  jibo_msgs__msg__JiboAction * output)
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
  // do_motion
  output->do_motion = input->do_motion;
  // motion
  if (!rosidl_runtime_c__String__copy(
      &(input->motion), &(output->motion)))
  {
    return false;
  }
  // do_lookat
  output->do_lookat = input->do_lookat;
  // lookat
  if (!jibo_msgs__msg__JiboVec3__copy(
      &(input->lookat), &(output->lookat)))
  {
    return false;
  }
  // do_tts
  output->do_tts = input->do_tts;
  // tts_text
  if (!rosidl_runtime_c__String__copy(
      &(input->tts_text), &(output->tts_text)))
  {
    return false;
  }
  // do_mim
  output->do_mim = input->do_mim;
  // mim_body
  if (!rosidl_runtime_c__String__copy(
      &(input->mim_body), &(output->mim_body)))
  {
    return false;
  }
  // mim_rule
  if (!rosidl_runtime_c__String__copy(
      &(input->mim_rule), &(output->mim_rule)))
  {
    return false;
  }
  // do_sound_playback
  output->do_sound_playback = input->do_sound_playback;
  // audio_filename
  if (!rosidl_runtime_c__String__copy(
      &(input->audio_filename), &(output->audio_filename)))
  {
    return false;
  }
  // led_color
  if (!jibo_msgs__msg__JiboVec3__copy(
      &(input->led_color), &(output->led_color)))
  {
    return false;
  }
  // do_volume
  output->do_volume = input->do_volume;
  // volume
  output->volume = input->volume;
  // do_anim_transition
  output->do_anim_transition = input->do_anim_transition;
  // anim_transition
  output->anim_transition = input->anim_transition;
  // do_attention_mode
  output->do_attention_mode = input->do_attention_mode;
  // attention_mode
  output->attention_mode = input->attention_mode;
  // tts_duration_stretch
  output->tts_duration_stretch = input->tts_duration_stretch;
  // tts_pitch
  output->tts_pitch = input->tts_pitch;
  return true;
}

jibo_msgs__msg__JiboAction *
jibo_msgs__msg__JiboAction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jibo_msgs__msg__JiboAction * msg = (jibo_msgs__msg__JiboAction *)allocator.allocate(sizeof(jibo_msgs__msg__JiboAction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jibo_msgs__msg__JiboAction));
  bool success = jibo_msgs__msg__JiboAction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
jibo_msgs__msg__JiboAction__destroy(jibo_msgs__msg__JiboAction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    jibo_msgs__msg__JiboAction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
jibo_msgs__msg__JiboAction__Sequence__init(jibo_msgs__msg__JiboAction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jibo_msgs__msg__JiboAction * data = NULL;

  if (size) {
    data = (jibo_msgs__msg__JiboAction *)allocator.zero_allocate(size, sizeof(jibo_msgs__msg__JiboAction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jibo_msgs__msg__JiboAction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jibo_msgs__msg__JiboAction__fini(&data[i - 1]);
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
jibo_msgs__msg__JiboAction__Sequence__fini(jibo_msgs__msg__JiboAction__Sequence * array)
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
      jibo_msgs__msg__JiboAction__fini(&array->data[i]);
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

jibo_msgs__msg__JiboAction__Sequence *
jibo_msgs__msg__JiboAction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  jibo_msgs__msg__JiboAction__Sequence * array = (jibo_msgs__msg__JiboAction__Sequence *)allocator.allocate(sizeof(jibo_msgs__msg__JiboAction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = jibo_msgs__msg__JiboAction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
jibo_msgs__msg__JiboAction__Sequence__destroy(jibo_msgs__msg__JiboAction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    jibo_msgs__msg__JiboAction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
jibo_msgs__msg__JiboAction__Sequence__are_equal(const jibo_msgs__msg__JiboAction__Sequence * lhs, const jibo_msgs__msg__JiboAction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!jibo_msgs__msg__JiboAction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
jibo_msgs__msg__JiboAction__Sequence__copy(
  const jibo_msgs__msg__JiboAction__Sequence * input,
  jibo_msgs__msg__JiboAction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(jibo_msgs__msg__JiboAction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    jibo_msgs__msg__JiboAction * data =
      (jibo_msgs__msg__JiboAction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!jibo_msgs__msg__JiboAction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          jibo_msgs__msg__JiboAction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!jibo_msgs__msg__JiboAction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
