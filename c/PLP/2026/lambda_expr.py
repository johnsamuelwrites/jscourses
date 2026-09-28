fs = [lambda: i for i in range(3)]
print(fs)

print(fs[0])
print(fs[0]())
print([f() for f in fs])

fs = [lambda i=i: i for i in range(3)]
print(fs)

print(fs[0])
print(fs[0]())
print([f() for f in fs])


