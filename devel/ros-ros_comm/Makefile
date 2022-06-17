PORTNAME=	ros-ros_comm
DISTVERSION=	1.15.11
CATEGORIES=	devel

MAINTAINER=	henrik@gulbra.net
COMMENT=	ROS ros_comm package

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/catkin/package.xml:devel/ros-catkin \
		${PYTHON_PKGNAMEPREFIX}ros-catkin_pkg>=0.4.0:devel/ros-catkin_pkg@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		googletest>0:devel/googletest \
		${LOCALBASE}/share/message_filters/package.xml:devel/ros-message_filters \
		${LOCALBASE}/share/ros/package.xml:devel/ros-ros \
		${LOCALBASE}/share/rosbag/package.xml:devel/ros-rosbag \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/rosgraph/package.xml:devel/ros-rosgraph \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/roslaunch/package.xml:devel/ros-roslaunch \
		${LOCALBASE}/share/roslisp/package.xml:devel/ros-roslisp \
		${LOCALBASE}/share/rosmaster/package.xml:devel/ros-rosmaster \
		${LOCALBASE}/share/rosmsg/package.xml:devel/ros-rosmsg \
		${LOCALBASE}/share/rosnode/package.xml:devel/ros-rosnode \
		${LOCALBASE}/share/rosout/package.xml:devel/ros-rosout \
		${LOCALBASE}/share/rosparam/package.xml:devel/ros-rosparam \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/rosservice/package.xml:devel/ros-rosservice \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/rostopic/package.xml:devel/ros-rostopic \
		${LOCALBASE}/share/roswtf/package.xml:devel/ros-roswtf \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs \
		${LOCALBASE}/share/topic_tools/package.xml:devel/ros-topic_tools \
		${LOCALBASE}/share/xmlrpcpp/package.xml:devel/ros-xmlrpcpp


RUN_DEPENDS=	${LOCALBASE}/share/message_filters/package.xml:devel/ros-message_filters \
		${LOCALBASE}/share/ros/package.xml:devel/ros-ros \
		${LOCALBASE}/share/rosbag/package.xml:devel/ros-rosbag \
		${LOCALBASE}/share/rosconsole/package.xml:devel/ros-rosconsole \
		${LOCALBASE}/share/roscpp/package.xml:devel/ros-roscpp \
		${LOCALBASE}/share/rosgraph/package.xml:devel/ros-rosgraph \
		${LOCALBASE}/share/rosgraph_msgs/package.xml:devel/ros-rosgraph_msgs \
		${LOCALBASE}/share/roslaunch/package.xml:devel/ros-roslaunch \
		${LOCALBASE}/share/roslisp/package.xml:devel/ros-roslisp \
		${LOCALBASE}/share/rosmaster/package.xml:devel/ros-rosmaster \
		${LOCALBASE}/share/rosmsg/package.xml:devel/ros-rosmsg \
		${LOCALBASE}/share/rosnode/package.xml:devel/ros-rosnode \
		${LOCALBASE}/share/rosout/package.xml:devel/ros-rosout \
		${LOCALBASE}/share/rosparam/package.xml:devel/ros-rosparam \
		${LOCALBASE}/share/rospy/package.xml:devel/ros-rospy \
		${LOCALBASE}/share/rosservice/package.xml:devel/ros-rosservice \
		${LOCALBASE}/share/rostest/package.xml:devel/ros-rostest \
		${LOCALBASE}/share/rostopic/package.xml:devel/ros-rostopic \
		${LOCALBASE}/share/roswtf/package.xml:devel/ros-roswtf \
		${LOCALBASE}/share/std_srvs/package.xml:devel/ros-std_srvs \
		${LOCALBASE}/share/topic_tools/package.xml:devel/ros-topic_tools \
		${LOCALBASE}/share/xmlrpcpp/package.xml:devel/ros-xmlrpcpp

USES=		cmake python

USE_GITHUB=	yes
GH_ACCOUNT=	ros
GH_PROJECT=	ros_comm

CMAKE_ARGS=	-DCMAKE_PREFIX_PATH=${LOCALBASE}

NO_ARCH=	yes

WRKSRC_SUBDIR=	ros_comm

PLIST_FILES=	share/ros_comm/package.xml

post-stage:
	${FIND} ${STAGEDIR}${PREFIX} -type f -depth 1 -delete

.include <bsd.port.mk>
