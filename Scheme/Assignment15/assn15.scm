;;helper method
;;translate --> rectifies the color coding standard delineated in the assignment
;; by comparing the string-oriented colors and transforming them to their appropriate values
(define (translate color)
    (cond
        ((equal? color "black") 0)
        ((equal? color "brown") 1)
        ((equal? color "red") 2)
        ((equal? color "orange") 3)
        ((equal? color "yellow") 4)
        ((equal? color "green") 5)
        ((equal? color "blue") 6)
        ((equal? color "violet") 7)
        ((equal? color "grey") 8)
        ((equal? color "white") 9)
        (else -1)
    )
)

;;helper method
;;resHelper --> utilizes the colors in the list to compute the base value of the
;;resistor
;;colors --> variable representing the list of colors of the resistor
;;index --> the index representing base 10 values (i.e. 100, 10, 1...)
;;  primarily utilized to get the actual values ( value x base) of the wires of the resistor
;; for example, a color listing of red, yellow, black, and red will have a base value of 240,
;; because red's value is 200 ( 2 x 100) + yellow's value is 40 ( 4 x 10 ) + black's value is 0 (0 x 1), thereby totaling up to 240. 
(define (resHelper colors index)
    ;;BASE CASE: if colors has only one element (representing the last element)
    ;;in that case, return 0.
    (cond ((= (length colors) 1) 0)
    ;;RECURSIVE CASE:
    ;;return the summation of all translated and base-10 oriented (translatedValue x index)
    (else (+ (* (translate (car colors)) index) (resHelper (cdr colors) (/ index 10)))
)))

;;helper method
;;lastColor --> returns 10 raised to the power of the value of the last color in the list
(define (lastColor colors)
    ;;BASE CASE
    ;;if colors has only one element (the last element of the list), then return 10 raised to the translated value of the color 
    (cond ((= (length colors) 1) (expt 10 (translate(car colors)) ))
    ;;RECURSIVE CASE
    ;;otherwise, just keep traversing through the colors list
    (else (lastColor(cdr colors))   
)))

;;main method
;;resistance --> computes the resistance of a resistor
(define (resistance colors)
    ;;return the base value of the colors in the list multiplied by 10 raised to the value of the last color
    (* (resHelper colors 100) (lastColor colors))
)


;;(display (resHelper '("red" "yellow" "black" "red") 100))
(display (resistance '("red" "yellow" "black" "red")))
