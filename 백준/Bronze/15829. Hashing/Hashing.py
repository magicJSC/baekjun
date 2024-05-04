a = int(input())
s = str(input())
sum =0
num =0
while num < a:
    sum += (ord(s[num]) - 96) * (31 ** num);
    num += 1
print(sum)