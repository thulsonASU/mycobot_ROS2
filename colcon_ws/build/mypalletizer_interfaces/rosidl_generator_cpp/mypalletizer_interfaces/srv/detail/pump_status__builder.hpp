// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mypalletizer_interfaces:srv/PumpStatus.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__SRV__DETAIL__PUMP_STATUS__BUILDER_HPP_
#define MYPALLETIZER_INTERFACES__SRV__DETAIL__PUMP_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mypalletizer_interfaces/srv/detail/pump_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mypalletizer_interfaces
{

namespace srv
{

namespace builder
{

class Init_PumpStatus_Request_pin2
{
public:
  explicit Init_PumpStatus_Request_pin2(::mypalletizer_interfaces::srv::PumpStatus_Request & msg)
  : msg_(msg)
  {}
  ::mypalletizer_interfaces::srv::PumpStatus_Request pin2(::mypalletizer_interfaces::srv::PumpStatus_Request::_pin2_type arg)
  {
    msg_.pin2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::PumpStatus_Request msg_;
};

class Init_PumpStatus_Request_pin1
{
public:
  explicit Init_PumpStatus_Request_pin1(::mypalletizer_interfaces::srv::PumpStatus_Request & msg)
  : msg_(msg)
  {}
  Init_PumpStatus_Request_pin2 pin1(::mypalletizer_interfaces::srv::PumpStatus_Request::_pin1_type arg)
  {
    msg_.pin1 = std::move(arg);
    return Init_PumpStatus_Request_pin2(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::PumpStatus_Request msg_;
};

class Init_PumpStatus_Request_status
{
public:
  Init_PumpStatus_Request_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PumpStatus_Request_pin1 status(::mypalletizer_interfaces::srv::PumpStatus_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PumpStatus_Request_pin1(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::PumpStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mypalletizer_interfaces::srv::PumpStatus_Request>()
{
  return mypalletizer_interfaces::srv::builder::Init_PumpStatus_Request_status();
}

}  // namespace mypalletizer_interfaces


namespace mypalletizer_interfaces
{

namespace srv
{

namespace builder
{

class Init_PumpStatus_Response_flag
{
public:
  Init_PumpStatus_Response_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mypalletizer_interfaces::srv::PumpStatus_Response flag(::mypalletizer_interfaces::srv::PumpStatus_Response::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mypalletizer_interfaces::srv::PumpStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mypalletizer_interfaces::srv::PumpStatus_Response>()
{
  return mypalletizer_interfaces::srv::builder::Init_PumpStatus_Response_flag();
}

}  // namespace mypalletizer_interfaces

#endif  // MYPALLETIZER_INTERFACES__SRV__DETAIL__PUMP_STATUS__BUILDER_HPP_
