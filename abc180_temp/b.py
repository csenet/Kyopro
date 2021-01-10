import math
n = int(input())
array = list(map(int, input().strip().split()))
manhattan = 0
euc = 0
max2 = 0
for i in array:
    manhattan = manhattan + abs(i)
for i in array:
    euc = euc + abs(i)**2

for i in array:
    max2 = max(max2,abs(i))
print(manhattan)
print(math.sqrt(euc))
print(max2)
