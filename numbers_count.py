numbers=[1,2,3,4,5,6,7,8,9,3,2,1,5,7,9,1,4,6,3,7,8,3]
counter={}

for number in numbers:
    if number in counter:
        counter[number]+=1
    else:
        counter[number]=1

print(counter)