/*
 * Khepera3Odometry.h
 *
 *  Created on: Jun 15, 2011
 *      Author: jdelacroix
 */

#ifndef KHEPERA3ODOMETRY_H_
#define KHEPERA3ODOMETRY_H_

#include <ros/ros.h>

#include <khepera3_driver/SensorData.h>
#include <geometry_msgs/Pose.h>
#include <math.h>

class Khepera3Odometry {

	ros::NodeHandle m_node_handle;
	ros::ServiceClient m_client;
	ros::Publisher m_odometry_publisher;

	int m_frequency;

	khepera3_driver::SensorData m_data_service;

	float m_wheel_radius;
	float m_wheel_base_length;

	float m_meters_per_tick;

	int m_previous_left_ticks, m_previous_right_ticks;

	geometry_msgs::Pose m_estimated_pose;


public:
	Khepera3Odometry();
	virtual ~Khepera3Odometry();
	void run();
};

#endif /* KHEPERA3ODOMETRY_H_ */
