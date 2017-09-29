(defun read-wrap []
  (def test (read "test.sl"))
  test
  "ok")

(def test (read-wrap))
(def shit (read "Makefile"))

(println test)
(println shit)
