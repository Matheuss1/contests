a = int(input())

for i in range(a):
    h, d, g = map(int, input().split())
    
    if ( 200 <= h <= 300 and d >= 50 and g >= 150):
        print("Sim")
    else:
        print("Nao")