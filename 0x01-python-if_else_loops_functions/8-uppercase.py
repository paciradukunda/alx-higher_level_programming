#!/usr/bin/python3
def uppercase(str):
    st =""
    for i in str:
        if i == " ":
            st += i
        else:
            if ord(i) in range(65,95):
                st += i
            else:
                st += chr(ord(i)-32)
    print(st)
