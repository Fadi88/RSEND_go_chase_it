// Generated by gencpp from file ball_chaser/DriveToTargetResponse.msg
// DO NOT EDIT!


#ifndef BALL_CHASER_MESSAGE_DRIVETOTARGETRESPONSE_H
#define BALL_CHASER_MESSAGE_DRIVETOTARGETRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ball_chaser
{
template <class ContainerAllocator>
struct DriveToTargetResponse_
{
  typedef DriveToTargetResponse_<ContainerAllocator> Type;

  DriveToTargetResponse_()
    : msg_feedback()  {
    }
  DriveToTargetResponse_(const ContainerAllocator& _alloc)
    : msg_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _msg_feedback_type;
  _msg_feedback_type msg_feedback;





  typedef boost::shared_ptr< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DriveToTargetResponse_

typedef ::ball_chaser::DriveToTargetResponse_<std::allocator<void> > DriveToTargetResponse;

typedef boost::shared_ptr< ::ball_chaser::DriveToTargetResponse > DriveToTargetResponsePtr;
typedef boost::shared_ptr< ::ball_chaser::DriveToTargetResponse const> DriveToTargetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ball_chaser::DriveToTargetResponse_<ContainerAllocator1> & lhs, const ::ball_chaser::DriveToTargetResponse_<ContainerAllocator2> & rhs)
{
  return lhs.msg_feedback == rhs.msg_feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ball_chaser::DriveToTargetResponse_<ContainerAllocator1> & lhs, const ::ball_chaser::DriveToTargetResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ball_chaser

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2897a4bc4d7ca330e430870cfdee7314";
  }

  static const char* value(const ::ball_chaser::DriveToTargetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2897a4bc4d7ca330ULL;
  static const uint64_t static_value2 = 0xe430870cfdee7314ULL;
};

template<class ContainerAllocator>
struct DataType< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ball_chaser/DriveToTargetResponse";
  }

  static const char* value(const ::ball_chaser::DriveToTargetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string msg_feedback\n"
;
  }

  static const char* value(const ::ball_chaser::DriveToTargetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.msg_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DriveToTargetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ball_chaser::DriveToTargetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ball_chaser::DriveToTargetResponse_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "msg_feedback: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.msg_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BALL_CHASER_MESSAGE_DRIVETOTARGETRESPONSE_H
