def countsss(area):
    count = 0
    for i in range(1, int(area**0.5) + 1):
        if area % i == 0:
            j = area // i
            if i <= j:
                count += 1
    return count
A = int(input().strip())
print(countsss(A))
