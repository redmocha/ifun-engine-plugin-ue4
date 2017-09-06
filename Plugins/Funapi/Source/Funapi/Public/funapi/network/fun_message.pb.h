// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: funapi/network/fun_message.proto

#if defined(_MSC_VER) && _MSC_VER >= 1300
#ifndef _PS3
#pragma warning(push)
#pragma warning(disable : 4530)	// warning C4530: C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc (disabled due to std headers having exception syntax)
#pragma warning(disable : 4512)	// warning C4512: assignment operator could not be generated
#pragma warning(disable : 4244)	// warning C4244:  warning C4244: '=' : conversion from '__w64 int' to 'int', possible loss of data
#pragma warning(disable : 4267)	// warning C4267: 'argument' : conversion from 'size_t' to 'int', possible loss of data
#pragma warning(disable : 4125)	// warning C4125: decimal digit terminates octal escape sequence
#pragma warning(disable : 4127)	// warning C4127: conditional expression is constant
#pragma warning(disable : 4100)	// warning C4100: 'op' : unreferenced formal parameter
#endif // _PS3
#endif // _MSC_VER

#ifndef PROTOBUF_funapi_2fnetwork_2ffun_5fmessage_2eproto__INCLUDED
#define PROTOBUF_funapi_2fnetwork_2ffun_5fmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void FUNAPI_API protobuf_AddDesc_funapi_2fnetwork_2ffun_5fmessage_2eproto();
void protobuf_AssignDesc_funapi_2fnetwork_2ffun_5fmessage_2eproto();
void protobuf_ShutdownFile_funapi_2fnetwork_2ffun_5fmessage_2eproto();

class FunMessage;

// ===================================================================

class FUNAPI_API FunMessage : public ::google::protobuf::Message {
 public:
  FunMessage();
  virtual ~FunMessage();

  FunMessage(const FunMessage& from);

