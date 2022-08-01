count, mood = map(int, input().split())

gg, gb, bg, bb = map(float, input().split())

if mood == 0:
    gpercent = gg
    bpercent = gb
else:
    gpercent = bg
    bpercent = bb

# gpercent 의 값에 재현이의 기분이 좋은 날일 확률을 계산하여 업데이트해주었고 bpercent 의 값에 재현이의 기분이 싫은 날일 확률을 계산하여 업데이트

for i in range (count - 1):
    g = gpercent
    b = bpercent

    gpercent = (g * gg) + (b * bg)
    bpercent = (g * gb) + (b * bb)
# Line 5 ~ Line 10 까지 처음 재현이의 기분에 따라 값을 gpercent 값과 bpercent 값을 설정 했기 때문에 Line 14 의 반복문은 전체 N 값에서 -1 한 만큼으로 범위를 설정
    
print(round(gpercent * 1000))
print(round(bpercent * 1000))

