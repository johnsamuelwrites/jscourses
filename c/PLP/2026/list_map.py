nombres = [1, 2, 3, 4]

iter = map(lambda x : x **2 , nombres)

print(iter)

liste = list(iter)
print(liste)

print(range(5))

for i in range(5):
    print(i)