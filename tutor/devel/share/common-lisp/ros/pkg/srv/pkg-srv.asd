
(cl:in-package :asdf)

(defsystem "pkg-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "pertambahan" :depends-on ("_package_pertambahan"))
    (:file "_package_pertambahan" :depends-on ("_package"))
  ))