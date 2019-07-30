def dfs(row, column):
    if row == 4 and column == 4:
        return True
    visited[row][column] = True
    directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
    
    for dx, dy in directions:
        if 0 <= row + dx < 5 and 0 <= column + dy < 5:
            if array[row + dx][column + dy] == 1:
                visited[row + dx][column + dy] = True
            elif array[row + dx][column + dy] == 0 and visited[row + dx][column + dy] == False:
                dfs(row + dx, column + dy)
        
tests = int(input())

for i in range(tests):
    array = []
    for j in range(5):
        row = []
        positions = list(map(int, input().split()))
        row = positions
        array.append(row)

    visited = [ [False for k in range(5)] for k in range(5)]
    print(array)
    result = dfs(0,0)

    if result:
        print("COPS")
    else:
        print("ROBBERS")

    for i in range(5):
        print(visited[i])