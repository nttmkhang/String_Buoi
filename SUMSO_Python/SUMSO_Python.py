def Process(s):
    sum = 0
    temp = ""
    for c in s:
        if c.isdigit():
            temp += c
        else:
            if temp:
                sum += int(temp)
                temp = ""
    
    if temp:
        sum += int(temp)
    return str(sum)

def main():
    s = input()
    print(Process(s))

if __name__ == "__main__":
    main()