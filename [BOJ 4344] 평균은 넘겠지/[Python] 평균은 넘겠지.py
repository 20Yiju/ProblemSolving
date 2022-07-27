testcase = int(input())

for i in range(testcase):
    scorelist = list(map(int, input().split()))
    average = sum(scorelist[1:]) / scorelist[0]
    num = 0
    for j in scorelist[1:]:
        if j > average:
            num += 1
    rate = (num/scorelist[0]) * 100
    print(f"{rate:.3f}%")



