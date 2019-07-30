def dfs(vrtx, distance, result):
    visited[vrtx - 1] = True
    curr_distance = distance
    for i in gdict[vrtx]:
        if visited[i - 1] == False:
            distance = distance + 1
            if distance >= int(result[1]):
                result = [i, distance]
            result = dfs(i, distance, result)
        distance = curr_distance
    return result


N = int(input())
gdict = {}
for i in range(N - 1):
    arr = list(map(int, input().split()))
    (vrtx1, vrtx2) = tuple(arr)
    if vrtx1 in gdict:
        gdict[vrtx1].append(vrtx2)
    else:
        gdict[vrtx1] = [vrtx2]
    if vrtx2 in gdict:
        gdict[vrtx2].append(vrtx1)
    else:
        gdict[vrtx2] = [vrtx1]


visited = [False] * (len(gdict))
for i in gdict:
    vrtx_dis = [i, 0]
    result = dfs(i, 0, vrtx_dis)
    break
visited = [False] * (len(gdict))
vrtx_dis = [int(result[0]), 0]
result = dfs(int(result[0]), 0, vrtx_dis)
print(result[1])

