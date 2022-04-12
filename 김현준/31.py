a=input()
b=0
while True:
    for i in range(len(a)):
        if a[i]=='U':
            b+=1
            for j in range(i+1,len(a)):
                if a[j]=='C':
                    b+=1
                    for k in range(j+1,len(a)):
                        if a[k]=='P':
                            b+=1
                            for m in range(k+1,len(a)):
                                if a[m]=='C':
                                    b+=1
                                    if b==4:
                                        print("I love UCPC")
                                        break