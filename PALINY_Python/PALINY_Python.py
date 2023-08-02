def Process():
    s = input()
    n = len(s)
    ln = 0
    for i in range(n):
        left = right = i
        while left >= 0 and right < n and s[left] == s[right]:
            current = right - left + 1
            ln = max (ln, current)
            left -= 1
            right += 1

        left = i
        right = i + 1
        while left >= 0 and right < n and s[left] == s[right]:
            current = right - left + 1
            ln = max(ln, current)
            left -= 1
            right += 1

    return ln

def main():
    print(Process())

if __name__ == "__main__":
    main()