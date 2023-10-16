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



namespace stomp_moveit {

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
        int64_t num_iterations = 1000;
        int64_t num_iterations_after_valid = 0;
        int64_t num_rollouts = 15;
        int64_t max_rollouts = 25;
        int64_t num_timesteps = 40;
        double exponentiated_cost_sensitivity = 0.5;
        double control_cost_weight = 0.1;
        double delta_t = 0.1;
        std::string path_marker_topic = "";
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        int64_t num_iterations = 1000;
        int64_t num_iterations_after_valid = 0;
        int64_t num_rollouts = 15;
        int64_t max_rollouts = 25;
        int64_t num_timesteps = 40;
        double exponentiated_cost_sensitivity = 0.5;
        double control_cost_weight = 0.1;
        double delta_t = 0.1;
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
    : ParamListener(parameters_interface, rclcpp::get_logger("stomp_moveit"), prefix) {
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
      output.num_iterations = params.num_iterations;
      output.num_iterations_after_valid = params.num_iterations_after_valid;
      output.num_rollouts = params.num_rollouts;
      output.max_rollouts = params.max_rollouts;
      output.num_timesteps = params.num_timesteps;
      output.exponentiated_cost_sensitivity = params.exponentiated_cost_sensitivity;
      output.control_cost_weight = params.control_cost_weight;
      output.delta_t = params.delta_t;

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
        if (param.get_name() == (prefix_ + "num_iterations")) {
            if(auto validation_result = gt_eq<int64_t>(param, 1);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.num_iterations = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "num_iterations_after_valid")) {
            if(auto validation_result = gt_eq<int64_t>(param, 0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.num_iterations_after_valid = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "num_rollouts")) {
            if(auto validation_result = gt_eq<int64_t>(param, 1);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.num_rollouts = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "max_rollouts")) {
            if(auto validation_result = gt_eq<int64_t>(param, 1);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.max_rollouts = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "num_timesteps")) {
            if(auto validation_result = gt_eq<int64_t>(param, 3);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.num_timesteps = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "exponentiated_cost_sensitivity")) {
            if(auto validation_result = gt_eq<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.exponentiated_cost_sensitivity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "control_cost_weight")) {
            updated_params.control_cost_weight = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "delta_t")) {
            updated_params.delta_t = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "path_marker_topic")) {
            updated_params.path_marker_topic = param.as_string();
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
      if (!parameters_interface_->has_parameter(prefix_ + "num_iterations")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Total number of iterations that STOMP is allowed to run";
          descriptor.read_only = false;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 1;
          descriptor.integer_range.at(0).to_value = std::numeric_limits<int>::max();
          auto parameter = to_parameter_value(updated_params.num_iterations);
          parameters_interface_->declare_parameter(prefix_ + "num_iterations", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "num_iterations_after_valid")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Total number of iterations that STOMP should continue optimizing an already valid solution";
          descriptor.read_only = false;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 0;
          descriptor.integer_range.at(0).to_value = std::numeric_limits<int>::max();
          auto parameter = to_parameter_value(updated_params.num_iterations_after_valid);
          parameters_interface_->declare_parameter(prefix_ + "num_iterations_after_valid", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "num_rollouts")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Number of noisy trajectories that are being generated for each iteration";
          descriptor.read_only = false;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 1;
          descriptor.integer_range.at(0).to_value = std::numeric_limits<int>::max();
          auto parameter = to_parameter_value(updated_params.num_rollouts);
          parameters_interface_->declare_parameter(prefix_ + "num_rollouts", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "max_rollouts")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Combined number of old and new rollouts that are being processed for each iteration";
          descriptor.read_only = false;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 1;
          descriptor.integer_range.at(0).to_value = std::numeric_limits<int>::max();
          auto parameter = to_parameter_value(updated_params.max_rollouts);
          parameters_interface_->declare_parameter(prefix_ + "max_rollouts", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "num_timesteps")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Number of timesteps used in trajectories - corresponds to waypoint count";
          descriptor.read_only = false;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 3;
          descriptor.integer_range.at(0).to_value = std::numeric_limits<int>::max();
          auto parameter = to_parameter_value(updated_params.num_timesteps);
          parameters_interface_->declare_parameter(prefix_ + "num_timesteps", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "exponentiated_cost_sensitivity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Exponentiated cost sensitivity coefficient used for probability calculation";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.exponentiated_cost_sensitivity);
          parameters_interface_->declare_parameter(prefix_ + "exponentiated_cost_sensitivity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "control_cost_weight")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Weight of the acceleration costs to be applied for the general cost calculation. A value of 0 disables this cost.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.control_cost_weight);
          parameters_interface_->declare_parameter(prefix_ + "control_cost_weight", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "delta_t")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Assumed time change between consecutive points - used for computing control costs";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.delta_t);
          parameters_interface_->declare_parameter(prefix_ + "delta_t", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "path_marker_topic")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the topic RVIZ subscribes to to visualize the EE path. An empty string disables the publisher.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.path_marker_topic);
          parameters_interface_->declare_parameter(prefix_ + "path_marker_topic", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "num_iterations");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<int64_t>(param, 1);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'num_iterations': {}", validation_result.error()));
      }
      updated_params.num_iterations = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "num_iterations_after_valid");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<int64_t>(param, 0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'num_iterations_after_valid': {}", validation_result.error()));
      }
      updated_params.num_iterations_after_valid = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "num_rollouts");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<int64_t>(param, 1);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'num_rollouts': {}", validation_result.error()));
      }
      updated_params.num_rollouts = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "max_rollouts");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<int64_t>(param, 1);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'max_rollouts': {}", validation_result.error()));
      }
      updated_params.max_rollouts = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "num_timesteps");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<int64_t>(param, 3);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'num_timesteps': {}", validation_result.error()));
      }
      updated_params.num_timesteps = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "exponentiated_cost_sensitivity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'exponentiated_cost_sensitivity': {}", validation_result.error()));
      }
      updated_params.exponentiated_cost_sensitivity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "control_cost_weight");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.control_cost_weight = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "delta_t");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.delta_t = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "path_marker_topic");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.path_marker_topic = param.as_string();


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
      rclcpp::Logger logger_ = rclcpp::get_logger("stomp_moveit");
      std::mutex mutable mutex_;
  };

} // namespace stomp_moveit