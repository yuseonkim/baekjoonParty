# 선택정렬
def selection_sort(A):
    n = len(A)
    for i in range(n - 1):
        least = i;
        for j in range(i + 1, n):
            if (A[j] < A[least]):
                least = j
        A[i], A[least] = A[least], A[i]
        printStep(A, i + 1)


def printStep(arr, val):
    print("  Step %2d = " % val, end='')
    print(arr)


# 삽입정렬
def insertion_sort(A):
    n = len(A)
    for i in range(1, n):
        key = A[i]
        j = i - 1
        while j >= 0 and A[j] > key:
            A[j + 1] = A[j]
            j -= 1
        A[j + 1] = key
        printStep(A, i)


data = [5, 3, 8, 4, 9, 1, 6, 2, 7]
print("Origin : ", data)
# selection_sort(data)
# print("Selection : ", data)
insertion_sort(data)
print("Insertion : ", data)
