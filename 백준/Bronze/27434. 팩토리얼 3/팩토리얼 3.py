import sys

a = int(input())
result = a;
if(result == 0):
    print(1)
elif(result == 1):
    print(1)
else:
    while(a > 1):
        a -=1
        result = result * a
    print(result)
