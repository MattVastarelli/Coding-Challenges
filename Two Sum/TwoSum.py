def sums(numList, target):

    for i in range(len(numList)):
       for x in range(len(numList)):
           if numList[i] + numList[x] == target:
                return [i, x]
            

numList = [2, 7, 11, 15]
target = 9

print (sums(numList, target))
