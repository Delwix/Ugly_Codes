//Accepted
//https://codeforces.com/problemset/problem/71/A


n=int(input())
s=n*[0]
for i in range(n):
	s[i]=str(input())
for i in range(n):
	if len(s[i])>10:
		print(str(s[i][0])+str((len(s[i])-2))+str(s[i][-1]))
	else :
		print(s[i])
