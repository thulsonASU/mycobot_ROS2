// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mypalletizer_interfaces:msg/MypalGripperStatus.idl
// generated code does not contain a copyright notice
#include "mypalletizer_interfaces/msg/detail/mypal_gripper_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mypalletizer_interfaces__msg__MypalGripperStatus__init(mypalletizer_interfaces__msg__MypalGripperStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
mypalletizer_interfaces__msg__MypalGripperStatus__fini(mypalletizer_interfaces__msg__MypalGripperStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
mypalletizer_interfaces__msg__MypalGripperStatus__are_equal(const mypalletizer_interfaces__msg__MypalGripperStatus * lhs, const mypalletizer_interfaces__msg__MypalGripperStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
mypalletizer_interfaces__msg__MypalGripperStatus__copy(
  const mypalletizer_interfaces__msg__MypalGripperStatus * input,
  mypalletizer_interfaces__msg__MypalGripperStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

mypalletizer_interfaces__msg__MypalGripperStatus *
mypalletizer_interfaces__msg__MypalGripperStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mypalletizer_interfaces__msg__MypalGripperStatus * msg = (mypalletizer_interfaces__msg__MypalGripperStatus *)allocator.allocate(sizeof(mypalletizer_interfaces__msg__MypalGripperStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mypalletizer_interfaces__msg__MypalGripperStatus));
  bool success = mypalletizer_interfaces__msg__MypalGripperStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mypalletizer_interfaces__msg__MypalGripperStatus__destroy(mypalletizer_interfaces__msg__MypalGripperStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mypalletizer_interfaces__msg__MypalGripperStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mypalletizer_interfaces__msg__MypalGripperStatus__Sequence__init(mypalletizer_interfaces__msg__MypalGripperStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mypalletizer_interfaces__msg__MypalGripperStatus * data = NULL;

  if (size) {
    data = (mypalletizer_interfaces__msg__MypalGripperStatus *)allocator.zero_allocate(size, sizeof(mypalletizer_interfaces__msg__MypalGripperStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mypalletizer_interfaces__msg__MypalGripperStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mypalletizer_interfaces__msg__MypalGripperStatus__fini(&data[i - 1]);
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
mypalletizer_interfaces__msg__MypalGripperStatus__Sequence__fini(mypalletizer_interfaces__msg__MypalGripperStatus__Sequence * array)
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
      mypalletizer_interfaces__msg__MypalGripperStatus__fini(&array->data[i]);
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

mypalletizer_interfaces__msg__MypalGripperStatus__Sequence *
mypalletizer_interfaces__msg__MypalGripperStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mypalletizer_interfaces__msg__MypalGripperStatus__Sequence * array = (mypalletizer_interfaces__msg__MypalGripperStatus__Sequence *)allocator.allocate(sizeof(mypalletizer_interfaces__msg__MypalGripperStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mypalletizer_interfaces__msg__MypalGripperStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mypalletizer_interfaces__msg__MypalGripperStatus__Sequence__destroy(mypalletizer_interfaces__msg__MypalGripperStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mypalletizer_interfaces__msg__MypalGripperStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mypalletizer_interfaces__msg__MypalGripperStatus__Sequence__are_equal(const mypalletizer_interfaces__msg__MypalGripperStatus__Sequence * lhs, const mypalletizer_interfaces__msg__MypalGripperStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mypalletizer_interfaces__msg__MypalGripperStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mypalletizer_interfaces__msg__MypalGripperStatus__Sequence__copy(
  const mypalletizer_interfaces__msg__MypalGripperStatus__Sequence * input,
  mypalletizer_interfaces__msg__MypalGripperStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mypalletizer_interfaces__msg__MypalGripperStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mypalletizer_interfaces__msg__MypalGripperStatus * data =
      (mypalletizer_interfaces__msg__MypalGripperStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mypalletizer_interfaces__msg__MypalGripperStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mypalletizer_interfaces__msg__MypalGripperStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mypalletizer_interfaces__msg__MypalGripperStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
