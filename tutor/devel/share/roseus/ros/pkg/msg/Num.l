;; Auto-generated. Do not edit!


(when (boundp 'pkg::Num)
  (if (not (find-package "PKG"))
    (make-package "PKG"))
  (shadow 'Num (find-package "PKG")))
(unless (find-package "PKG::NUM")
  (make-package "PKG::NUM"))

(in-package "ROS")
;;//! \htmlinclude Num.msg.html


(defclass pkg::Num
  :super ros::object
  :slots (_sapaan _angka ))

(defmethod pkg::Num
  (:init
   (&key
    ((:sapaan __sapaan) "")
    ((:angka __angka) 0)
    )
   (send-super :init)
   (setq _sapaan (string __sapaan))
   (setq _angka (round __angka))
   self)
  (:sapaan
   (&optional __sapaan)
   (if __sapaan (setq _sapaan __sapaan)) _sapaan)
  (:angka
   (&optional __angka)
   (if __angka (setq _angka __angka)) _angka)
  (:serialization-length
   ()
   (+
    ;; string _sapaan
    4 (length _sapaan)
    ;; uint32 _angka
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _sapaan
       (write-long (length _sapaan) s) (princ _sapaan s)
     ;; uint32 _angka
       (write-long _angka s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _sapaan
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _sapaan (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint32 _angka
     (setq _angka (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get pkg::Num :md5sum-) "5beac8738af3e03cbb4e6e63243bec98")
(setf (get pkg::Num :datatype-) "pkg/Num")
(setf (get pkg::Num :definition-)
      "string sapaan
uint32 angka
")



(provide :pkg/Num "5beac8738af3e03cbb4e6e63243bec98")


