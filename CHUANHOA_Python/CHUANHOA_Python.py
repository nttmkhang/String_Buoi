def Process(s):
    temp = []
    words = s.split()           # Hàm slip dùng để tách các từ trong chuỗi
    temp.append(words[0])       # Hàm append dùng để nối thêm các từ vào danh sách
    for word in words[1:]:
        temp.append(" " + word)
    return ''.join(temp)        # Trả về một chuỗi duy nhất

def main():
    T = int(input())
    for i in range(T):
        s = input()
        print(Process(s))

if __name__ == "__main__":
    main()

