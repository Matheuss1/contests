cases = int(input())

for i in range(cases):
    strings = list(input().split())
    size = len(strings)
    ordernation = sorted(enumerate(strings), key= lambda x: len(x[1]), reverse=True)

    for index, item in enumerate(ordernation):
        if index == (size - 1):
            print(item[1])
        else:
            print(item[1], end=" ")
    
