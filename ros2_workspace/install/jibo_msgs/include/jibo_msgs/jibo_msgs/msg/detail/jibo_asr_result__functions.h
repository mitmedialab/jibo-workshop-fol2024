// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from jibo_msgs:msg/JiboAsrResult.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__FUNCTIONS_H_
#define JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "jibo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "jibo_msgs/msg/detail/jibo_asr_result__struct.h"

/// Initialize msg/JiboAsrResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * jibo_msgs__msg__JiboAsrResult
 * )) before or use
 * jibo_msgs__msg__JiboAsrResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
bool
jibo_msgs__msg__JiboAsrResult__init(jibo_msgs__msg__JiboAsrResult * msg);

/// Finalize msg/JiboAsrResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
void
jibo_msgs__msg__JiboAsrResult__fini(jibo_msgs__msg__JiboAsrResult * msg);

/// Create msg/JiboAsrResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * jibo_msgs__msg__JiboAsrResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
jibo_msgs__msg__JiboAsrResult *
jibo_msgs__msg__JiboAsrResult__create();

/// Destroy msg/JiboAsrResult message.
/**
 * It calls
 * jibo_msgs__msg__JiboAsrResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
void
jibo_msgs__msg__JiboAsrResult__destroy(jibo_msgs__msg__JiboAsrResult * msg);

/// Check for msg/JiboAsrResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
bool
jibo_msgs__msg__JiboAsrResult__are_equal(const jibo_msgs__msg__JiboAsrResult * lhs, const jibo_msgs__msg__JiboAsrResult * rhs);

/// Copy a msg/JiboAsrResult message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
bool
jibo_msgs__msg__JiboAsrResult__copy(
  const jibo_msgs__msg__JiboAsrResult * input,
  jibo_msgs__msg__JiboAsrResult * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
const rosidl_type_hash_t *
jibo_msgs__msg__JiboAsrResult__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
jibo_msgs__msg__JiboAsrResult__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
const rosidl_runtime_c__type_description__TypeSource *
jibo_msgs__msg__JiboAsrResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
jibo_msgs__msg__JiboAsrResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/JiboAsrResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * jibo_msgs__msg__JiboAsrResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
bool
jibo_msgs__msg__JiboAsrResult__Sequence__init(jibo_msgs__msg__JiboAsrResult__Sequence * array, size_t size);

/// Finalize array of msg/JiboAsrResult messages.
/**
 * It calls
 * jibo_msgs__msg__JiboAsrResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
void
jibo_msgs__msg__JiboAsrResult__Sequence__fini(jibo_msgs__msg__JiboAsrResult__Sequence * array);

/// Create array of msg/JiboAsrResult messages.
/**
 * It allocates the memory for the array and calls
 * jibo_msgs__msg__JiboAsrResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
jibo_msgs__msg__JiboAsrResult__Sequence *
jibo_msgs__msg__JiboAsrResult__Sequence__create(size_t size);

/// Destroy array of msg/JiboAsrResult messages.
/**
 * It calls
 * jibo_msgs__msg__JiboAsrResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
void
jibo_msgs__msg__JiboAsrResult__Sequence__destroy(jibo_msgs__msg__JiboAsrResult__Sequence * array);

/// Check for msg/JiboAsrResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
bool
jibo_msgs__msg__JiboAsrResult__Sequence__are_equal(const jibo_msgs__msg__JiboAsrResult__Sequence * lhs, const jibo_msgs__msg__JiboAsrResult__Sequence * rhs);

/// Copy an array of msg/JiboAsrResult messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
bool
jibo_msgs__msg__JiboAsrResult__Sequence__copy(
  const jibo_msgs__msg__JiboAsrResult__Sequence * input,
  jibo_msgs__msg__JiboAsrResult__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__FUNCTIONS_H_
