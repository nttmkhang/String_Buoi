def DemNumber(s):
    if (len(s) == 1):
        if s.isdigit():
            return 1
        return 0
    dem = 0
    n = len(s)
    for i in range(n - 1):
        if (s[i].isdigit() and s[i + 1].isalpha()):
            dem += 1

    if s[-1].isdigit():
        dem += 1

    return dem

def Process():
    s = input().strip()
    return str(DemNumber(s))

def main():
    print(Process())
    
if __name__ == "__main__":
    main()