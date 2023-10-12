// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mecharm_interfaces:msg/MecharmGripperStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mecharm_interfaces/msg/detail/mecharm_gripper_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mecharm_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MecharmGripperStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mecharm_interfaces::msg::MecharmGripperStatus(_init);
}

void MecharmGripperStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mecharm_interfaces::msg::MecharmGripperStatus *>(message_memory);
  typed_message->~MecharmGripperStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MecharmGripperStatus_message_member_array[1] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mecharm_interfaces::msg::MecharmGripperStatus, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MecharmGripperStatus_message_members = {
  "mecharm_interfaces::msg",  // message namespace
  "MecharmGripperStatus",  // message name
  1,  // number of fields
  sizeof(mecharm_interfaces::msg::MecharmGripperStatus),
  MecharmGripperStatus_message_member_array,  // message members
  MecharmGripperStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  MecharmGripperStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MecharmGripperStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MecharmGripperStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mecharm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mecharm_interfaces::msg::MecharmGripperStatus>()
{
  return &::mecharm_interfaces::msg::rosidl_typesupport_introspection_cpp::MecharmGripperStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mecharm_interfaces, msg, MecharmGripperStatus)() {
  return &::mecharm_interfaces::msg::rosidl_typesupport_introspection_cpp::MecharmGripperStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
