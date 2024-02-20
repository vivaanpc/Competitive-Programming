def check(matrix):
    row_count = []
    for n in matrix:
        row_count.append(sum(n))
    row_count = set(row_count)
    if (len(row_count) == 2 or len(row_count) == 1):
        return "SQUARE"
    return "TRIANGLE"


x = int(input())
while x > 0:
    x -= 1
    n = int(input())
    matrix = []
    for i in range(n):
        row = list(map(int, input().split()))
        matrix.append(row)
    print(check(matrix))