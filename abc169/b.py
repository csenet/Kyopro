n = int(input())
a = input().split()
ans = 1
if '0' in a:
    ans = 0
else:
    for i in a:
        ans = ans*int(i)
        if ans > 1000000000000000000:
            print(-1)
            exit()
print(ans)
