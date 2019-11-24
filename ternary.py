#accepted
#https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2126

n=int(input())
while n>=0:
	r=n%3
	q=n//3
	A=[]
	A.append(r)
	while q != 0:
		r=q%3
		A.append(r)
		q=q//3
		
	l=len(A)
	for i in range(l):
		print(A[l-i-1],end = '')
	print(end = '\n')
	n=int(input())

