// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/SetPlannerParams.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__SET_PLANNER_PARAMS__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__SET_PLANNER_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'params'
#include "moveit_msgs/msg/detail/planner_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__SetPlannerParams_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__SetPlannerParams_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPlannerParams_Request_
{
  using Type = SetPlannerParams_Request_<ContainerAllocator>;

  explicit SetPlannerParams_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pipeline_id = "";
      this->planner_config = "";
      this->group = "";
      this->replace = false;
    }
  }

  explicit SetPlannerParams_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pipeline_id(_alloc),
    planner_config(_alloc),
    group(_alloc),
    params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pipeline_id = "";
      this->planner_config = "";
      this->group = "";
      this->replace = false;
    }
  }

  // field types and members
  using _pipeline_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pipeline_id_type pipeline_id;
  using _planner_config_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planner_config_type planner_config;
  using _group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_type group;
  using _params_type =
    moveit_msgs::msg::PlannerParams_<ContainerAllocator>;
  _params_type params;
  using _replace_type =
    bool;
  _replace_type replace;

  // setters for named parameter idiom
  Type & set__pipeline_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pipeline_id = _arg;
    return *this;
  }
  Type & set__planner_config(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planner_config = _arg;
    return *this;
  }
  Type & set__group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group = _arg;
    return *this;
  }
  Type & set__params(
    const moveit_msgs::msg::PlannerParams_<ContainerAllocator> & _arg)
  {
    this->params = _arg;
    return *this;
  }
  Type & set__replace(
    const bool & _arg)
  {
    this->replace = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::SetPlannerParams_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::SetPlannerParams_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::SetPlannerParams_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::SetPlannerParams_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::SetPlannerParams_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::SetPlannerParams_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::SetPlannerParams_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::SetPlannerParams_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::SetPlannerParams_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::SetPlannerParams_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__SetPlannerParams_Request
    std::shared_ptr<moveit_msgs::srv::SetPlannerParams_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__SetPlannerParams_Request
    std::shared_ptr<moveit_msgs::srv::SetPlannerParams_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPlannerParams_Request_ & other) const
  {
    if (this->pipeline_id != other.pipeline_id) {
      return false;
    }
    if (this->planner_config != other.planner_config) {
      return false;
    }
    if (this->group != other.group) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    if (this->replace != other.replace) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPlannerParams_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPlannerParams_Request_

// alias to use template instance with default allocator
using SetPlannerParams_Request =
  moveit_msgs::srv::SetPlannerParams_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__SetPlannerParams_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__SetPlannerParams_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPlannerParams_Response_
{
  using Type = SetPlannerParams_Response_<ContainerAllocator>;

  explicit SetPlannerParams_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetPlannerParams_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::SetPlannerParams_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::SetPlannerParams_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::SetPlannerParams_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::SetPlannerParams_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::SetPlannerParams_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::SetPlannerParams_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::SetPlannerParams_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::SetPlannerParams_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::SetPlannerParams_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::SetPlannerParams_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__SetPlannerParams_Response
    std::shared_ptr<moveit_msgs::srv::SetPlannerParams_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__SetPlannerParams_Response
    std::shared_ptr<moveit_msgs::srv::SetPlannerParams_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPlannerParams_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPlannerParams_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPlannerParams_Response_

// alias to use template instance with default allocator
using SetPlannerParams_Response =
  moveit_msgs::srv::SetPlannerParams_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct SetPlannerParams
{
  using Request = moveit_msgs::srv::SetPlannerParams_Request;
  using Response = moveit_msgs::srv::SetPlannerParams_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__SET_PLANNER_PARAMS__STRUCT_HPP_
