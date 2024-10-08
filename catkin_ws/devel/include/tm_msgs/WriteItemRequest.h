// Generated by gencpp from file tm_msgs/WriteItemRequest.msg
// DO NOT EDIT!


#ifndef TM_MSGS_MESSAGE_WRITEITEMREQUEST_H
#define TM_MSGS_MESSAGE_WRITEITEMREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tm_msgs
{
template <class ContainerAllocator>
struct WriteItemRequest_
{
  typedef WriteItemRequest_<ContainerAllocator> Type;

  WriteItemRequest_()
    : id()
    , item()
    , value()  {
    }
  WriteItemRequest_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , item(_alloc)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _item_type;
  _item_type item;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::tm_msgs::WriteItemRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tm_msgs::WriteItemRequest_<ContainerAllocator> const> ConstPtr;

}; // struct WriteItemRequest_

typedef ::tm_msgs::WriteItemRequest_<std::allocator<void> > WriteItemRequest;

typedef boost::shared_ptr< ::tm_msgs::WriteItemRequest > WriteItemRequestPtr;
typedef boost::shared_ptr< ::tm_msgs::WriteItemRequest const> WriteItemRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tm_msgs::WriteItemRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tm_msgs::WriteItemRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tm_msgs::WriteItemRequest_<ContainerAllocator1> & lhs, const ::tm_msgs::WriteItemRequest_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.item == rhs.item &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tm_msgs::WriteItemRequest_<ContainerAllocator1> & lhs, const ::tm_msgs::WriteItemRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tm_msgs::WriteItemRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tm_msgs::WriteItemRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tm_msgs::WriteItemRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tm_msgs::WriteItemRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tm_msgs::WriteItemRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tm_msgs::WriteItemRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tm_msgs::WriteItemRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d2adb38a608c2c354ee61bc1cbad3341";
  }

  static const char* value(const ::tm_msgs::WriteItemRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd2adb38a608c2c35ULL;
  static const uint64_t static_value2 = 0x4ee61bc1cbad3341ULL;
};

template<class ContainerAllocator>
struct DataType< ::tm_msgs::WriteItemRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tm_msgs/WriteItemRequest";
  }

  static const char* value(const ::tm_msgs::WriteItemRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tm_msgs::WriteItemRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 'Write'\n"
"# id        : name\n"
"# item/value: More details please refer to the TM_Robot_Expression.pdf(1.76 rev1.00) Chapter 9.6 TMSVR vs Chapter 9.3 svr_write\n"
"\n"
"string id\n"
"string item\n"
"string value\n"
;
  }

  static const char* value(const ::tm_msgs::WriteItemRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tm_msgs::WriteItemRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.item);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WriteItemRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tm_msgs::WriteItemRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tm_msgs::WriteItemRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.id);
    s << indent << "item: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.item);
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TM_MSGS_MESSAGE_WRITEITEMREQUEST_H
