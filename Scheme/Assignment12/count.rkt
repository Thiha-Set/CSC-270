;;lang scheme
;; define one or more expressions that can be used to
;; count the number of items on a list without using 
;; the length operator

;; insert work below
(define (count-list list)
    ;;BASE CASE: list is empty
    ;;if list is empty, return 0
    (cond ((null? list) 0)
    ;;RECURSIVE CASE: list is not empty, and thus keep removing the first elem
    ;;(concurrently adding 1 each time to the count) until the list is empty
    (else (+ 1 (count-list (cdr list))))))

;; insert work above

(display (count-list '(3 14 15 9 62 64 37)))