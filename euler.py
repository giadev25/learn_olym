# 3^2 = 3 * 3 = 9
# pangkat: **

def f(n):
    return (1 + 1/n) ** n

i = 1
while True:
    print(f(i))
    i += 1