for i in range(int(input())):
        array = []
        for j in range(int(input())):
                set_config = list(input().split())
                array.append(set(set_config[1:]))
        for k in range(int(input())):
                a, b, c = map(int,input().split())
                if a == 1:
                        print(len(array[b - 1] & array[c - 1]))
                else:
                        print(len(array[b - 1] | array[c - 1]))
