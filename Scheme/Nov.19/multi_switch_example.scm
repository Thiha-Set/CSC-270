(define (time-of-day hour)
    (cond
        ((< hour 6) ‘night)
        ((< hour 12) ‘morning)
        ((< hour 18) ‘afternoon)
        (else ‘evening)
    )
)

(display (time-of-day 9))
