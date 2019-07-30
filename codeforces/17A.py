import math
def isprime(n):
    if n % 2 == 0 and n > 2: 
        return False
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        if n % i == 0:
            return False
    return True


n, k = map(int, input().split())
primes, somas = [], []
aux = 0
for i in range(2, n + 1):
    if isprime(i):
        primes.append(i)
for i in range(1, len(primes)):
    somas.append(primes[i] + primes[i - 1])

for i in primes:
    index = primes.index(i)
    for j in somas:
        if somas.index(j) < index and (j + 1 == i):
             k -= 1
if k <= 0:
    print("YES")
else:
    print("NO")
