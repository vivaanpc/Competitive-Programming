def sqORtri(matrix,n):
    for i in range (n):
        for j in range (n):
            if matrix[j][i] == 1:
                if matrix[j][i+1] == 1:
                    return 'SQUARE'
                else:
                    return 'TRIANGLE'
    return 'TRIANGLE'

A = int(input())
while A > 0:
    A -= 1
    n = int(input())
    matrix = []
    for i in range(n):
        single_row = list(map(int, input().split()))
        matrix.append(single_row)
    print(sqORtri(matrix, n))