
def Process(a):
    a = list(a)
    a[5] = ' '
    a[13] = ' '
    return ''.join(a)

if __name__ == "__main__":
    a = input()
    print(Process(a))