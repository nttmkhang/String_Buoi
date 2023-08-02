def StrPow(a, b, n):
    sizea = len(a)
    sizeb = len(b)
    if sizea * n != sizeb:
        return False
    temp = ''
    for i in range(0, n):
        temp = temp + a
    if temp == b:
        return True
    return False

def main():
    a = input()
    b = input()
    n = int(input())
    if StrPow(a, b, n):
        print('YES')
    else:
        print('NO')

if __name__ == "__main__":
    main()