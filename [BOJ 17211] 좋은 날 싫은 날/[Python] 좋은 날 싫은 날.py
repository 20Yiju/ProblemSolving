count, mood = map(int, input().split())

gg, gb, bg, bb = map(float, input().split())

if mood == 0:
    gpercent = gg
    bpercent = gb
else:
    gpercent = bg
    bpercent = bb


for i in range (count - 1):
    g = gpercent
    b = bpercent

    gpercent = (g * gg) + (b * bg)
    bpercent = (g * gb) + (b * bb)

print(round(gpercent * 1000))
print(round(bpercent * 1000))

