def DaoNguocSo(a):
    size = len(a);
    while(a[size - 1] == '0'):
        size = size - 1
    s = ''
    for i in range (0, size):
        if a[size - 1 - i] != '-':
            s = s + a[size - 1 - i]
    return s

def main():
    s = input()
    print(DaoNguocSo(s))

if __name__ == "__main__":
    main()