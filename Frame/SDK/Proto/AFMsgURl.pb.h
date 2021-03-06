// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AFMsgURl.proto

#ifndef PROTOBUF_AFMsgURl_2eproto__INCLUDED
#define PROTOBUF_AFMsgURl_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2007000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace AFMsg {

// Internal implementation detail -- do not call these.
void LIBPROTOC_EXPORT protobuf_AddDesc_AFMsgURl_2eproto();
void protobuf_AssignDesc_AFMsgURl_2eproto();
void protobuf_ShutdownFile_AFMsgURl_2eproto();

class PackSURLParam;

// ===================================================================

class LIBPROTOC_EXPORT PackSURLParam : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:AFMsg.PackSURLParam) */ {
 public:
  PackSURLParam();
  virtual ~PackSURLParam();

  PackSURLParam(const PackSURLParam& from);

  inline PackSURLParam& operator=(const PackSURLParam& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PackSURLParam& default_instance();

  void Swap(PackSURLParam* other);

  // implements Message ----------------------------------------------

  inline PackSURLParam* New() const { return New(NULL); }

  PackSURLParam* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PackSURLParam& from);
  void MergeFrom(const PackSURLParam& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PackSURLParam* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bytes strUrl = 1;
  bool has_strurl() const;
  void clear_strurl();
  static const int kStrUrlFieldNumber = 1;
  const ::std::string& strurl() const;
  void set_strurl(const ::std::string& value);
  void set_strurl(const char* value);
  void set_strurl(const void* value, size_t size);
  ::std::string* mutable_strurl();
  ::std::string* release_strurl();
  void set_allocated_strurl(::std::string* strurl);

  // required bytes strGetParams = 2;
  bool has_strgetparams() const;
  void clear_strgetparams();
  static const int kStrGetParamsFieldNumber = 2;
  const ::std::string& strgetparams() const;
  void set_strgetparams(const ::std::string& value);
  void set_strgetparams(const char* value);
  void set_strgetparams(const void* value, size_t size);
  ::std::string* mutable_strgetparams();
  ::std::string* release_strgetparams();
  void set_allocated_strgetparams(::std::string* strgetparams);

  // required bytes strBodyData = 3;
  bool has_strbodydata() const;
  void clear_strbodydata();
  static const int kStrBodyDataFieldNumber = 3;
  const ::std::string& strbodydata() const;
  void set_strbodydata(const ::std::string& value);
  void set_strbodydata(const char* value);
  void set_strbodydata(const void* value, size_t size);
  ::std::string* mutable_strbodydata();
  ::std::string* release_strbodydata();
  void set_allocated_strbodydata(::std::string* strbodydata);

  // required bytes strCookies = 4;
  bool has_strcookies() const;
  void clear_strcookies();
  static const int kStrCookiesFieldNumber = 4;
  const ::std::string& strcookies() const;
  void set_strcookies(const ::std::string& value);
  void set_strcookies(const char* value);
  void set_strcookies(const void* value, size_t size);
  ::std::string* mutable_strcookies();
  ::std::string* release_strcookies();
  void set_allocated_strcookies(::std::string* strcookies);

  // required double fTimeOutSec = 5;
  bool has_ftimeoutsec() const;
  void clear_ftimeoutsec();
  static const int kFTimeOutSecFieldNumber = 5;
  double ftimeoutsec() const;
  void set_ftimeoutsec(double value);

  // required bytes strRsp = 6;
  bool has_strrsp() const;
  void clear_strrsp();
  static const int kStrRspFieldNumber = 6;
  const ::std::string& strrsp() const;
  void set_strrsp(const ::std::string& value);
  void set_strrsp(const char* value);
  void set_strrsp(const void* value, size_t size);
  ::std::string* mutable_strrsp();
  ::std::string* release_strrsp();
  void set_allocated_strrsp(::std::string* strrsp);

  // required int64 nRet = 7;
  bool has_nret() const;
  void clear_nret();
  static const int kNRetFieldNumber = 7;
  ::google::protobuf::int64 nret() const;
  void set_nret(::google::protobuf::int64 value);

  // required int64 nReqID = 8;
  bool has_nreqid() const;
  void clear_nreqid();
  static const int kNReqIDFieldNumber = 8;
  ::google::protobuf::int64 nreqid() const;
  void set_nreqid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:AFMsg.PackSURLParam)
 private:
  inline void set_has_strurl();
  inline void clear_has_strurl();
  inline void set_has_strgetparams();
  inline void clear_has_strgetparams();
  inline void set_has_strbodydata();
  inline void clear_has_strbodydata();
  inline void set_has_strcookies();
  inline void clear_has_strcookies();
  inline void set_has_ftimeoutsec();
  inline void clear_has_ftimeoutsec();
  inline void set_has_strrsp();
  inline void clear_has_strrsp();
  inline void set_has_nret();
  inline void clear_has_nret();
  inline void set_has_nreqid();
  inline void clear_has_nreqid();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr strurl_;
  ::google::protobuf::internal::ArenaStringPtr strgetparams_;
  ::google::protobuf::internal::ArenaStringPtr strbodydata_;
  ::google::protobuf::internal::ArenaStringPtr strcookies_;
  double ftimeoutsec_;
  ::google::protobuf::internal::ArenaStringPtr strrsp_;
  ::google::protobuf::int64 nret_;
  ::google::protobuf::int64 nreqid_;
  friend void LIBPROTOC_EXPORT protobuf_AddDesc_AFMsgURl_2eproto();
  friend void protobuf_AssignDesc_AFMsgURl_2eproto();
  friend void protobuf_ShutdownFile_AFMsgURl_2eproto();

