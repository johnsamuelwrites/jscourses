import tokenize

with open("lexical.py", "rb") as fichier:
    tokens = tokenize.tokenize(fichier.readline)
    for token in tokens:
        print(token)
