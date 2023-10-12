// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mycobot_interfaces:msg/MycobotPumpStatus.idl
// generated code does not contain a copyright notice
#include "mycobot_interfaces/msg/detail/mycobot_pump_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mycobot_interfaces__msg__MycobotPumpStatus__init(mycobot_interfaces__msg__MycobotPumpStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // pin1
  // pin2
  return true;
}

void
mycobot_interfaces__msg__MycobotPumpStatus__fini(mycobot_interfaces__msg__MycobotPumpStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
  // pin1
  // pin2
}

bool
mycobot_interfaces__msg__MycobotPumpStatus__are_equal(const mycobot_interfaces__msg__MycobotPumpStatus * lhs, const mycobot_interfaces__msg__MycobotPumpStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // pin1
  if (lhs->pin1 != rhs->pin1) {
    return false;
  }
  // pin2
  if (lhs->pin2 != rhs->pin2) {
    return false;
  }
  return true;
}

bool
mycobot_interfaces__msg__MycobotPumpStatus__copy(
  const mycobot_interfaces__msg__MycobotPumpStatus * input,
  mycobot_interfaces__msg__MycobotPumpStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // pin1
  output->pin1 = input->pin1;
  // pin2
  output->pin2 = input->pin2;
  return true;
}

mycobot_interfaces__msg__MycobotPumpStatus *
mycobot_interfaces__msg__MycobotPumpStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mycobot_interfaces__msg__MycobotPumpStatus * msg = (mycobot_interfaces__msg__MycobotPumpStatus *)allocator.allocate(sizeof(mycobot_interfaces__msg__MycobotPumpStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mycobot_interfaces__msg__MycobotPumpStatus));
  bool success = mycobot_interfaces__msg__MycobotPumpStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mycobot_interfaces__msg__MycobotPumpStatus__destroy(mycobot_interfaces__msg__MycobotPumpStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mycobot_interfaces__msg__MycobotPumpStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mycobot_interfaces__msg__MycobotPumpStatus__Sequence__init(mycobot_interfaces__msg__MycobotPumpStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mycobot_interfaces__msg__MycobotPumpStatus * data = NULL;

  if (size) {
    data = (mycobot_interfaces__msg__MycobotPumpStatus *)allocator.zero_allocate(size, sizeof(mycobot_interfaces__msg__MycobotPumpStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mycobot_interfaces__msg__MycobotPumpStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mycobot_interfaces__msg__MycobotPumpStatus__fini(&data[i - 1]);
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
mycobot_interfaces__msg__MycobotPumpStatus__Sequence__fini(mycobot_interfaces__msg__MycobotPumpStatus__Sequence * array)
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
      mycobot_interfaces__msg__MycobotPumpStatus__fini(&array->data[i]);
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

mycobot_interfaces__msg__MycobotPumpStatus__Sequence *
mycobot_interfaces__msg__MycobotPumpStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mycobot_interfaces__msg__MycobotPumpStatus__Sequence * array = (mycobot_interfaces__msg__MycobotPumpStatus__Sequence *)allocator.allocate(sizeof(mycobot_interfaces__msg__MycobotPumpStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mycobot_interfaces__msg__MycobotPumpStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mycobot_interfaces__msg__MycobotPumpStatus__Sequence__destroy(mycobot_interfaces__msg__MycobotPumpStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mycobot_interfaces__msg__MycobotPumpStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mycobot_interfaces__msg__MycobotPumpStatus__Sequence__are_equal(const mycobot_interfaces__msg__MycobotPumpStatus__Sequence * lhs, const mycobot_interfaces__msg__MycobotPumpStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mycobot_interfaces__msg__MycobotPumpStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mycobot_interfaces__msg__MycobotPumpStatus__Sequence__copy(
  const mycobot_interfaces__msg__MycobotPumpStatus__Sequence * input,
  mycobot_interfaces__msg__MycobotPumpStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mycobot_interfaces__msg__MycobotPumpStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mycobot_interfaces__msg__MycobotPumpStatus * data =
      (mycobot_interfaces__msg__MycobotPumpStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mycobot_interfaces__msg__MycobotPumpStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mycobot_interfaces__msg__MycobotPumpStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mycobot_interfaces__msg__MycobotPumpStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
