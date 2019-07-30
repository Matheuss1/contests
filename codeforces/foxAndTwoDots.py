import sys
def findColor(visited, m, n):
    for i in range(m):
        for j in range(n):
            if visited[i][j] == False:
                return (i, j)
    return -1

def dfs(array, visited, directions, i, j, iConstant, jConstant, result = False, aux = 0):
    parent = (i, j)
    visited[i][j] = True
    for di, dj in directions:
        if 0 <= i + di < m  and 0 <= j + dj < n:
            if i + di == iConstant and j + dj == jConstant and i != aux[0] and j != aux[1]:
                if parent[0] != iConstant or parent[1] != jConstant:
                    return True
            if visited[i + di][j + dj] == False:
                if array[i + di][j + dj] == array[i][j]:
                    if aux == 0:
                        aux = (i + di, j + dj)
                    parent = (i + di, j + dj)
                    result = dfs(array, visited, directions, i + di, j + dj, iConstant, jConstant, result, aux)
        if result:
            return result
        if i == iConstant and j == jConstant:
            aux = 0
    return False

def solve(visited, array, directions, m, n, result = False):
    index = findColor(visited, m, n)
    counter = 0
    while index is not -1:
        for x, y in directions:
            if 0 <= index[0] + x < m  and 0 <= index[1] + y < n:
                if array[index[0] + x][index[1] + y] == array[index[0]][index[1]]:
                    counter += 1
                    if counter >= 2:
                        break
        if counter < 2:
            visited[index[0]][index[1]] = True
        if counter >= 2:
            test = edgeCase(array, index[0], index[1], m, n)
            if test:
                return 'Yes'
            result = dfs(array, visited, directions, index[0], index[1], index[0], index[1])
            if result:
                return 'Yes'
        counter = 0
        index = findColor(visited, m, n)
    return 'No'


def edgeCase(array, i, j, m, n):
    if 0 <= i + 1 < m and 0 <= j + 1 < n:
        if array[i + 1][j + 1] == array[i][j] and array[i + 1][j] == array[i][j] and array[i][j + 1] == array[i][j]:
            return True

    if 0 <= i + 1 < m and 0 <= j - 1 < n:
        if array[i + 1][j - 1] == array[i][j] and (array[i + 1][j] == array[i][j] and array[i][j - 1] == array[i][j]):
            return True

    if 0 <= i - 1 < m and 0 <= j + 1 < n:
        if array[i - 1][j + 1] == array[i][j] and (array[i - 1][j] == array[i][j] and array[i][j + 1] == array[i][j]):
            return True

    if 0 <= i - 1 < n and 0 <= j - 1 < n:
        if array[i - 1][j - 1] == array[i][j] and (array[i - 1][j] == array[i][j] and array[i][j - 1] == array[i][j]):
            return True
    return False


x = 3000
sys.setrecursionlimit(x)
m, n = map(int, input().split())
array = [list(input()) for x in range(m)]
visited = [[False] * n for x in range(m)]
directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
result = solve(visited, array, directions, m, n)
print(result)
