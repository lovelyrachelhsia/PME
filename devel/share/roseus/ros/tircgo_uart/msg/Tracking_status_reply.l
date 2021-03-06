;; Auto-generated. Do not edit!


(when (boundp 'tircgo_uart::Tracking_status_reply)
  (if (not (find-package "TIRCGO_UART"))
    (make-package "TIRCGO_UART"))
  (shadow 'Tracking_status_reply (find-package "TIRCGO_UART")))
(unless (find-package "TIRCGO_UART::TRACKING_STATUS_REPLY")
  (make-package "TIRCGO_UART::TRACKING_STATUS_REPLY"))

(in-package "ROS")
;;//! \htmlinclude Tracking_status_reply.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass tircgo_uart::Tracking_status_reply
  :super ros::object
  :slots (_header _is_legal_op _is_activated _error_code _reply ))

(defmethod tircgo_uart::Tracking_status_reply
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:is_legal_op __is_legal_op) nil)
    ((:is_activated __is_activated) nil)
    ((:error_code __error_code) 0)
    ((:reply __reply) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _is_legal_op __is_legal_op)
   (setq _is_activated __is_activated)
   (setq _error_code (round __error_code))
   (setq _reply (round __reply))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:is_legal_op
   (&optional __is_legal_op)
   (if __is_legal_op (setq _is_legal_op __is_legal_op)) _is_legal_op)
  (:is_activated
   (&optional __is_activated)
   (if __is_activated (setq _is_activated __is_activated)) _is_activated)
  (:error_code
   (&optional __error_code)
   (if __error_code (setq _error_code __error_code)) _error_code)
  (:reply
   (&optional __reply)
   (if __reply (setq _reply __reply)) _reply)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; bool _is_legal_op
    1
    ;; bool _is_activated
    1
    ;; int16 _error_code
    2
    ;; int16 _reply
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; bool _is_legal_op
       (if _is_legal_op (write-byte -1 s) (write-byte 0 s))
     ;; bool _is_activated
       (if _is_activated (write-byte -1 s) (write-byte 0 s))
     ;; int16 _error_code
       (write-word _error_code s)
     ;; int16 _reply
       (write-word _reply s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; bool _is_legal_op
     (setq _is_legal_op (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _is_activated
     (setq _is_activated (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int16 _error_code
     (setq _error_code (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _reply
     (setq _reply (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get tircgo_uart::Tracking_status_reply :md5sum-) "9d3408e6b80e747b553974b7f98663c1")
(setf (get tircgo_uart::Tracking_status_reply :datatype-) "tircgo_uart/Tracking_status_reply")
(setf (get tircgo_uart::Tracking_status_reply :definition-)
      "std_msgs/Header header
bool is_legal_op
bool is_activated
int16 error_code
int16 reply

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

")



(provide :tircgo_uart/Tracking_status_reply "9d3408e6b80e747b553974b7f98663c1")


