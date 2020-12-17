;;lang scheme
;; define one or more expressions that can be used to
;; computer the average of a list

;; insert work below
;; helper method (from assignment 12) to compute the length
;; of the list
(define (count-list list) 
    ;;BASE CASE: list is empty
    ;;if list is empty, return 0
    (cond ((null? list)0)
    ;;RECURSIVE CASE: list is not empty, and thus keep removing the first elem
    ;;(concurrently adding 1 each time to the count) until the list is empty
    (else ( + 1 (count-list (cdr list))))))

;; helper method to comput the sum
;; of all elements in the list
(define (sumOfList list)
    ;;BASE CASE: list is empty
    ;;if list is empty, return 0
    (cond ((null? list)0)
    ;;RECURSIVE CASE: list is not empty, and thus keep removing the first elem
    ;;concurrently adding the first element to the count until the list is empty
    (else ( + (car list) (sumOfList (cdr list))))))

(define (average list)
    ;; average = sum / total number of elems
    (/ (sumOfList list) (count-list list))
)
;; insert work above

(display (average '(3 14 15 9 62 64 37)))
