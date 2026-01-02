
def FindMax(A):
    n = len(A)
    max_i = 0
    for i in range(1,n):
        if A[i] > A[max_i]:
            max_i = i
    return max_i

A = [13,432,31,3,299]
count = FindMax(A)
print(A[count])