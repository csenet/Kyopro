abc = [chr(i) for i in range(97, 97+26)]
n = int(input())
string = ""
for i in range(n):
  string = string + str(input())
count = 0
for i in abc:
  if(string.count(str(i))>1):
    cout = cout + string.count(str(i))
if cout > n:
  print()