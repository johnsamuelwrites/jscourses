import dis

def somme(a,b):
    return a+b

def somme_sans_return(a,b):
    c = a+b

def somme_avec_print(a,b):
    c = somme(a,b)
    print(c)

dis.dis(somme)
dis.dis(somme_sans_return)
dis.dis(somme_avec_print)

