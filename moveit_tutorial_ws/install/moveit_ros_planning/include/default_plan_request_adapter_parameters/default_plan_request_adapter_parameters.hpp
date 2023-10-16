// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <parameter_traits/parameter_traits.hpp>

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace default_plan_request_adapter_parameters {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        double path_tolerance = 0.1;
        double resample_dt = 0.1;
        double min_angle_change = 0.001;
        double start_state_max_dt = 0.5;
        double jiggle_fraction = 0.02;
        int64_t max_sampling_attempts = 100;
        double start_state_max_bounds_error = 0.05;
        double default_workspace_bounds = 10.0;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        double path_tolerance = 0.1;
        double resample_dt = 0.1;
        double min_angle_change = 0.001;
        double start_state_max_dt = 0.5;
        double jiggle_fraction = 0.02;
        int64_t max_sampling_attempts = 100;
        double start_state_max_bounds_error = 0.05;
        double default_workspace_bounds = 10.0;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    ParamListener(rclcpp::Node::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(rclcpp_lifecycle::LifecycleNode::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("default_plan_request_adapter_parameters"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "") {
      logger_ = logger;
      prefix_ = prefix;
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.path_tolerance = params.path_tolerance;
      output.resample_dt = params.resample_dt;
      output.min_angle_change = params.min_angle_change;
      output.start_state_max_dt = params.start_state_max_dt;
      output.jiggle_fraction = params.jiggle_fraction;
      output.max_sampling_attempts = params.max_sampling_attempts;
      output.start_state_max_bounds_error = params.start_state_max_bounds_error;
      output.default_workspace_bounds = params.default_workspace_bounds;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "path_tolerance")) {
            updated_params.path_tolerance = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "resample_dt")) {
            updated_params.resample_dt = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "min_angle_change")) {
            updated_params.min_angle_change = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "start_state_max_dt")) {
            updated_params.start_state_max_dt = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "jiggle_fraction")) {
            updated_params.jiggle_fraction = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "max_sampling_attempts")) {
            if(auto validation_result = gt_eq<int64_t>(param, 0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.max_sampling_attempts = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "start_state_max_bounds_error")) {
            updated_params.start_state_max_bounds_error = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "default_workspace_bounds")) {
            updated_params.default_workspace_bounds = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      updated_params.__stamp = clock_.now();
      update_interal_params(updated_params);
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "path_tolerance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "AddTimeOptimalParameterization: Tolerance per joint in which the time parameterization is allowed to deviate from the original path.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.path_tolerance);
          parameters_interface_->declare_parameter(prefix_ + "path_tolerance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "resample_dt")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "AddTimeOptimalParameterization: Time steps between two adjacent waypoints of the parameterized trajectory. The trajectory is re-sampled from the original path.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.resample_dt);
          parameters_interface_->declare_parameter(prefix_ + "resample_dt", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "min_angle_change")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "AddTimeOptimalParameterization: Minimum joint value change to consider two waypoints unique.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.min_angle_change);
          parameters_interface_->declare_parameter(prefix_ + "min_angle_change", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "start_state_max_dt")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "FixStartStateCollision/FixStartStateBounds: Maximum temporal distance of the fixed start state from the original state.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.start_state_max_dt);
          parameters_interface_->declare_parameter(prefix_ + "start_state_max_dt", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "jiggle_fraction")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "FixStartStateCollision: Joint value perturbation as a percentage of the total range of motion for the joint.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.jiggle_fraction);
          parameters_interface_->declare_parameter(prefix_ + "jiggle_fraction", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "max_sampling_attempts")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "FixStartStateCollision: Maximum number of attempts to re-sample a valid start state.";
          descriptor.read_only = false;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 0;
          descriptor.integer_range.at(0).to_value = std::numeric_limits<int>::max();
          auto parameter = to_parameter_value(updated_params.max_sampling_attempts);
          parameters_interface_->declare_parameter(prefix_ + "max_sampling_attempts", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "start_state_max_bounds_error")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "FixStartStateBounds: Maximum allowable error outside joint bounds for the starting configuration.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.start_state_max_bounds_error);
          parameters_interface_->declare_parameter(prefix_ + "start_state_max_bounds_error", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "default_workspace_bounds")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "FixWorkspaceBounds: Default workspace bounds representing a cube around the robot's origin whose edge length this parameter defines.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.default_workspace_bounds);
          parameters_interface_->declare_parameter(prefix_ + "default_workspace_bounds", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "path_tolerance");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.path_tolerance = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "resample_dt");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.resample_dt = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "min_angle_change");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.min_angle_change = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "start_state_max_dt");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.start_state_max_dt = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "jiggle_fraction");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.jiggle_fraction = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "max_sampling_attempts");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<int64_t>(param, 0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'max_sampling_attempts': {}", validation_result.error()));
      }
      updated_params.max_sampling_attempts = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "start_state_max_bounds_error");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.start_state_max_bounds_error = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "default_workspace_bounds");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.default_workspace_bounds = param.as_double();


      updated_params.__stamp = clock_.now();
      update_interal_params(updated_params);
    }

    private:
      void update_interal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = updated_params;
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;

      // rclcpp::Logger cannot be default-constructed
      // so we must provide a initialization here even though
      // every one of our constructors initializes logger_
      rclcpp::Logger logger_ = rclcpp::get_logger("default_plan_request_adapter_parameters");
      std::mutex mutable mutex_;
  };

} // namespace default_plan_request_adapter_parameters