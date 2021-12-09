import math

while True:
    time = list(map(int, input().split()))
    totalOfMinutes = 0

    if sum(time) == 0:
        break

    if (time[2] > time[0]):
        totalOfMinutes = ((time[2] - time[0]) * 60) + (time[3] - time[1])

    elif time[0] > time[2]:
        totalOfMinutes = (24 * 60) - ( ((time[0] - time[2]) * 60) + (time[1] - time[3]) )

    else:
        if time[3] > time[1]:
            totalOfMinutes += time[3] - time[1]
        else:
            totalOfMinutes = (24 * 60) - (time[1] - time[3])

    if not totalOfMinutes:
        totalOfMinutes = 24 * 60

    print(totalOfMinutes)
