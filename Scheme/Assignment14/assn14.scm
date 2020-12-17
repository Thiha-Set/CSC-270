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

;;helper method to compute the variance (The average of the squared differences from the Mean.)
;;takes in two vars
;;(list --> the list to compute the variance for)
;;(avg --> the average of the list passed in by value)
(define (varianceHelper list avg) 
    ;;BASE CASE: list is empty
    ;;if the list is empty, return 0
    (cond ((null? list)0)
    ;;RECURSIVE CASE: list is not empty, so keep squaring the differences between the first element in the list
    ;; and the average (while concurrently traversing the list to the end)
    (else
        (+ (* (- avg (car list)) (- avg (car list))) (varianceHelper (cdr list) avg) ) 
    )))

;;main method
;;Calculates the standard deviation from a provided set of values
(define (standard_deviation list)
    ;;Standard deviation: the square root of the variance divided by the numbers of elements
    ;;in the list
    (sqrt (/ (varianceHelper list (average list)) (count-list list)))
)

(display (standard_deviation '(3 14 15 9 62 64 37) ))