  void InitAsDefaultInstance();
  static PackSURLParam* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PackSURLParam

// required bytes strUrl = 1;
inline bool PackSURLParam::has_strurl() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PackSURLParam::set_has_strurl() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PackSURLParam::clear_has_strurl() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PackSURLParam::clear_strurl() {
  strurl_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_strurl();
}
inline const ::std::string& PackSURLParam::strurl() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackSURLParam.strUrl)
  return strurl_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackSURLParam::set_strurl(const ::std::string& value) {
  set_has_strurl();
  strurl_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AFMsg.PackSURLParam.strUrl)
}
inline void PackSURLParam::set_strurl(const char* value) {
  set_has_strurl();
  strurl_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AFMsg.PackSURLParam.strUrl)
}
inline void PackSURLParam::set_strurl(const void* value, size_t size) {
  set_has_strurl();
  strurl_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AFMsg.PackSURLParam.strUrl)
}
inline ::std::string* PackSURLParam::mutable_strurl() {
  set_has_strurl();
  // @@protoc_insertion_point(field_mutable:AFMsg.PackSURLParam.strUrl)
  return strurl_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PackSURLParam::release_strurl() {
  // @@protoc_insertion_point(field_release:AFMsg.PackSURLParam.strUrl)
  clear_has_strurl();
  return strurl_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackSURLParam::set_allocated_strurl(::std::string* strurl) {
  if (strurl != NULL) {
    set_has_strurl();
  } else {
    clear_has_strurl();
  }
  strurl_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strurl);
  // @@protoc_insertion_point(field_set_allocated:AFMsg.PackSURLParam.strUrl)
}

// required bytes strGetParams = 2;
inline bool PackSURLParam::has_strgetparams() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PackSURLParam::set_has_strgetparams() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PackSURLParam::clear_has_strgetparams() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PackSURLParam::clear_strgetparams() {
  strgetparams_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_strgetparams();
}
inline const ::std::string& PackSURLParam::strgetparams() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackSURLParam.strGetParams)
  return strgetparams_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackSURLParam::set_strgetparams(const ::std::string& value) {
  set_has_strgetparams();
  strgetparams_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AFMsg.PackSURLParam.strGetParams)
}
inline void PackSURLParam::set_strgetparams(const char* value) {
  set_has_strgetparams();
  strgetparams_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AFMsg.PackSURLParam.strGetParams)
}
inline void PackSURLParam::set_strgetparams(const void* value, size_t size) {
  set_has_strgetparams();
  strgetparams_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AFMsg.PackSURLParam.strGetParams)
}
inline ::std::string* PackSURLParam::mutable_strgetparams() {
  set_has_strgetparams();
  // @@protoc_insertion_point(field_mutable:AFMsg.PackSURLParam.strGetParams)
  return strgetparams_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PackSURLParam::release_strgetparams() {
  // @@protoc_insertion_point(field_release:AFMsg.PackSURLParam.strGetParams)
  clear_has_strgetparams();
  return strgetparams_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackSURLParam::set_allocated_strgetparams(::std::string* strgetparams) {
  if (strgetparams != NULL) {
    set_has_strgetparams();
  } else {
    clear_has_strgetparams();
  }
  strgetparams_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strgetparams);
  // @@protoc_insertion_point(field_set_allocated:AFMsg.PackSURLParam.strGetParams)
}

// required bytes strBodyData = 3;
inline bool PackSURLParam::has_strbodydata() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PackSURLParam::set_has_strbodydata() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PackSURLParam::clear_has_strbodydata() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PackSURLParam::clear_strbodydata() {
  strbodydata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_strbodydata();
}
inline const ::std::string& PackSURLParam::strbodydata() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackSURLParam.strBodyData)
  return strbodydata_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackSURLParam::set_strbodydata(const ::std::string& value) {
  set_has_strbodydata();
  strbodydata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AFMsg.PackSURLParam.strBodyData)
}
inline void PackSURLParam::set_strbodydata(const char* value) {
  set_has_strbodydata();
  strbodydata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AFMsg.PackSURLParam.strBodyData)
}
inline void PackSURLParam::set_strbodydata(const void* value, size_t size) {
  set_has_strbodydata();
  strbodydata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AFMsg.PackSURLParam.strBodyData)
}
inline ::std::string* PackSURLParam::mutable_strbodydata() {
  set_has_strbodydata();
  // @@protoc_insertion_point(field_mutable:AFMsg.PackSURLParam.strBodyData)
  return strbodydata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PackSURLParam::release_strbodydata() {
  // @@protoc_insertion_point(field_release:AFMsg.PackSURLParam.strBodyData)
  clear_has_strbodydata();
  return strbodydata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackSURLParam::set_allocated_strbodydata(::std::string* strbodydata) {
  if (strbodydata != NULL) {
    set_has_strbodydata();
  } else {
    clear_has_strbodydata();
  }
  strbodydata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strbodydata);
  // @@protoc_insertion_point(field_set_allocated:AFMsg.PackSURLParam.strBodyData)
}

// required bytes strCookies = 4;
inline bool PackSURLParam::has_strcookies() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PackSURLParam::set_has_strcookies() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PackSURLParam::clear_has_strcookies() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PackSURLParam::clear_strcookies() {
  strcookies_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_strcookies();
}
inline const ::std::string& PackSURLParam::strcookies() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackSURLParam.strCookies)
  return strcookies_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackSURLParam::set_strcookies(const ::std::string& value) {
  set_has_strcookies();
  strcookies_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AFMsg.PackSURLParam.strCookies)
}
inline void PackSURLParam::set_strcookies(const char* value) {
  set_has_strcookies();
  strcookies_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AFMsg.PackSURLParam.strCookies)
}
inline void PackSURLParam::set_strcookies(const void* value, size_t size) {
  set_has_strcookies();
  strcookies_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AFMsg.PackSURLParam.strCookies)
}
inline ::std::string* PackSURLParam::mutable_strcookies() {
  set_has_strcookies();
  // @@protoc_insertion_point(field_mutable:AFMsg.PackSURLParam.strCookies)
  return strcookies_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PackSURLParam::release_strcookies() {
  // @@protoc_insertion_point(field_release:AFMsg.PackSURLParam.strCookies)
  clear_has_strcookies();
  return strcookies_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackSURLParam::set_allocated_strcookies(::std::string* strcookies) {
  if (strcookies != NULL) {
    set_has_strcookies();
  } else {
    clear_has_strcookies();
  }
  strcookies_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strcookies);
  // @@protoc_insertion_point(field_set_allocated:AFMsg.PackSURLParam.strCookies)
}

// required double fTimeOutSec = 5;
inline bool PackSURLParam::has_ftimeoutsec() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PackSURLParam::set_has_ftimeoutsec() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PackSURLParam::clear_has_ftimeoutsec() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PackSURLParam::clear_ftimeoutsec() {
  ftimeoutsec_ = 0;
  clear_has_ftimeoutsec();
}
inline double PackSURLParam::ftimeoutsec() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackSURLParam.fTimeOutSec)
  return ftimeoutsec_;
}
inline void PackSURLParam::set_ftimeoutsec(double value) {
  set_has_ftimeoutsec();
  ftimeoutsec_ = value;
  // @@protoc_insertion_point(field_set:AFMsg.PackSURLParam.fTimeOutSec)
}

