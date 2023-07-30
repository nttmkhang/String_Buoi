from sys import stdin

def ktDauCuoi(a):
    size = len(a)
    if(a[0] == a[size - 1]):
        return True
    return False

def main():
    for s in stdin:
        a = str(s.strip()) #xoa ky tu newline cua stdin
        if ktDauCuoi(a) == True:
            print('YES')
        else:
            print('NO')

if __name__ == "__main__":
    main()