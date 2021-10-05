from typing import List


A=int(input())
B=input()
list2=B.split()
list1=[]
for i in list2:
    list1.append(int(i))
list1.sort(reverse=True)
print(list1)
print(list1[0]+list1[1])
