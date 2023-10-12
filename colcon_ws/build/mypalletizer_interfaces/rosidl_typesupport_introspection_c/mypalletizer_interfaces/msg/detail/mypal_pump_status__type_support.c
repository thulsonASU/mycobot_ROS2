// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mypalletizer_interfaces:msg/MypalPumpStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mypalletizer_interfaces/msg/detail/mypal_pump_status__rosidl_typesupport_introspection_c.h"
#include "mypalletizer_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mypalletizer_interfaces/msg/detail/mypal_pump_status__functions.h"
#include "mypalletizer_interfaces/msg/detail/mypal_pump_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mypalletizer_interfaces__msg__MypalPumpStatus__rosidl_typesupport_introspection_c__MypalPumpStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mypalletizer_interfaces__msg__MypalPumpStatus__init(message_memory);
}

void mypalletizer_interfaces__msg__MypalPumpStatus__rosidl_typesupport_introspection_c__MypalPumpStatus_fini_function(void * message_memory)
{
  mypalletizer_interfaces__msg__MypalPumpStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mypalletizer_interfaces__msg__MypalPumpStatus__rosidl_typesupport_introspection_c__MypalPumpStatus_message_member_array[3] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mypalletizer_interfaces__msg__MypalPumpStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pin1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mypalletizer_interfaces__msg__MypalPumpStatus, pin1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pin2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mypalletizer_interfaces__msg__MypalPumpStatus, pin2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mypalletizer_interfaces__msg__MypalPumpStatus__rosidl_typesupport_introspection_c__MypalPumpStatus_message_members = {
  "mypalletizer_interfaces__msg",  // message namespace
  "MypalPumpStatus",  // message name
  3,  // number of fields
  sizeof(mypalletizer_interfaces__msg__MypalPumpStatus),
  mypalletizer_interfaces__msg__MypalPumpStatus__rosidl_typesupport_introspection_c__MypalPumpStatus_message_member_array,  // message members
  mypalletizer_interfaces__msg__MypalPumpStatus__rosidl_typesupport_introspection_c__MypalPumpStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  mypalletizer_interfaces__msg__MypalPumpStatus__rosidl_typesupport_introspection_c__MypalPumpStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mypalletizer_interfaces__msg__MypalPumpStatus__rosidl_typesupport_introspection_c__MypalPumpStatus_message_type_support_handle = {
  0,
  &mypalletizer_interfaces__msg__MypalPumpStatus__rosidl_typesupport_introspection_c__MypalPumpStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mypalletizer_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mypalletizer_interfaces, msg, MypalPumpStatus)() {
  if (!mypalletizer_interfaces__msg__MypalPumpStatus__rosidl_typesupport_introspection_c__MypalPumpStatus_message_type_support_handle.typesupport_identifier) {
    mypalletizer_interfaces__msg__MypalPumpStatus__rosidl_typesupport_introspection_c__MypalPumpStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mypalletizer_interfaces__msg__MypalPumpStatus__rosidl_typesupport_introspection_c__MypalPumpStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
