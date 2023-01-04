#!/usr/bin/python3
i = 1
for y in reversed(range(97,123)):
    print("{}".format(chr(y) if i % 2 != 0 else chr(y-32)),end=" ")
    i += 1