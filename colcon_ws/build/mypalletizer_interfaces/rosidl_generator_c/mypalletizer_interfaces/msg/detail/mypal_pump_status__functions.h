// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mypalletizer_interfaces:msg/MypalPumpStatus.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_PUMP_STATUS__FUNCTIONS_H_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_PUMP_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mypalletizer_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mypalletizer_interfaces/msg/detail/mypal_pump_status__struct.h"

/// Initialize msg/MypalPumpStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mypalletizer_interfaces__msg__MypalPumpStatus
 * )) before or use
 * mypalletizer_interfaces__msg__MypalPumpStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
bool
mypalletizer_interfaces__msg__MypalPumpStatus__init(mypalletizer_interfaces__msg__MypalPumpStatus * msg);

/// Finalize msg/MypalPumpStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
void
mypalletizer_interfaces__msg__MypalPumpStatus__fini(mypalletizer_interfaces__msg__MypalPumpStatus * msg);

/// Create msg/MypalPumpStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mypalletizer_interfaces__msg__MypalPumpStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
mypalletizer_interfaces__msg__MypalPumpStatus *
mypalletizer_interfaces__msg__MypalPumpStatus__create();

/// Destroy msg/MypalPumpStatus message.
/**
 * It calls
 * mypalletizer_interfaces__msg__MypalPumpStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
void
mypalletizer_interfaces__msg__MypalPumpStatus__destroy(mypalletizer_interfaces__msg__MypalPumpStatus * msg);

/// Check for msg/MypalPumpStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
bool
mypalletizer_interfaces__msg__MypalPumpStatus__are_equal(const mypalletizer_interfaces__msg__MypalPumpStatus * lhs, const mypalletizer_interfaces__msg__MypalPumpStatus * rhs);

/// Copy a msg/MypalPumpStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
bool
mypalletizer_interfaces__msg__MypalPumpStatus__copy(
  const mypalletizer_interfaces__msg__MypalPumpStatus * input,
  mypalletizer_interfaces__msg__MypalPumpStatus * output);

/// Initialize array of msg/MypalPumpStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * mypalletizer_interfaces__msg__MypalPumpStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
bool
mypalletizer_interfaces__msg__MypalPumpStatus__Sequence__init(mypalletizer_interfaces__msg__MypalPumpStatus__Sequence * array, size_t size);

/// Finalize array of msg/MypalPumpStatus messages.
/**
 * It calls
 * mypalletizer_interfaces__msg__MypalPumpStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
void
mypalletizer_interfaces__msg__MypalPumpStatus__Sequence__fini(mypalletizer_interfaces__msg__MypalPumpStatus__Sequence * array);

/// Create array of msg/MypalPumpStatus messages.
/**
 * It allocates the memory for the array and calls
 * mypalletizer_interfaces__msg__MypalPumpStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
mypalletizer_interfaces__msg__MypalPumpStatus__Sequence *
mypalletizer_interfaces__msg__MypalPumpStatus__Sequence__create(size_t size);

/// Destroy array of msg/MypalPumpStatus messages.
/**
 * It calls
 * mypalletizer_interfaces__msg__MypalPumpStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
void
mypalletizer_interfaces__msg__MypalPumpStatus__Sequence__destroy(mypalletizer_interfaces__msg__MypalPumpStatus__Sequence * array);

/// Check for msg/MypalPumpStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
bool
mypalletizer_interfaces__msg__MypalPumpStatus__Sequence__are_equal(const mypalletizer_interfaces__msg__MypalPumpStatus__Sequence * lhs, const mypalletizer_interfaces__msg__MypalPumpStatus__Sequence * rhs);

/// Copy an array of msg/MypalPumpStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mypalletizer_interfaces
bool
mypalletizer_interfaces__msg__MypalPumpStatus__Sequence__copy(
  const mypalletizer_interfaces__msg__MypalPumpStatus__Sequence * input,
  mypalletizer_interfaces__msg__MypalPumpStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_PUMP_STATUS__FUNCTIONS_H_
