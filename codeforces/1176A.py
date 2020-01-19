queries = int(input())

for i in range(queries):
    counter = 0
    n = int(input())

    if n == 1:
        print(0)
        continue

    while int(list(str(n))[-1]) in range(0, 9, 2):
        n //= 2
        counter += 1
    
    while int(list(str(n))[-1]) == (0 or 5):
        n //= 5
        counter += 3
    while sum(list(map(int, str(n)))) % 3 == 0:
        n //= 3
        counter += 2

    if n == 1:
        print(counter)
    else:
        print(-1)
    