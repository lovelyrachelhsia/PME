// Auto-generated. Do not edit!

// (in-package tircgo_uart.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------


//-----------------------------------------------------------

class RobotInvokeRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.operation = null;
      this.argument = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('operation')) {
        this.operation = initObj.operation
      }
      else {
        this.operation = 0;
      }
      if (initObj.hasOwnProperty('argument')) {
        this.argument = initObj.argument
      }
      else {
        this.argument = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type RobotInvokeRequest
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [operation]
    bufferOffset = _serializer.char(obj.operation, buffer, bufferOffset);
    // Serialize message field [argument]
    bufferOffset = _arraySerializer.int16(obj.argument, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type RobotInvokeRequest
    let len;
    let data = new RobotInvokeRequest(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [operation]
    data.operation = _deserializer.char(buffer, bufferOffset);
    // Deserialize message field [argument]
    data.argument = _arrayDeserializer.int16(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += 2 * object.argument.length;
    return length + 5;
  }

  static datatype() {
    // Returns string type for a service object
    return 'tircgo_uart/RobotInvokeRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '25a35ca13096b4101a9058e94d79f627';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    char operation
    int16[] argument
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new RobotInvokeRequest(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.operation !== undefined) {
      resolved.operation = msg.operation;
    }
    else {
      resolved.operation = 0
    }

    if (msg.argument !== undefined) {
      resolved.argument = msg.argument;
    }
    else {
      resolved.argument = []
    }

    return resolved;
    }
};

class RobotInvokeResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.is_legal_op = null;
      this.is_arg_valid = null;
      this.is_activated = null;
      this.feedback = null;
      this.error_code = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('is_legal_op')) {
        this.is_legal_op = initObj.is_legal_op
      }
      else {
        this.is_legal_op = false;
      }
      if (initObj.hasOwnProperty('is_arg_valid')) {
        this.is_arg_valid = initObj.is_arg_valid
      }
      else {
        this.is_arg_valid = false;
      }
      if (initObj.hasOwnProperty('is_activated')) {
        this.is_activated = initObj.is_activated
      }
      else {
        this.is_activated = false;
      }
      if (initObj.hasOwnProperty('feedback')) {
        this.feedback = initObj.feedback
      }
      else {
        this.feedback = [];
      }
      if (initObj.hasOwnProperty('error_code')) {
        this.error_code = initObj.error_code
      }
      else {
        this.error_code = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type RobotInvokeResponse
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [is_legal_op]
    bufferOffset = _serializer.bool(obj.is_legal_op, buffer, bufferOffset);
    // Serialize message field [is_arg_valid]
    bufferOffset = _serializer.bool(obj.is_arg_valid, buffer, bufferOffset);
    // Serialize message field [is_activated]
    bufferOffset = _serializer.bool(obj.is_activated, buffer, bufferOffset);
    // Serialize message field [feedback]
    bufferOffset = _arraySerializer.int16(obj.feedback, buffer, bufferOffset, null);
    // Serialize message field [error_code]
    bufferOffset = _serializer.int16(obj.error_code, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type RobotInvokeResponse
    let len;
    let data = new RobotInvokeResponse(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [is_legal_op]
    data.is_legal_op = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [is_arg_valid]
    data.is_arg_valid = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [is_activated]
    data.is_activated = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [feedback]
    data.feedback = _arrayDeserializer.int16(buffer, bufferOffset, null)
    // Deserialize message field [error_code]
    data.error_code = _deserializer.int16(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += 2 * object.feedback.length;
    return length + 9;
  }

  static datatype() {
    // Returns string type for a service object
    return 'tircgo_uart/RobotInvokeResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '29b3e05f8f2e25ee96b6ef844e123ff0';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    bool is_legal_op
    bool is_arg_valid
    bool is_activated
    int16[] feedback
    int16 error_code
     
    
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new RobotInvokeResponse(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.is_legal_op !== undefined) {
      resolved.is_legal_op = msg.is_legal_op;
    }
    else {
      resolved.is_legal_op = false
    }

    if (msg.is_arg_valid !== undefined) {
      resolved.is_arg_valid = msg.is_arg_valid;
    }
    else {
      resolved.is_arg_valid = false
    }

    if (msg.is_activated !== undefined) {
      resolved.is_activated = msg.is_activated;
    }
    else {
      resolved.is_activated = false
    }

    if (msg.feedback !== undefined) {
      resolved.feedback = msg.feedback;
    }
    else {
      resolved.feedback = []
    }

    if (msg.error_code !== undefined) {
      resolved.error_code = msg.error_code;
    }
    else {
      resolved.error_code = 0
    }

    return resolved;
    }
};

module.exports = {
  Request: RobotInvokeRequest,
  Response: RobotInvokeResponse,
  md5sum() { return '3fb5b8bd341accb019477d3b6414a198'; },
  datatype() { return 'tircgo_uart/RobotInvoke'; }
};
