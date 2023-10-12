// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mypalletizer_interfaces:srv/GetCoords.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_COORDS__TRAITS_HPP_
#define MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_COORDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mypalletizer_interfaces/srv/detail/get_coords__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mypalletizer_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCoords_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCoords_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCoords_Request & msg, bool use_flow_style = false)
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

}  // namespace mypalletizer_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mypalletizer_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mypalletizer_interfaces::srv::GetCoords_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mypalletizer_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mypalletizer_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mypalletizer_interfaces::srv::GetCoords_Request & msg)
{
  return mypalletizer_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mypalletizer_interfaces::srv::GetCoords_Request>()
{
  return "mypalletizer_interfaces::srv::GetCoords_Request";
}

template<>
inline const char * name<mypalletizer_interfaces::srv::GetCoords_Request>()
{
  return "mypalletizer_interfaces/srv/GetCoords_Request";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::srv::GetCoords_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mypalletizer_interfaces::srv::GetCoords_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mypalletizer_interfaces::srv::GetCoords_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mypalletizer_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCoords_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: rx
  {
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCoords_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx: ";
    rosidl_generator_traits::value_to_yaml(msg.rx, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCoords_Response & msg, bool use_flow_style = false)
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

}  // namespace mypalletizer_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mypalletizer_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mypalletizer_interfaces::srv::GetCoords_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mypalletizer_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mypalletizer_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mypalletizer_interfaces::srv::GetCoords_Response & msg)
{
  return mypalletizer_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mypalletizer_interfaces::srv::GetCoords_Response>()
{
  return "mypalletizer_interfaces::srv::GetCoords_Response";
}

template<>
inline const char * name<mypalletizer_interfaces::srv::GetCoords_Response>()
{
  return "mypalletizer_interfaces/srv/GetCoords_Response";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::srv::GetCoords_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mypalletizer_interfaces::srv::GetCoords_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mypalletizer_interfaces::srv::GetCoords_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mypalletizer_interfaces::srv::GetCoords>()
{
  return "mypalletizer_interfaces::srv::GetCoords";
}

template<>
inline const char * name<mypalletizer_interfaces::srv::GetCoords>()
{
  return "mypalletizer_interfaces/srv/GetCoords";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::srv::GetCoords>
  : std::integral_constant<
    bool,
    has_fixed_size<mypalletizer_interfaces::srv::GetCoords_Request>::value &&
    has_fixed_size<mypalletizer_interfaces::srv::GetCoords_Response>::value
  >
{
};

template<>
struct has_bounded_size<mypalletizer_interfaces::srv::GetCoords>
  : std::integral_constant<
    bool,
    has_bounded_size<mypalletizer_interfaces::srv::GetCoords_Request>::value &&
    has_bounded_size<mypalletizer_interfaces::srv::GetCoords_Response>::value
  >
{
};

template<>
struct is_service<mypalletizer_interfaces::srv::GetCoords>
  : std::true_type
{
};

template<>
struct is_service_request<mypalletizer_interfaces::srv::GetCoords_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mypalletizer_interfaces::srv::GetCoords_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_COORDS__TRAITS_HPP_
