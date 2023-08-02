def Process(s):

    TanSuat = {}

    for c in s:
        if c.isalpha():
            TanSuat[c] = TanSuat.get(c, 0) + 1

    temp = sorted(TanSuat.items())

    for c, ts in temp:
        print(f"{c}:{ts}")

def main():
    s = input()
    Process(s)

if __name__ == "__main__":
    main()