  inline FunMessage& operator=(const FunMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FunMessage& default_instance();

  void Swap(FunMessage* other);

  // implements Message ----------------------------------------------

  FunMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FunMessage& from);
  void MergeFrom(const FunMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes sid = 1;
  inline bool has_sid() const;
  inline void clear_sid();
  static const int kSidFieldNumber = 1;
  inline const ::std::string& sid() const;
  inline void set_sid(const ::std::string& value);
  inline void set_sid(const char* value);
  inline void set_sid(const void* value, size_t size);
  inline ::std::string* mutable_sid();
  inline ::std::string* release_sid();
  inline void set_allocated_sid(::std::string* sid);

  // optional string msgtype = 2;
  inline bool has_msgtype() const;
  inline void clear_msgtype();
  static const int kMsgtypeFieldNumber = 2;
  inline const ::std::string& msgtype() const;
  inline void set_msgtype(const ::std::string& value);
  inline void set_msgtype(const char* value);
  inline void set_msgtype(const char* value, size_t size);
  inline ::std::string* mutable_msgtype();
  inline ::std::string* release_msgtype();
  inline void set_allocated_msgtype(::std::string* msgtype);

  // optional uint32 seq = 3;
  inline bool has_seq() const;
  inline void clear_seq();
  static const int kSeqFieldNumber = 3;
  inline ::google::protobuf::uint32 seq() const;
  inline void set_seq(::google::protobuf::uint32 value);

  // optional uint32 ack = 4;
  inline bool has_ack() const;
  inline void clear_ack();
  static const int kAckFieldNumber = 4;
  inline ::google::protobuf::uint32 ack() const;
  inline void set_ack(::google::protobuf::uint32 value);

  // optional bool urgent = 5;
  inline bool has_urgent() const;
  inline void clear_urgent();
  static const int kUrgentFieldNumber = 5;
  inline bool urgent() const;
  inline void set_urgent(bool value);

  // optional int32 msgtype2 = 6;
  inline bool has_msgtype2() const;
  inline void clear_msgtype2();
  static const int kMsgtype2FieldNumber = 6;
  inline ::google::protobuf::int32 msgtype2() const;
  inline void set_msgtype2(::google::protobuf::int32 value);

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(FunMessage)
  // @@protoc_insertion_point(class_scope:FunMessage)
 private:
  inline void set_has_sid();
  inline void clear_has_sid();
  inline void set_has_msgtype();
  inline void clear_has_msgtype();
  inline void set_has_seq();
  inline void clear_has_seq();
  inline void set_has_ack();
  inline void clear_has_ack();
  inline void set_has_urgent();
  inline void clear_has_urgent();
  inline void set_has_msgtype2();
  inline void clear_has_msgtype2();

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* sid_;
  ::std::string* msgtype_;
  ::google::protobuf::uint32 seq_;
  ::google::protobuf::uint32 ack_;
  bool urgent_;
  ::google::protobuf::int32 msgtype2_;
  friend void FUNAPI_API protobuf_AddDesc_funapi_2fnetwork_2ffun_5fmessage_2eproto();
  friend void protobuf_AssignDesc_funapi_2fnetwork_2ffun_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_funapi_2fnetwork_2ffun_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static FunMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// FunMessage

// optional bytes sid = 1;
inline bool FunMessage::has_sid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FunMessage::set_has_sid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FunMessage::clear_has_sid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FunMessage::clear_sid() {
  if (sid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sid_->clear();
  }
  clear_has_sid();
}
inline const ::std::string& FunMessage::sid() const {
  // @@protoc_insertion_point(field_get:FunMessage.sid)
  return *sid_;
}
inline void FunMessage::set_sid(const ::std::string& value) {
  set_has_sid();
  if (sid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sid_ = new ::std::string;
  }
  sid_->assign(value);
  // @@protoc_insertion_point(field_set:FunMessage.sid)
}
inline void FunMessage::set_sid(const char* value) {
  set_has_sid();
  if (sid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sid_ = new ::std::string;
  }
  sid_->assign(value);
  // @@protoc_insertion_point(field_set_char:FunMessage.sid)
}
inline void FunMessage::set_sid(const void* value, size_t size) {
  set_has_sid();
  if (sid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sid_ = new ::std::string;
  }
  sid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:FunMessage.sid)
}
inline ::std::string* FunMessage::mutable_sid() {
  set_has_sid();
  if (sid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:FunMessage.sid)
  return sid_;
}
inline ::std::string* FunMessage::release_sid() {
  clear_has_sid();
  if (sid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = sid_;
    sid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FunMessage::set_allocated_sid(::std::string* sid) {
  if (sid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete sid_;
  }
  if (sid) {
    set_has_sid();
    sid_ = sid;
  } else {
    clear_has_sid();
    sid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:FunMessage.sid)
}

// optional string msgtype = 2;
inline bool FunMessage::has_msgtype() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FunMessage::set_has_msgtype() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FunMessage::clear_has_msgtype() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FunMessage::clear_msgtype() {
  if (msgtype_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msgtype_->clear();
  }
  clear_has_msgtype();
}
inline const ::std::string& FunMessage::msgtype() const {
  // @@protoc_insertion_point(field_get:FunMessage.msgtype)
  return *msgtype_;
}
inline void FunMessage::set_msgtype(const ::std::string& value) {
  set_has_msgtype();
  if (msgtype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msgtype_ = new ::std::string;
  }
  msgtype_->assign(value);
  // @@protoc_insertion_point(field_set:FunMessage.msgtype)
}
inline void FunMessage::set_msgtype(const char* value) {
  set_has_msgtype();
  if (msgtype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msgtype_ = new ::std::string;
  }
  msgtype_->assign(value);
  // @@protoc_insertion_point(field_set_char:FunMessage.msgtype)
}
inline void FunMessage::set_msgtype(const char* value, size_t size) {
  set_has_msgtype();
  if (msgtype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msgtype_ = new ::std::string;
  }
  msgtype_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:FunMessage.msgtype)
}
inline ::std::string* FunMessage::mutable_msgtype() {
  set_has_msgtype();
  if (msgtype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    msgtype_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:FunMessage.msgtype)
  return msgtype_;
}
inline ::std::string* FunMessage::release_msgtype() {
  clear_has_msgtype();
  if (msgtype_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = msgtype_;
    msgtype_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FunMessage::set_allocated_msgtype(::std::string* msgtype) {
  if (msgtype_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete msgtype_;
  }
  if (msgtype) {
    set_has_msgtype();
    msgtype_ = msgtype;
  } else {
    clear_has_msgtype();
    msgtype_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:FunMessage.msgtype)
}

// optional uint32 seq = 3;
inline bool FunMessage::has_seq() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FunMessage::set_has_seq() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FunMessage::clear_has_seq() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FunMessage::clear_seq() {
  seq_ = 0u;
  clear_has_seq();
}
inline ::google::protobuf::uint32 FunMessage::seq() const {
  // @@protoc_insertion_point(field_get:FunMessage.seq)
  return seq_;
}
inline void FunMessage::set_seq(::google::protobuf::uint32 value) {
  set_has_seq();
  seq_ = value;
  // @@protoc_insertion_point(field_set:FunMessage.seq)
}

// optional uint32 ack = 4;
inline bool FunMessage::has_ack() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FunMessage::set_has_ack() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FunMessage::clear_has_ack() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FunMessage::clear_ack() {
  ack_ = 0u;
  clear_has_ack();
}
inline ::google::protobuf::uint32 FunMessage::ack() const {
  // @@protoc_insertion_point(field_get:FunMessage.ack)
  return ack_;
}
inline void FunMessage::set_ack(::google::protobuf::uint32 value) {
  set_has_ack();
  ack_ = value;
  // @@protoc_insertion_point(field_set:FunMessage.ack)
}

// optional bool urgent = 5;
inline bool FunMessage::has_urgent() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void FunMessage::set_has_urgent() {
  _has_bits_[0] |= 0x00000010u;
}
inline void FunMessage::clear_has_urgent() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void FunMessage::clear_urgent() {
  urgent_ = false;
  clear_has_urgent();
}
inline bool FunMessage::urgent() const {
  // @@protoc_insertion_point(field_get:FunMessage.urgent)
  return urgent_;
}
inline void FunMessage::set_urgent(bool value) {
  set_has_urgent();
  urgent_ = value;
  // @@protoc_insertion_point(field_set:FunMessage.urgent)
}

// optional int32 msgtype2 = 6;
inline bool FunMessage::has_msgtype2() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void FunMessage::set_has_msgtype2() {
  _has_bits_[0] |= 0x00000020u;
}
inline void FunMessage::clear_has_msgtype2() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void FunMessage::clear_msgtype2() {
  msgtype2_ = 0;
  clear_has_msgtype2();
}
inline ::google::protobuf::int32 FunMessage::msgtype2() const {
  // @@protoc_insertion_point(field_get:FunMessage.msgtype2)
  return msgtype2_;
}
inline void FunMessage::set_msgtype2(::google::protobuf::int32 value) {
  set_has_msgtype2();
  msgtype2_ = value;
  // @@protoc_insertion_point(field_set:FunMessage.msgtype2)
}

// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_funapi_2fnetwork_2ffun_5fmessage_2eproto__INCLUDED
