% facts
male(george).
male(william).
male(harry).
male(charles).
male(philip).
male(edward).
male(andrew).
male(mark).
male(peter).
male(james).

female(charlotte).
female(kate).
female(diana).
female(elizabeth).
female(anne).
female(zara).
female(sarah).
female(eugenie).
female(beatrice).
female(sophie).
female(louise).

parent(elizabeth,charles).
parent(elizabeth,anne).
parent(elizabeth,andrew).
parent(elizabeth,edward).
parent(philip,charles).
parent(philip,anne).
parent(philip,andrew).
parent(philip,edward).

parent(diana,william).
parent(diana,harry).
parent(charles,william).
parent(charles,harry).

parent(anne,peter).
parent(anne,zara).
parent(mark,peter).
parent(mark,zara).

parent(andrew,beatrice).
parent(andrew,eugenie).
parent(sarah,beatrice).
parent(sarah,eugenie).

parent(edward,louise).
parent(edward,james).
parent(sophie,louise).
parent(sophie,james).

parent(kate,george).
parent(kate,charlotte).
parent(william,george).
parent(william,charlotte).

%helper facts
greatgrandparent(GG, C) :- parent(GG,G), parent(G,P), parent(P,C).

%F is the father of C if F is the parent of C and F is a male.
father(F,C) :- parent(F,C), male(F).

%M is the mother of C if M is the parent of C and M is a female.
mother(M, C) :- parent(M, C), female(M).

%S is the son of P if P is the parent of S and S is a male.
son(S, P) :- parent(P, S), male(S).

%D is the daughter of P if P is the parent of D and D is a female.
daughter(D, P) :- parent(P, D), female(D).

%A and B are silbings if they have the same parents and A is not B.
sibling(A, B) :- parent(X, A), parent(X, B), A\==B.

%G is the grandparent of C if G is the parent of P and P is the parent of C.
grandparent(G, C) :- parent(G , P), parent(P , C).

%G is the grandfather of C if G is the parent of P and P is the parent of C and G is a male.
grandfather(G, C) :- parent(G , P), parent(P , C), male(G).

%G is the grandmother of C if G is the parent of P and P is the parent of C and G is a female.
grandmother(G,C) :- parent(G , P), parent(P , C), female(G).

%D is a descendant of A if A is either the parent, grandparent, or greatgrandparent of D.
descendant(D,A) :- parent(A,D); grandparent(A,D); greatgrandparent(A,D).

%A is an ancestor of D if A is either the parent, grandparent, or greatgrandparent of D.
ancestor(A,D) :- parent(A,D); grandparent(A,D); greatgrandparent(A,D).

%U is the uncle of N if U is the sibling of the parent of N (and P is not U), and U is a male.
uncle(U, N) :- sibling(U,P), P\==U, parent(P,N), male(U).

%A is the aunt of N if A is the sibling of the parent of N (and P is not A), and A is a female.
aunt(A, N) :- sibling(A,P), P\==A, parent(P,N), female(A).

%N is the niece of A if N is the daughter of P and P and A are siblings.
niece(N, A) :- sibling(A,P), daughter(N, P).

%N is the nephew of A if N is the son of P and P and A are siblings.
nephew(N, A) :- sibling(A,P), son(N, P).

%A and B are cousins if either the parent of B (represented by U and N) is the uncle of A
%OR the parent of B is the aunt of A.
cousin(A, B) :- (uncle(U, A), parent(U, B)) ; (aunt(N,A), parent(N,B)).

/*
Use the knowledge-base to answer the following questions:

1. Who are the grandchildren of Elizabeth, Queen of England
William, Harry, Peter, Zara, Beatrice, Eugenie, Louise, and James.

2. Is Harry the uncle of Charlotte?
Yes, Harry is the uncle of Charlotte.

3. Does Anne have any siblings?
Yes, Anne has three siblings: Charles, Andrew, and Edward.

4. Who are the nephews of Harry, Prince of Wales?
The nephews of Harry are George and Louis. 

5. Who is Eugenie's grandfather?
Philip is Eugenie's grandfather.

6. Who are William's cousins?
Peter, Zara, Beatrice, Eugenie, Louise, and James.

*/