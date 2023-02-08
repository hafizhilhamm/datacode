; Auto-generated. Do not edit!


(cl:in-package pkg-srv)


;//! \htmlinclude pertambahan-request.msg.html

(cl:defclass <pertambahan-request> (roslisp-msg-protocol:ros-message)
  ((a
    :reader a
    :initarg :a
    :type cl:integer
    :initform 0)
   (b
    :reader b
    :initarg :b
    :type cl:integer
    :initform 0))
)

(cl:defclass pertambahan-request (<pertambahan-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <pertambahan-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'pertambahan-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name pkg-srv:<pertambahan-request> is deprecated: use pkg-srv:pertambahan-request instead.")))

(cl:ensure-generic-function 'a-val :lambda-list '(m))
(cl:defmethod a-val ((m <pertambahan-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pkg-srv:a-val is deprecated.  Use pkg-srv:a instead.")
  (a m))

(cl:ensure-generic-function 'b-val :lambda-list '(m))
(cl:defmethod b-val ((m <pertambahan-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pkg-srv:b-val is deprecated.  Use pkg-srv:b instead.")
  (b m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <pertambahan-request>) ostream)
  "Serializes a message object of type '<pertambahan-request>"
  (cl:let* ((signed (cl:slot-value msg 'a)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'b)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <pertambahan-request>) istream)
  "Deserializes a message object of type '<pertambahan-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'a) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'b) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<pertambahan-request>)))
  "Returns string type for a service object of type '<pertambahan-request>"
  "pkg/pertambahanRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'pertambahan-request)))
  "Returns string type for a service object of type 'pertambahan-request"
  "pkg/pertambahanRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<pertambahan-request>)))
  "Returns md5sum for a message object of type '<pertambahan-request>"
  "6a2e34150c00229791cc89ff309fff21")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'pertambahan-request)))
  "Returns md5sum for a message object of type 'pertambahan-request"
  "6a2e34150c00229791cc89ff309fff21")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<pertambahan-request>)))
  "Returns full string definition for message of type '<pertambahan-request>"
  (cl:format cl:nil "int64 a~%int64 b~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'pertambahan-request)))
  "Returns full string definition for message of type 'pertambahan-request"
  (cl:format cl:nil "int64 a~%int64 b~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <pertambahan-request>))
  (cl:+ 0
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <pertambahan-request>))
  "Converts a ROS message object to a list"
  (cl:list 'pertambahan-request
    (cl:cons ':a (a msg))
    (cl:cons ':b (b msg))
))
;//! \htmlinclude pertambahan-response.msg.html

(cl:defclass <pertambahan-response> (roslisp-msg-protocol:ros-message)
  ((sum
    :reader sum
    :initarg :sum
    :type cl:integer
    :initform 0))
)

(cl:defclass pertambahan-response (<pertambahan-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <pertambahan-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'pertambahan-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name pkg-srv:<pertambahan-response> is deprecated: use pkg-srv:pertambahan-response instead.")))

(cl:ensure-generic-function 'sum-val :lambda-list '(m))
(cl:defmethod sum-val ((m <pertambahan-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pkg-srv:sum-val is deprecated.  Use pkg-srv:sum instead.")
  (sum m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <pertambahan-response>) ostream)
  "Serializes a message object of type '<pertambahan-response>"
  (cl:let* ((signed (cl:slot-value msg 'sum)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <pertambahan-response>) istream)
  "Deserializes a message object of type '<pertambahan-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'sum) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<pertambahan-response>)))
  "Returns string type for a service object of type '<pertambahan-response>"
  "pkg/pertambahanResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'pertambahan-response)))
  "Returns string type for a service object of type 'pertambahan-response"
  "pkg/pertambahanResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<pertambahan-response>)))
  "Returns md5sum for a message object of type '<pertambahan-response>"
  "6a2e34150c00229791cc89ff309fff21")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'pertambahan-response)))
  "Returns md5sum for a message object of type 'pertambahan-response"
  "6a2e34150c00229791cc89ff309fff21")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<pertambahan-response>)))
  "Returns full string definition for message of type '<pertambahan-response>"
  (cl:format cl:nil "int64 sum~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'pertambahan-response)))
  "Returns full string definition for message of type 'pertambahan-response"
  (cl:format cl:nil "int64 sum~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <pertambahan-response>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <pertambahan-response>))
  "Converts a ROS message object to a list"
  (cl:list 'pertambahan-response
    (cl:cons ':sum (sum msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'pertambahan)))
  'pertambahan-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'pertambahan)))
  'pertambahan-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'pertambahan)))
  "Returns string type for a service object of type '<pertambahan>"
  "pkg/pertambahan")