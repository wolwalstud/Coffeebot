// Generated by gencpp from file robotino_msgs/SetGripperState.msg
// DO NOT EDIT!


#ifndef ROBOTINO_MSGS_MESSAGE_SETGRIPPERSTATE_H
#define ROBOTINO_MSGS_MESSAGE_SETGRIPPERSTATE_H

#include <ros/service_traits.h>


#include <SetGripperStateRequest.h>
#include <SetGripperStateResponse.h>


namespace robotino_msgs
{

struct SetGripperState
{

typedef SetGripperStateRequest Request;
typedef SetGripperStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetGripperState
} // namespace robotino_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robotino_msgs::SetGripperState > {
  static const char* value()
  {
    return "001fde3cab9e313a150416ff09c08ee4";
  }

  static const char* value(const ::robotino_msgs::SetGripperState&) { return value(); }
};

template<>
struct DataType< ::robotino_msgs::SetGripperState > {
  static const char* value()
  {
    return "robotino_msgs/SetGripperState";
  }

  static const char* value(const ::robotino_msgs::SetGripperState&) { return value(); }
};


// service_traits::MD5Sum< ::robotino_msgs::SetGripperStateRequest> should match 
// service_traits::MD5Sum< ::robotino_msgs::SetGripperState > 
template<>
struct MD5Sum< ::robotino_msgs::SetGripperStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robotino_msgs::SetGripperState >::value();
  }
  static const char* value(const ::robotino_msgs::SetGripperStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotino_msgs::SetGripperStateRequest> should match 
// service_traits::DataType< ::robotino_msgs::SetGripperState > 
template<>
struct DataType< ::robotino_msgs::SetGripperStateRequest>
{
  static const char* value()
  {
    return DataType< ::robotino_msgs::SetGripperState >::value();
  }
  static const char* value(const ::robotino_msgs::SetGripperStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robotino_msgs::SetGripperStateResponse> should match 
// service_traits::MD5Sum< ::robotino_msgs::SetGripperState > 
template<>
struct MD5Sum< ::robotino_msgs::SetGripperStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robotino_msgs::SetGripperState >::value();
  }
  static const char* value(const ::robotino_msgs::SetGripperStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotino_msgs::SetGripperStateResponse> should match 
// service_traits::DataType< ::robotino_msgs::SetGripperState > 
template<>
struct DataType< ::robotino_msgs::SetGripperStateResponse>
{
  static const char* value()
  {
    return DataType< ::robotino_msgs::SetGripperState >::value();
  }
  static const char* value(const ::robotino_msgs::SetGripperStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOTINO_MSGS_MESSAGE_SETGRIPPERSTATE_H
