inputa = input().split()
n = int(inputa[0])
m = int(inputa[1])
maxValues = {}
for i in range(m):
  maxValues[i]=0
data = input().split()
for val in data:
  val = int(val)
  index = 0
  flag = 0
  for index in range(n):
    if val > maxValues[index]:
      print(index+1)
      maxValues[index]=val
      flag = 1
      break
  if flag == 0:
    print(-1)

      
  