// required bytes strRsp = 6;
inline bool PackSURLParam::has_strrsp() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PackSURLParam::set_has_strrsp() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PackSURLParam::clear_has_strrsp() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PackSURLParam::clear_strrsp() {
  strrsp_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_strrsp();
}
inline const ::std::string& PackSURLParam::strrsp() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackSURLParam.strRsp)
  return strrsp_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackSURLParam::set_strrsp(const ::std::string& value) {
  set_has_strrsp();
  strrsp_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AFMsg.PackSURLParam.strRsp)
}
inline void PackSURLParam::set_strrsp(const char* value) {
  set_has_strrsp();
  strrsp_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AFMsg.PackSURLParam.strRsp)
}
inline void PackSURLParam::set_strrsp(const void* value, size_t size) {
  set_has_strrsp();
  strrsp_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AFMsg.PackSURLParam.strRsp)
}
inline ::std::string* PackSURLParam::mutable_strrsp() {
  set_has_strrsp();
  // @@protoc_insertion_point(field_mutable:AFMsg.PackSURLParam.strRsp)
  return strrsp_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PackSURLParam::release_strrsp() {
  // @@protoc_insertion_point(field_release:AFMsg.PackSURLParam.strRsp)
  clear_has_strrsp();
  return strrsp_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackSURLParam::set_allocated_strrsp(::std::string* strrsp) {
  if (strrsp != NULL) {
    set_has_strrsp();
  } else {
    clear_has_strrsp();
  }
  strrsp_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strrsp);
  // @@protoc_insertion_point(field_set_allocated:AFMsg.PackSURLParam.strRsp)
}

// required int64 nRet = 7;
inline bool PackSURLParam::has_nret() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void PackSURLParam::set_has_nret() {
  _has_bits_[0] |= 0x00000040u;
}
inline void PackSURLParam::clear_has_nret() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void PackSURLParam::clear_nret() {
  nret_ = GOOGLE_LONGLONG(0);
  clear_has_nret();
}
inline ::google::protobuf::int64 PackSURLParam::nret() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackSURLParam.nRet)
  return nret_;
}
inline void PackSURLParam::set_nret(::google::protobuf::int64 value) {
  set_has_nret();
  nret_ = value;
  // @@protoc_insertion_point(field_set:AFMsg.PackSURLParam.nRet)
}

// required int64 nReqID = 8;
inline bool PackSURLParam::has_nreqid() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void PackSURLParam::set_has_nreqid() {
  _has_bits_[0] |= 0x00000080u;
}
inline void PackSURLParam::clear_has_nreqid() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void PackSURLParam::clear_nreqid() {
  nreqid_ = GOOGLE_LONGLONG(0);
  clear_has_nreqid();
}
inline ::google::protobuf::int64 PackSURLParam::nreqid() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackSURLParam.nReqID)
  return nreqid_;
}
inline void PackSURLParam::set_nreqid(::google::protobuf::int64 value) {
  set_has_nreqid();
  nreqid_ = value;
  // @@protoc_insertion_point(field_set:AFMsg.PackSURLParam.nReqID)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace AFMsg

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AFMsgURl_2eproto__INCLUDED
