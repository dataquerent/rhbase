/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#include "Hbase_types.h"

namespace apache { namespace hadoop { namespace hbase { namespace thrift {

const char* TCell::ascii_fingerprint = "1CCCF6FC31CFD1D61BBBB1BAF3590620";
const uint8_t TCell::binary_fingerprint[16] = {0x1C,0xCC,0xF6,0xFC,0x31,0xCF,0xD1,0xD6,0x1B,0xBB,0xB1,0xBA,0xF3,0x59,0x06,0x20};

uint32_t TCell::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->value);
          this->__isset.value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timestamp);
          this->__isset.timestamp = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TCell::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("TCell");
  xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeBinary(this->value);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("timestamp", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->timestamp);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* ColumnDescriptor::ascii_fingerprint = "3B18638852FDF9DD911BC1174265F92E";
const uint8_t ColumnDescriptor::binary_fingerprint[16] = {0x3B,0x18,0x63,0x88,0x52,0xFD,0xF9,0xDD,0x91,0x1B,0xC1,0x17,0x42,0x65,0xF9,0x2E};

uint32_t ColumnDescriptor::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->maxVersions);
          this->__isset.maxVersions = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->compression);
          this->__isset.compression = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->inMemory);
          this->__isset.inMemory = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->bloomFilterType);
          this->__isset.bloomFilterType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->bloomFilterVectorSize);
          this->__isset.bloomFilterVectorSize = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->bloomFilterNbHashes);
          this->__isset.bloomFilterNbHashes = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->blockCacheEnabled);
          this->__isset.blockCacheEnabled = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->timeToLive);
          this->__isset.timeToLive = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ColumnDescriptor::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ColumnDescriptor");
  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeBinary(this->name);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("maxVersions", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->maxVersions);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("compression", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->compression);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("inMemory", ::apache::thrift::protocol::T_BOOL, 4);
  xfer += oprot->writeBool(this->inMemory);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("bloomFilterType", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->bloomFilterType);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("bloomFilterVectorSize", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32(this->bloomFilterVectorSize);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("bloomFilterNbHashes", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->bloomFilterNbHashes);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("blockCacheEnabled", ::apache::thrift::protocol::T_BOOL, 8);
  xfer += oprot->writeBool(this->blockCacheEnabled);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("timeToLive", ::apache::thrift::protocol::T_I32, 9);
  xfer += oprot->writeI32(this->timeToLive);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* TRegionInfo::ascii_fingerprint = "A62468FDF7B959CEE277FA7367D1A4C6";
const uint8_t TRegionInfo::binary_fingerprint[16] = {0xA6,0x24,0x68,0xFD,0xF7,0xB9,0x59,0xCE,0xE2,0x77,0xFA,0x73,0x67,0xD1,0xA4,0xC6};

uint32_t TRegionInfo::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->startKey);
          this->__isset.startKey = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->endKey);
          this->__isset.endKey = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->version);
          this->__isset.version = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TRegionInfo::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("TRegionInfo");
  xfer += oprot->writeFieldBegin("startKey", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeBinary(this->startKey);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("endKey", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeBinary(this->endKey);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->id);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeBinary(this->name);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("version", ::apache::thrift::protocol::T_BYTE, 5);
  xfer += oprot->writeByte(this->version);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* Mutation::ascii_fingerprint = "DC8F62AF23854A1A6849A2A157CCCA65";
const uint8_t Mutation::binary_fingerprint[16] = {0xDC,0x8F,0x62,0xAF,0x23,0x85,0x4A,0x1A,0x68,0x49,0xA2,0xA1,0x57,0xCC,0xCA,0x65};

uint32_t Mutation::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->isDelete);
          this->__isset.isDelete = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->column);
          this->__isset.column = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->value);
          this->__isset.value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Mutation::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Mutation");
  xfer += oprot->writeFieldBegin("isDelete", ::apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->isDelete);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("column", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeBinary(this->column);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeBinary(this->value);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* BatchMutation::ascii_fingerprint = "7849EEBF8BB50169F3D2F0DD635BD8ED";
const uint8_t BatchMutation::binary_fingerprint[16] = {0x78,0x49,0xEE,0xBF,0x8B,0xB5,0x01,0x69,0xF3,0xD2,0xF0,0xDD,0x63,0x5B,0xD8,0xED};

uint32_t BatchMutation::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->row);
          this->__isset.row = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->mutations.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            iprot->readListBegin(_etype3, _size0);
            this->mutations.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += this->mutations[_i4].read(iprot);
            }
            iprot->readListEnd();
          }
          this->__isset.mutations = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t BatchMutation::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("BatchMutation");
  xfer += oprot->writeFieldBegin("row", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeBinary(this->row);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("mutations", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, this->mutations.size());
    std::vector<Mutation> ::const_iterator _iter5;
    for (_iter5 = this->mutations.begin(); _iter5 != this->mutations.end(); ++_iter5)
    {
      xfer += (*_iter5).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* TRowResult::ascii_fingerprint = "AE98EA4F344566FAFE04FA5E5823D1ED";
const uint8_t TRowResult::binary_fingerprint[16] = {0xAE,0x98,0xEA,0x4F,0x34,0x45,0x66,0xFA,0xFE,0x04,0xFA,0x5E,0x58,0x23,0xD1,0xED};

uint32_t TRowResult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->row);
          this->__isset.row = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->columns.clear();
            uint32_t _size6;
            ::apache::thrift::protocol::TType _ktype7;
            ::apache::thrift::protocol::TType _vtype8;
            iprot->readMapBegin(_ktype7, _vtype8, _size6);
            uint32_t _i10;
            for (_i10 = 0; _i10 < _size6; ++_i10)
            {
              Text _key11;
              xfer += iprot->readBinary(_key11);
              TCell& _val12 = this->columns[_key11];
              xfer += _val12.read(iprot);
            }
            iprot->readMapEnd();
          }
          this->__isset.columns = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TRowResult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("TRowResult");
  xfer += oprot->writeFieldBegin("row", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeBinary(this->row);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("columns", ::apache::thrift::protocol::T_MAP, 2);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRUCT, this->columns.size());
    std::map<Text, TCell> ::const_iterator _iter13;
    for (_iter13 = this->columns.begin(); _iter13 != this->columns.end(); ++_iter13)
    {
      xfer += oprot->writeBinary(_iter13->first);
      xfer += _iter13->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* IOError::ascii_fingerprint = "EFB929595D312AC8F305D5A794CFEDA1";
const uint8_t IOError::binary_fingerprint[16] = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

uint32_t IOError::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t IOError::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("IOError");
  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* IllegalArgument::ascii_fingerprint = "EFB929595D312AC8F305D5A794CFEDA1";
const uint8_t IllegalArgument::binary_fingerprint[16] = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

uint32_t IllegalArgument::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t IllegalArgument::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("IllegalArgument");
  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* AlreadyExists::ascii_fingerprint = "EFB929595D312AC8F305D5A794CFEDA1";
const uint8_t AlreadyExists::binary_fingerprint[16] = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

uint32_t AlreadyExists::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t AlreadyExists::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("AlreadyExists");
  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

}}}} // namespace
