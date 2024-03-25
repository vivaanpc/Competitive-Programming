t = int(input())
for _ in range(t):
    sum = 0
    n = int(input())
    z = list(map(int, input())
    z.sort()
    for i in range(0,2*n,2):
        sum += z(i)
    print(sum)