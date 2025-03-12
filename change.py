money=input("교환할 돈은 얼마 ? ")
money=int(money)
dic_money={500:0,100:0,50:0,10:0}

if money>=500:
        dic_money[500]=money//500
        money-=dic_money[500]*500
if money>=100:
        dic_money[100]=money//100
        money-=dic_money[100]*100
if money>=50:
        dic_money[50]=money//50
        money-=dic_money[50]*50
if money>=10:
        dic_money[10]=money//10
        money-=dic_money[10]*10

non_change=money

print("500원짜리 ==> {}개".format(dic_money[500]))
print("100원짜리 ==> {}개".format(dic_money[100]))
print("50원짜리 ==> {}개".format(dic_money[50]))
print("10원짜리 ==> {}개".format(dic_money[10]))
print("바꾸지 못한 잔돈 ==> {}원".format(non_change))