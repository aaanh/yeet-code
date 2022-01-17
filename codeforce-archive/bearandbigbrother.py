bear, brother = input().split()
bear = int(bear)
brother = int(brother)
i = 1

while bear <= brother:
    bear = bear*3
    brother = brother*2
    if bear <= brother:
        i = i + 1
    else:
        break

print(i)