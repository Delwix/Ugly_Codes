#https://codeforces.com/contest/1243/problem/A

k=int(input())
for i in range(k):
	M=[]
	h=0
	n=int(input())
	L=list(map(int,input().split()))
	L.sort(reverse = True)
	m=L[0]
	
	for i in range(m):
		c=0
		a=m-i
		j=0
		while L[j]>=a:
			c += 1
			if c == a:
				print(c)
				h=1
				break
			j += 1
		if h==1:
			break
