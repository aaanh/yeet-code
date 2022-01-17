n = int(input())
k = input().split()
flag = bool

for i in range(len(k)):
    if k[i] == '0':
        flag=True
    else:
        flag=False
        break

if flag == False: 
    print('hard') 
else: 
    print('easy')