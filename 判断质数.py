n=int(input("输入一个数字："))
for i in range(2,n):
	if n%i == 0:
		print("该数不是质数")
		break
else:
	print("该数是质数")