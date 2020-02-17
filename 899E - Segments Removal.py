def graph(L,n):
	D = []
	while (len(L))>0:
		nbre = 1
		if len(L) == 1:
			D.append([L[0],1])
			break
		while L[0] == L[1]:
			L.remove(L[0])
			nbre += 1
			#print(L)
			if len(L) == 1:
				#print("breaking")
				break
		#print("appending ",L[0],nbre)
		D.append([L[0],nbre])
		L.remove(L[0])
		#print(L)
	return(D)

def Max(D):
	d = 0
	pos = 0
	#print(D,len(D))
	for i in range(len(D)):
		if D[i][1]>d:
			d = D[i][1]
			pos = i
	return pos

def combine(D,pos):
	#print(D,pos)
	if pos>0:
		if D[pos-1][0] == D[pos][0]:
			D[pos-1][1] += D[pos][1]
			D.remove(D[pos])
			#print("comb",D)
	return D


def main():
	D = []
	n = int(input())
	L = list(map(int,input().split()))
	D = graph(L,n)
	#print("D=",D)
	pos = 0
	result = 0
	m = len(D)
	if len(D) == 1:
		result += 1
		print(result)
		exit()
	while m > 1:
		#print("x")
		pos = Max(D)
		#print(pos)
		D.remove(D[pos])
		m -= 1
		result +=1
		if len(D) == 1:
			result += 1
			print(result)
			exit()
		if len(D) == 0:
			print(result)
			exit()
		if pos != len(D):
			D = combine(D,pos)
	
	print(result)
	exit()


if __name__ == '__main__':
    main()
