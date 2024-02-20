n = int(input())
t = list(map(int,(input().split())))
count = 0
for i in range(n):
    if (t[i] == 0):
        count += 1
if (count == len(t)):
    print("EASY")
else:
    print("HARD")