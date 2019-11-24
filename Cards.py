#Accepted
#https://codeforces.com/problemset/problem/1220/A


n=int(input())
s=str(input())
n=0
r=0
for i in s:
    if i == "r":
        r += 1
    if i == "n":
        n += 1
print(n*"1 "+r*"0 ")
