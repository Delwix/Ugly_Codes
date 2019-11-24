#5/10 accepted
//https://www.hackerearth.com/fr/practice/algorithms/searching/binary-search/practice-problems/algorithm/student-arrangement-6/

B=list(map(int,input().split()))
n=B[0]
m=B[1]
k=B[2]
A= list(map(int,input().split()))
R=m*[k]
c=0
for i in range(n):
    R[int(A[i])-1] -= 1
for i in range(len(R)):
    if R[i]<0:
        c=c+abs(R[i])
        if i==len(R)-1:
        	R[0] += -1
        else:
        	R[i+1] += -1
print(c)

