/* Faits : Déclaration des relations parents */
parent(kevin, jane).
parent(kevin, jim).
parent(jane, ann).
parent(jane, bob).
parent(jim, pat).

/* Règle : X est l'ancêtre de Y si X est le parent de Y ou si X est l'ancêtre d'un parent de Y */
ancetre(X, Y) :- parent(X, Y).
ancetre(X, Y) :- parent(X, Z), ancetre(Z, Y).