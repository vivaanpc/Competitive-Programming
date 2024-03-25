x = int(input()) + 1
while(len(set(str(x))))<4:
    x = x + 1
print(x)