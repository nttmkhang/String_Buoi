def DieuChinh(a):
    i = 0
    n = len(a)
    while i < n and a[i] == '0':
        i += 1
    if i == n:
        return "0"
    temp = ""
    for j in range(i, n):
        temp += a[j]
    return temp

def SoSanh(a, b):
    anew = DieuChinh(a)
    bnew = DieuChinh(b)
    sizea = len(anew)
    sizeb = len(bnew)
    if sizea != sizeb:
        if sizea > sizeb:
            return anew
        if sizea < sizeb:
            return bnew
    lc = anew
    for i in range(sizea):
        if anew[i] != bnew[i]:
            if anew[i] > bnew[i]:
                lc = anew
            elif anew[i] < bnew[i]:
                lc = bnew
            break
    return lc

def process(s):
    max_val = ""
    n = len(s)
    i = 0
    while i < n:
        if s[i].isdigit():
            temp = ""
            while i < n and s[i].isdigit():
                temp += s[i]
                i += 1
            if len(max_val) == 0:
                max_val = DieuChinh(temp)
            else:
                max_val = SoSanh(max_val, temp)
        i += 1
    return max_val
def main():
    s = input()
    print(process(s))

if __name__ == "__main__":
    main()