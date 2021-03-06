/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef debug_proto_TYPES_H
#define debug_proto_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>




struct BsnesRegister {
  enum type {
    pc = 0,
    a = 1,
    x = 2,
    y = 3,
    s = 4,
    d = 5,
    db = 6,
    p = 7,
    mflag = 8,
    xflag = 9,
    eflag = 10
  };
};

extern const std::map<int, const char*> _BsnesRegister_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const BsnesRegister::type& val);

std::string to_string(const BsnesRegister::type& val);

struct BpType {
  enum type {
    BP_PC = 1,
    BP_READ = 2,
    BP_WRITE = 4
  };
};

extern const std::map<int, const char*> _BpType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const BpType::type& val);

std::string to_string(const BpType::type& val);

struct DbgMemorySource {
  enum type {
    CPUBus = 0,
    APUBus = 1,
    APURAM = 2,
    DSP = 3,
    VRAM = 4,
    OAM = 5,
    CGRAM = 6,
    CartROM = 7,
    CartRAM = 8,
    SA1Bus = 9,
    SFXBus = 10,
    SGBBus = 11,
    SGBROM = 12,
    SGBRAM = 13
  };
};

extern const std::map<int, const char*> _DbgMemorySource_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const DbgMemorySource::type& val);

std::string to_string(const DbgMemorySource::type& val);

struct DbgBptSource {
  enum type {
    CPUBus = 0,
    APURAM = 1,
    DSP = 2,
    VRAM = 3,
    OAM = 4,
    CGRAM = 5,
    SA1Bus = 6,
    SFXBus = 7,
    SGBBus = 8
  };
};

extern const std::map<int, const char*> _DbgBptSource_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const DbgBptSource::type& val);

std::string to_string(const DbgBptSource::type& val);

class BsnesRegisters;

class DbgBreakpoint;

typedef struct _BsnesRegisters__isset {
  _BsnesRegisters__isset() : pc(false), a(false), x(false), y(false), s(false), d(false), db(false), p(false), mflag(false), xflag(false), eflag(false) {}
  bool pc :1;
  bool a :1;
  bool x :1;
  bool y :1;
  bool s :1;
  bool d :1;
  bool db :1;
  bool p :1;
  bool mflag :1;
  bool xflag :1;
  bool eflag :1;
} _BsnesRegisters__isset;

class BsnesRegisters : public virtual ::apache::thrift::TBase {
 public:

  BsnesRegisters(const BsnesRegisters&);
  BsnesRegisters& operator=(const BsnesRegisters&);
  BsnesRegisters() : pc(0), a(0), x(0), y(0), s(0), d(0), db(0), p(0), mflag(0), xflag(0), eflag(0) {
  }

  virtual ~BsnesRegisters() noexcept;
  int32_t pc;
  int32_t a;
  int32_t x;
  int32_t y;
  int32_t s;
  int32_t d;
  int16_t db;
  int16_t p;
  int8_t mflag;
  int8_t xflag;
  int8_t eflag;

  _BsnesRegisters__isset __isset;

  void __set_pc(const int32_t val);

  void __set_a(const int32_t val);

  void __set_x(const int32_t val);

  void __set_y(const int32_t val);

  void __set_s(const int32_t val);

  void __set_d(const int32_t val);

  void __set_db(const int16_t val);

  void __set_p(const int16_t val);

  void __set_mflag(const int8_t val);

  void __set_xflag(const int8_t val);

  void __set_eflag(const int8_t val);

  bool operator == (const BsnesRegisters & rhs) const
  {
    if (!(pc == rhs.pc))
      return false;
    if (!(a == rhs.a))
      return false;
    if (!(x == rhs.x))
      return false;
    if (!(y == rhs.y))
      return false;
    if (!(s == rhs.s))
      return false;
    if (!(d == rhs.d))
      return false;
    if (!(db == rhs.db))
      return false;
    if (!(p == rhs.p))
      return false;
    if (!(mflag == rhs.mflag))
      return false;
    if (!(xflag == rhs.xflag))
      return false;
    if (!(eflag == rhs.eflag))
      return false;
    return true;
  }
  bool operator != (const BsnesRegisters &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BsnesRegisters & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(BsnesRegisters &a, BsnesRegisters &b);

std::ostream& operator<<(std::ostream& out, const BsnesRegisters& obj);

typedef struct _DbgBreakpoint__isset {
  _DbgBreakpoint__isset() : type(false), bstart(false), bend(false), enabled(false), src(false) {}
  bool type :1;
  bool bstart :1;
  bool bend :1;
  bool enabled :1;
  bool src :1;
} _DbgBreakpoint__isset;

class DbgBreakpoint : public virtual ::apache::thrift::TBase {
 public:

  DbgBreakpoint(const DbgBreakpoint&);
  DbgBreakpoint& operator=(const DbgBreakpoint&);
  DbgBreakpoint() : type((BpType::type)0), bstart(0), bend(0), enabled(0), src((DbgBptSource::type)0) {
  }

  virtual ~DbgBreakpoint() noexcept;
  /**
   * 
   * @see BpType
   */
  BpType::type type;
  int32_t bstart;
  int32_t bend;
  bool enabled;
  /**
   * 
   * @see DbgBptSource
   */
  DbgBptSource::type src;

  _DbgBreakpoint__isset __isset;

  void __set_type(const BpType::type val);

  void __set_bstart(const int32_t val);

  void __set_bend(const int32_t val);

  void __set_enabled(const bool val);

  void __set_src(const DbgBptSource::type val);

  bool operator == (const DbgBreakpoint & rhs) const
  {
    if (!(type == rhs.type))
      return false;
    if (!(bstart == rhs.bstart))
      return false;
    if (!(bend == rhs.bend))
      return false;
    if (!(enabled == rhs.enabled))
      return false;
    if (!(src == rhs.src))
      return false;
    return true;
  }
  bool operator != (const DbgBreakpoint &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const DbgBreakpoint & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(DbgBreakpoint &a, DbgBreakpoint &b);

std::ostream& operator<<(std::ostream& out, const DbgBreakpoint& obj);



#endif
