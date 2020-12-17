;;Exercise 2.2.1

;;a. 1.2 x (2-1/3)+ -8.7
;;ANSWER: (+ (* 1.2 (-2 (/ 1 3))) -8.7)
;;CHECK:
(display (+ (* 1.2 (- 2 (/ 1 3))) -8.7) )
(newline)
;;result: -6.699999999999999

;;b. (2/3 + 4/9) / (5/11 - 4/3)
;;ANSWER: (/ (+ (/ 2 3) (/ 4 9)) (- (/ 5 11) (/ 4 3))  )
;;CHECK:
(display (/ (+ (/ 2 3) (/ 4 9)) (- (/ 5 11) (/ 4 3))  ))
(newline)
;;result: -110/87

;;c. 1 + 1 / (2 + 1 / (1 + 1/2 ))
;;ANSWER: (/ (+ 1 1) (/ (+ 2 1) (+ 1 (/ 1 2)) ) )
;;CHECK:
(display (/ (+ 1 1) (/ (+ 2 1) (+ 1 (/ 1 2)) )))
(newline)
;;result: 1

;;d. 1 x -2 x 3 x -4 x 5 x -6 x 7
;;ANSWER: (* 1 (* -2 (* 3 (* -4 (* 5 (* -6 7) ) ) )))
;;CHECK:
(display (* 1 (* -2 (* 3 (* -4 (* 5 (* -6 7)))))))
(newline)
;;result: -5040

;;Exercise 2.2.3

;;a. (cons 'car 'cdr)
(display (cons 'car 'cdr))
(newline)
;;result: (car . cdr)

;;b. (list 'this '(is silly))
(display (list 'this '(is silly)))
(newline)
;;result: (this (is silly))

;;c. (cons 'is '(this silly?))
(display (cons 'is '(this silly?)))
(newline)
;;result: (is this silly?)

;;d. (quote (+ 2 3))
(display (quote (+ 2 3)))
(newline)
;;result: (+ 2 3)

;;e. (cons '+ '(2 3))
(display (cons '+ '(2 3)))
(newline)
;;result:(+ 2 3)

;;f. (car '(+ 2 3))
(display (car '(+ 2 3)))
(newline)
;;result: +

;;g. (cdr '(+ 2 3))
(display (cdr '(+ 2 3)))
(newline)
;;result: (2 3)

;;h. cons
(display cons)
(newline)
;;result: #<procedure cons>

;;i. (quote cons)
(display (quote cons))
(newline)
;;result: cons

;;j. (quote (quote cons))
(display (quote (quote cons)))
(newline)
;;result: 'cons

;;k. (car (quote (quote cons)))
(display (car (quote (quote cons))))
(newline)
;;result: quote

;;l. (+ 2 3)
(display (+ 2 3))
(newline)
;;result: 5

;;m. (+ '2 '3)
(display (+ '2 '3))
(newline)
;;result: 5

;;n. (+ (car '(2 3)) (car (cdr '(2 3))))
(display (+ (car '(2 3)) (car (cdr '(2 3)))))
(newline)
;;result: 5

;;o. ((car (list + - * /)) 2 3)
(display ((car (list + - * /)) 2 3))
(newline)
;;result: 5

;;Exercise 2.2.4
(display (cons (car (cdr (car '((a b) (cd))))) '(c d)))
(newline)
