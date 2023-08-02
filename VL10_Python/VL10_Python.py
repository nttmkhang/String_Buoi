def DemChuSo(s):
    if s[0] == '-':
        return len(s) - 1
    return len(s)

def main():
    n = input()
    print(DemChuSo(n))

if __name__ == "__main__":
    main()

