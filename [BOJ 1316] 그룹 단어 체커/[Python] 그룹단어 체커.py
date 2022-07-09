count = int(input())
total = count

for i in range (count):
    word = input()
    for index in range(len(word) - 1):
        if word[index] == word[index + 1]:
            continue
        elif word[index] != word[index + 1]:
            if word[index] in word[index + 1:]:
                total -= 1
                break
print(total)
