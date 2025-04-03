import random
def assign(num):
    count=0
    while True:
            i=random.randrange(1,46)
            if i not in num:
                 num.append(i)
                 count+=1
            if count==6:
                 break
            



num=[]
print("** 로또 추첨을 시작합니다. **\n")
print("추첨된 로또 번호 ==> ",end="")
assign(num)

for i in range(0,6):
    print(num[i],end=" ")
