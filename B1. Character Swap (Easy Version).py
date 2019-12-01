#https://codeforces.com/contest/1243/problem/B1
k=int(input())
for i in range(k):
	n=int(input())
	s=input()
	t=input()
	h=0
	j=0
	L=[]
	M=[]
	d=0
	for i in range(len(s)):
		if s[i]!= t[i]:
			d += 1
			L.append(s[i])
			M.append(t[i]) 
			j +=1
		if d==3:
			h=1
			print("No")
			break	
		if h==1 :
			break
	if d==0 or d==1 or L[0] != L[1] or M[0] != M[1]:
		if h!=1:
			print("No")
	elif h!=1:
		print("Yes")



