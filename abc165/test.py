x = int(input())
ans = 1
money = 100
while money < x:
    money *= 1.01
    money = int(money)
    ans = ans+1
print(ans-1)
