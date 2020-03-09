def dt(x):
    mydict = {
        'a': (2, 1),
        'b': (2, 2),
        'c': (2, 3),
        'd': (3, 1),
        'e': (3, 2),
        'f': (3, 3),
        'g': (4, 1),
        'h': (4, 2),
        'i': (4,3),
        'j': (5, 1,),
        'k': (5, 2,),
        'l': (5, 3,),
        'm': (6, 1,),
        'n': (6, 2,),
        'o': (6, 3,),
        'p': (7, 1,),
        'q': (7, 2,),
        'r': (7, 3,),
        's': (7, 4,),
        't': (8, 1,),
        'u': (8, 2,),
        'v': (8,3),
        'w': (9, 1,),
        'x': (9, 2,),
        'y': (9, 3),
        'z': (9, 4),
        ' ': (0, 1)
    }

    prev = -1

    for i in x:
        if prev == mydict[i][0]:
            print(' ', end='')
        
        for j in range(mydict[i][1]):
            print(mydict[i][0], end='')
        
        prev = mydict[i][0]

def main(): 
    cases = int(input())

    phrases = []

    for i in range(cases):
        a = input()
        phrases.append(a)

    for i in range(cases):
        print('Case #{}: '.format(i + 1), end='')
        dt(phrases[i])
        print()

main()