def calculate(equation):
    print("{}의 결과는 {}입니다.".format(equation,eval(equation)))

def get_total(first,second):

    total=0
    for i in range(first,second+1):
        total+=i
    print("%d+...+%d는 %d입니다."%(first,second,total))


n=input("1. 입력한 수식 계산  2. 두 수 사이의 합계 : ")
if n=='1':
    equation=input("*** 수식을 입력하세요 : ")
    calculate(equation)

elif n=='2':
    first=input("*** 첫 번째 숫자를 입력하세요 : ")
    second=input("*** 두 번째 숫자를 입력하세요 : ")
    get_total(int(first),int(second))

else:
    print("유효한 숫자를 입력하세요.")



