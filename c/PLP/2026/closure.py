def externe(x):
    def interne(y):
        return x + y
    return interne

# Création d'une closure
closure1 = externe(5)
closure2 = externe(10)
print(closure1)
print(closure2)

# Appel des closures
print(closure1(3)) # Affiche 8
print(closure2(3)) # Affiche 13