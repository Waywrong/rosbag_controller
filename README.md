# rosbag_controller
A ros node that wraps rosbag and provides services to pragmatically pause and unpause the bag.


roslaunch
=======

	roslaunch rosbag_controller rosbag_controller.launch

rosservice
=======
	rosservice call /bag_go 
	rosservice call /pause_bag 
