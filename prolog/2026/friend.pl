friend(alice, kevin).
friend(alice, tom).
friend(pierre, alice).
friend(tom, pierre).

human(X) :- friend(_, X).
human(Y) :- friend(Y, _).
