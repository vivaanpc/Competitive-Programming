def small(x):
    if len(x)==1:
        return "YES"
    for i in range(1, len(x)):
        if x[i] - x[i-1] > 1:
            return "NO"
    return "YES"
def solve():
    x = int(input())
    for _ in range(x):
        n = int(input())
        x = list(map(int, input().split()))
        x.sort()
        print(small(x))
solve()