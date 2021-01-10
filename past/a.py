a = str(input())
b = str(input())
if a == b:
  print("same")
elif a.upper() == b.upper():
  print("case-insensitive")
else:
  print("different")