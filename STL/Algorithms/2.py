C=input()
count=0
for i in range(0,len(C)):
    if(C[i]=='a' or C[i]=='e' or C[i]=='i' or C[i]=='o' or C[i]=='u'):
        count+=1
print(count)