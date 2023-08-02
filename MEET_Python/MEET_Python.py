def ktThuoc(s, c):
    return c in s

def Process():
    n, c = input().split()
    n = int(n)
    
    temp = []
    for i in range(n):
        s = input().strip()
        if not (ktThuoc(s, c)):
            temp.append(s)
    
    return '\n'.join(temp)

def main():
    print(Process())

if __name__ == "__main__":
    main()