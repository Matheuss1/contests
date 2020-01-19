d = -1
b = 1

while d:
    a = int(input())

    if a == 0:
        break;

    matrix = [[0 for x in range(a)] for y in range(a)]

    for i in range(a):
        for j in range(i, a):
            matrix[i][j] = matrix[j][i] = b
            b += 1
        b = 1

    for i in matrix:
        for idx, j in enumerate(i):
            print("{:>3}".format(j), end='')
            if idx != a - 1:
                print(' ', end='')
        print()
    print()
        

