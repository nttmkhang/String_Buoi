def DemTu(s):
    words = []
    n = len(s)
    word = ''
    for i in range(0, n):
        if s[i] == '.':
            if word != '':
                words.append(word)
                word = ''
        else:
            word += s[i]
    if word != '':
        words.append(word)
    return len(words)

def main():
    s = input()
    print(DemTu(s))

if __name__ == "__main__":
    main()