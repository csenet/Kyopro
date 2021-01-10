def getStr(k):
  output = ""
  for i in range(k):
    if i == 0:
      output = "ABC"
    else:
      output = "A"+output+"B"+output+"C"
  return output


input_line = input()
input_line = input_line.split(' ')
k = int(input_line[0])
s = int(input_line[1])
t = int(input_line[2])
print(getStr(k))