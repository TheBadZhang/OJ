def deal(a):
	la = list(a.replace('^','**').replace(' ','').replace('()','').replace('/','//'))

	cnt = 0
	r = []
	for i in range(len(la)):
		if la[i] == '(':   cnt+=1
		elif la[i] == ')':
			if cnt == 0:    r.append(i)
			else:   cnt-=1
	for i in r: la.pop(i)  # 剔除不合法的右括号

	n = len(la)
	cnt = 0
	l = []
	for i in range(n):
		if la[n - 1 - i] == ')':  cnt+=1
		elif la[n - 1 - i] == '(':
			if cnt == 0:  l.append(n - 1 - i)
			else:   cnt-=1
	for i in l: la.pop(i)  # 剔除不合法的左括号

	return ''.join(la) # 拼接字符串

print(eval(deal(input())))
