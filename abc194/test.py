n = int(input())
data = list(map(int,input().split()))
ans = 0
for i in range(2,n):
    for j in range(1,i-1):
        ans = ans + (data[i-1]-data[j-1])**2
print(ans)