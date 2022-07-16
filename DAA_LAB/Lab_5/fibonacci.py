n = int(input("Enter No. of terms"))
a = []
a.append(0)
a.append(1)
for i in range(1,n+1):
    a.append(a[i]+a[i-1])
print(a)    