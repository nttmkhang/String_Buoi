def ktTonTai(s):
    stack = []
    for c in s:
        if c == '(':
            stack.append(c)
        elif c == '*':
            if stack:
                if stack[-1] == '*' or stack[-1] == '(':
                    stack.pop()
            else:
                stack.append(c)
        elif c == ')':
            if stack:
                if stack[-1] == '(' or stack[-1] == '*':
                    stack.pop()
            else:
                stack.append(c)
    if not stack:
        return  "YES"
    return "NO"

def Process():
    t = int(input())

    result = []
    for i in range(t):
        s = input()
        result.append(ktTonTai(s))

    return '\n'.join(result)

def main():
    print(Process())

if __name__ == "__main__":
    main()