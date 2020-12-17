(define (interleave a b)
    (if (= (length a) 1)
        (list (car a) (car b))
        (cons (car a) (cons (car b) (interleave (cdr a) (cdr b)))
)
    )
)

(display (interleave '(a b c d e) '(1 2 3 4 5)))