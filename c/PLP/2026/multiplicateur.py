def créer_multiplicateur(n):
    return lambda x: x * n

# Création d'une lambda qui multiplie par 2
doubler = créer_multiplicateur(2)
print(doubler)
print(doubler(5)) # Output : 10


# Création d'une lambda qui multiplie par 3
tripler = créer_multiplicateur(3)
print(tripler)
print(tripler(5)) # Output : 15