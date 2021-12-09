cases = int(input())

numbersDic = {}

for i in range(cases):
    number = int(input())

    if number in numbersDic:
        numbersDic[number] += 1
    else:
        numbersDic[number] = 1

sortedNumbers = sorted(numbersDic.items())

for i in range(len(sortedNumbers)):
        print(sortedNumbers[i][0], "aparece", sortedNumbers[i][1], "vez(es)")