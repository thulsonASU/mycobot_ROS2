// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mycobot_interfaces:srv/GetAngles.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_INTERFACES__SRV__DETAIL__GET_ANGLES__TRAITS_HPP_
#define MYCOBOT_INTERFACES__SRV__DETAIL__GET_ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mycobot_interfaces/srv/detail/get_angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mycobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAngles_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetAngles_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAngles_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mycobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mycobot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mycobot_interfaces::srv::GetAngles_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mycobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mycobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mycobot_interfaces::srv::GetAngles_Request & msg)
{
  return mycobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mycobot_interfaces::srv::GetAngles_Request>()
{
  return "mycobot_interfaces::srv::GetAngles_Request";
}

template<>
inline const char * name<mycobot_interfaces::srv::GetAngles_Request>()
{
  return "mycobot_interfaces/srv/GetAngles_Request";
}

template<>
struct has_fixed_size<mycobot_interfaces::srv::GetAngles_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mycobot_interfaces::srv::GetAngles_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mycobot_interfaces::srv::GetAngles_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mycobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAngles_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_1
  {
    out << "joint_1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_1, out);
    out << ", ";
  }

  // member: joint_2
  {
    out << "joint_2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_2, out);
    out << ", ";
  }

  // member: joint_3
  {
    out << "joint_3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_3, out);
    out << ", ";
  }

  // member: joint_4
  {
    out << "joint_4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_4, out);
    out << ", ";
  }

  // member: joint_5
  {
    out << "joint_5: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_5, out);
    out << ", ";
  }

  // member: joint_6
  {
    out << "joint_6: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetAngles_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_1, out);
    out << "\n";
  }

  // member: joint_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_2, out);
    out << "\n";
  }

  // member: joint_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_3, out);
    out << "\n";
  }

  // member: joint_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_4, out);
    out << "\n";
  }

  // member: joint_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_5: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_5, out);
    out << "\n";
  }

  // member: joint_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_6: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAngles_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mycobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mycobot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mycobot_interfaces::srv::GetAngles_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mycobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mycobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mycobot_interfaces::srv::GetAngles_Response & msg)
{
  return mycobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mycobot_interfaces::srv::GetAngles_Response>()
{
  return "mycobot_interfaces::srv::GetAngles_Response";
}

template<>
inline const char * name<mycobot_interfaces::srv::GetAngles_Response>()
{
  return "mycobot_interfaces/srv/GetAngles_Response";
}

template<>
struct has_fixed_size<mycobot_interfaces::srv::GetAngles_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mycobot_interfaces::srv::GetAngles_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mycobot_interfaces::srv::GetAngles_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mycobot_interfaces::srv::GetAngles>()
{
  return "mycobot_interfaces::srv::GetAngles";
}

template<>
inline const char * name<mycobot_interfaces::srv::GetAngles>()
{
  return "mycobot_interfaces/srv/GetAngles";
}

template<>
struct has_fixed_size<mycobot_interfaces::srv::GetAngles>
  : std::integral_constant<
    bool,
    has_fixed_size<mycobot_interfaces::srv::GetAngles_Request>::value &&
    has_fixed_size<mycobot_interfaces::srv::GetAngles_Response>::value
  >
{
};

template<>
struct has_bounded_size<mycobot_interfaces::srv::GetAngles>
  : std::integral_constant<
    bool,
    has_bounded_size<mycobot_interfaces::srv::GetAngles_Request>::value &&
    has_bounded_size<mycobot_interfaces::srv::GetAngles_Response>::value
  >
{
};

template<>
struct is_service<mycobot_interfaces::srv::GetAngles>
  : std::true_type
{
};

template<>
struct is_service_request<mycobot_interfaces::srv::GetAngles_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mycobot_interfaces::srv::GetAngles_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYCOBOT_INTERFACES__SRV__DETAIL__GET_ANGLES__TRAITS_HPP_
