#노드 클래스
class Node:
    def __init__(self, elem, link=None):
        self.data = elem
        self.link = link
#순차 탐색
def sequential_search(A, key, low, high):
    for i in range(low, high+1):
        if A[i].key == key:
            return i
    return None
#이진탐색 순환구조
def binary_search(A, key, low, high):
    if (low<=high):
        middle = (low + high)//2
        if key == A[middle].key :
            return middle
        elif (key<A[middle].key):
            return binary_search(A, key, low, middle-1)
        else:
            return binary_search(A, key, middle+1, high)
    return None
#이진탐색 반복구조
def binary_search_iter(A,key,low,high):
    while(low <= high):
        middle = (low+high)//2
        if key == A[middle].key:
            return middle
        elif(key>A[middle].key):
            low = middle + 1
        else:
            high = middle -1
    return None
#보간탐색
def interpolation_search(A, key,low,high):
    while (low <= high):
        middle = int(low + (high-low) * (key-A[low].key) / (A[high].key-A[low].key))
        if key == A[middle].key:
            return middle
        elif (key > A[middle].key):
            low = middle + 1
        else:
            high = middle - 1
    return None

#맵의 응용 나의 단어장
class Entry:
    def __init__(self, key, value):
        self.key = key
        self.value = value
    def __str__(self):
        return str("%s:%s"%(self.key, self.value))
#리스트를 이용한 순차탐색 맵
class SequentialMap:
    def __init__(self):
        self.table = []
    def size(self): return len(self.table)
    def display(self, msg):
        print(msg)
        for entry in self.table :
            print(" ", entry)
    def insert(self, key, value):
        self.table.append(Entry(key, value))
    def search(self, key):
        pos = sequential_search(self.table, key, 0, self.size()-1)
        #이진 탐색을 이용하면
        #pos=binay_search(self.table, key, 0, self.size()-1)
        if pos is not None : return self.table[pos]
        else : return None
    def delete(self, key):
        for i in range(self.size()):
            if self.table[i].key == key :
                self.table.pop(i)
                return
#체이닝을 이용한 해시 맵
class HashChaiMap:
    def __init__(self, M):
        self.table = [None]*M
        self.M = M
    def hashFn(self, key): #사용할 해시함수
        sum = 0
        for c in key:
            sum += ord(c)
        return sum%self.M
    def insert(self, key, value):
        idx = self.hashFn(key)
        #self.table[idx] = Node(Entry(key, value), self.table[idx])
        entry = Entry(key, value)
        node = Node(entry)
        node.link = self.table[idx]
        self.table[idx] = node
    def search(self, key):
        idx = self.hashFn(key)
        node = self.table[idx]
        while node is not None:
            if node.data.key == key:
                return node.data
            node = node.link
        return None
    def delete(self, key):
        idx = self.hashFn(key)
        node = self.table[idx]
        before = None
        while node is not None:
            if node.data.key == key:
                if before == None:
                    self.table[idx] = node.link
                else:
                    before.link = node.link
                return
            before = node
            node = node.link
    def display(self, msg):
        print(msg)
        for i in range(len(self.table)):
            node = self.table[i]
            if node is not None:
                print("[%2d] -> "%i, end='')
                while node is not None:
                    print(node.data, end=' -> ')
                    node = node.link
                print()

#파이썬의 딕셔너리를 이용한 구현
d = {}
d['data']='자료'
d['structure']='구조'
d['sequential search']='선형탐색'
print("나의 단어장 : ")
print(d)
#흠
map = SequentialMap()
map.insert('data', '자료')
map.insert('structure', '구조')
map.insert('sequential search','선형 탐색')
map.insert('game', '게임')
map.insert('binary search', '이진 탐색')
map.display("나의 단어장 : ")

print("탐색:game ->",map.search('game'))
print("탐색:over ->",map.search('over'))
print("탐색:data ->",map.search('data'))

map.delete('game')
map.display("나의 단어장 : ")