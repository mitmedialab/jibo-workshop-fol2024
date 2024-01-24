# jibo_msgs

ROS package for custom action messages for Jibo.

This package contains all custom messages that ROS nodes outside of the Jibo ecosystem can
use to communicate with the Jibo robot. 

## Messages

### JiboState.msg 
Jibo publishes "/[jibo\_msgs](https://github.com/mitmedialab/jibo_msgs "/jibo_msgs")/JiboState" to the ROS topic "jibo\_state". 

### JiboAction.msg
Jibo subscribes to "/[jibo\_msgs](https://github.com/mitmedialab/jibo_msgs "/jibo_msgs")/JiboAction" on the ROS topic "jibo".
