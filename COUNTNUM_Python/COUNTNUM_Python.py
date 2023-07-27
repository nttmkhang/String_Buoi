def CountNumber(s):
    dem = 0
    n = len(s)
    for i in range(n - 1):
        if s[i].isdigit() and not s[i + 1].isdigit():
            dem += 1
    if s[-1].isdigit():
        dem += 1
    return dem

s = input()
print(CountNumber(s))