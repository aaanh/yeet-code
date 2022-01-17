n, m = input().split()
n = int(n)
m = int(m)
odd = 1

for i in range(n//2):
    print("#"*m)
    odd = odd + 1
    if odd%2 == 0:
        print("."*(m-1)+"#")
    else: 
        print("#"+"."*(m-1))
print("#"*m)
