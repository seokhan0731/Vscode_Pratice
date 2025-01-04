character={
    "name":"기사",
    "level":12,
    "items":{"sword":"불꽃의 검","armor":"풀플레이트"},
    "skill":["베기","세게 베기","아주 세게 베기"]
}

for key in character:
    if type(character[key])==list:
        for name in character[key]:
            print("{} : {}".format(key,name))
    elif type(character[key])==dict:
        for key_2 in character[key]:
            print("{} : {}".format(key_2,character[key][key_2]))
    else:
        print("{} : {}".format(key,character[key]))