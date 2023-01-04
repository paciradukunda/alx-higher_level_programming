#!/usr/bin/python3
for i in range(0,10):
    for y in range(0,10):
        if i == y or i > y:
            continue
        if i == 8 and y == 9:
            print(f"{i}{y}")
        else:
            print(f"{i}{y}",end=", ")
    
    