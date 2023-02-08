; Auto-generated. Do not edit!


(cl:in-package pkg-msg)


;//! \htmlinclude Num.msg.html

(cl:defclass <Num> (roslisp-msg-protocol:ros-message)
  ((sapaan
    :reader sapaan
    :initarg :sapaan
    :type cl:string
    :initform "")
   (angka
    :reader angka
    :initarg :angka
    :type cl:integer
    :initform 0))
)

(cl:defclass Num (<Num>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Num>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Num)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name pkg-msg:<Num> is deprecated: use pkg-msg:Num instead.")))

(cl:ensure-generic-function 'sapaan-val :lambda-list '(m))
(cl:defmethod sapaan-val ((m <Num>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pkg-msg:sapaan-val is deprecated.  Use pkg-msg:sapaan instead.")
  (sapaan m))

(cl:ensure-generic-function 'angka-val :lambda-list '(m))
(cl:defmethod angka-val ((m <Num>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pkg-msg:angka-val is deprecated.  Use pkg-msg:angka instead.")
  (angka m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Num>) ostream)
  "Serializes a message object of type '<Num>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'sapaan))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'sapaan))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'angka)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'angka)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'angka)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'angka)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Num>) istream)
  "Deserializes a message object of type '<Num>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'sapaan) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'sapaan) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'angka)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'angka)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'angka)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'angka)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Num>)))
  "Returns string type for a message object of type '<Num>"
  "pkg/Num")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Num)))
  "Returns string type for a message object of type 'Num"
  "pkg/Num")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Num>)))
  "Returns md5sum for a message object of type '<Num>"
  "5beac8738af3e03cbb4e6e63243bec98")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Num)))
  "Returns md5sum for a message object of type 'Num"
  "5beac8738af3e03cbb4e6e63243bec98")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Num>)))
  "Returns full string definition for message of type '<Num>"
  (cl:format cl:nil "string sapaan~%uint32 angka~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Num)))
  "Returns full string definition for message of type 'Num"
  (cl:format cl:nil "string sapaan~%uint32 angka~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Num>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'sapaan))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Num>))
  "Converts a ROS message object to a list"
  (cl:list 'Num
    (cl:cons ':sapaan (sapaan msg))
    (cl:cons ':angka (angka msg))
))
