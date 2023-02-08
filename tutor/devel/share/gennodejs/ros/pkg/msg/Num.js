// Auto-generated. Do not edit!

// (in-package pkg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Num {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.sapaan = null;
      this.angka = null;
    }
    else {
      if (initObj.hasOwnProperty('sapaan')) {
        this.sapaan = initObj.sapaan
      }
      else {
        this.sapaan = '';
      }
      if (initObj.hasOwnProperty('angka')) {
        this.angka = initObj.angka
      }
      else {
        this.angka = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Num
    // Serialize message field [sapaan]
    bufferOffset = _serializer.string(obj.sapaan, buffer, bufferOffset);
    // Serialize message field [angka]
    bufferOffset = _serializer.uint32(obj.angka, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Num
    let len;
    let data = new Num(null);
    // Deserialize message field [sapaan]
    data.sapaan = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [angka]
    data.angka = _deserializer.uint32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.sapaan);
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'pkg/Num';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '5beac8738af3e03cbb4e6e63243bec98';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string sapaan
    uint32 angka
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Num(null);
    if (msg.sapaan !== undefined) {
      resolved.sapaan = msg.sapaan;
    }
    else {
      resolved.sapaan = ''
    }

    if (msg.angka !== undefined) {
      resolved.angka = msg.angka;
    }
    else {
      resolved.angka = 0
    }

    return resolved;
    }
};

module.exports = Num;
