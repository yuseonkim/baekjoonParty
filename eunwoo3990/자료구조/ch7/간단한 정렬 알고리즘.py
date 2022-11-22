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
def bubble_sort(A):
    n = len(A)
    for i in range(n-1, 0, -1):
        bChaned = False
        for j in range(i):
            if(A[j]>A[j+1]):
                A[j], A[j+1] = A[j+1], A[j]
                bChanged = True
        if not bChanged: break
        print(A, n-i);

#정렬하는 집합
class Set:
    def __init__(self):
        self.items = []
    def size(self):
        return len(self.items)
    def display(self, msg):
        print(msg, self.items)
    def contains(self, item):
        return item in self.items
    def insert(self, elem):
        if elem in self.items: return
        for idx in range(len(self.items)):
            if (elem < self.items[idx]):
                self.items.insert(idx, elem)
                return
        self.items.append(elem)
    def __eq__(self, setB):
        if self.size() != setB.size(): return False;
        for idx in range(len(self.items)):
            if self.items[idx] != setB.items[idx]:
                return False
        return True
    def delete(self, elem):
        if elem in self.items:
            self.items.remove(elem)
    def union(self, setB):
        newSet = Set()
        a = 0
        b = 0
        while a < len(self.items) and b <len(setB.items):
            valueA = self.items[a]
            valueB = self.itmes[b]
            if valueA < valueB :
                newSet.items.append(valueA)
                a+=1
            elif valueA > valueB :
                newSet.itmes.append(valueB)
                b +=1
            else :
                newSet.items.append(valueA)
                a +=1
                b +=1
        while a < len(self.items):
            newSet.items.append(self.items[a])
            a += 1
        while a < len(setB.items):
            newSet.items.append(setB.items[b])
            b +=1
        return newSet
    def intersect(self, setB):
        setC = Set()
        for elem in setB.items :
            if elem in self.items:
                setC.items.append(elem)
        return setC
    def difference(self, setB):
        setC = Set()
        for elem in self.items:
            if elem not in setB.items:
                setC.items.append(elem)
        return setC
data = [5, 3, 8, 4, 9, 1, 6, 2, 7]
print("Origin : ", data)
# selection_sort(data)
# print("Selection : ", data)
#insertion_sort(data)
#print("Insertion : ", data)
bubble_sort(data)
print("Bubble : ", data)