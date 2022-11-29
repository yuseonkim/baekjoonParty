MAX_QSIZE = 15
class CircularQueue:
    def __init__(self):
        self.front = 0
        self.rear = 0
        self.items = [None]*MAX_QSIZE

    def isEmpty(self): return self.front == self.rear
    def isFull(self): return self.front ==(self.rear +1)%MAX_QSIZE
    def enqueue(self, item):
        if not self.isFull():
            self.rear = (self.rear+1)%MAX_QSIZE
            self.items[self.rear] = item
    def dequeue(self):
        if not self.isEmpty():
            self.front = (self.front+1)%MAX_QSIZE
            return self.items[self.front]

class BSTNode:
    def __init__(self, key, value):
        self.key = key
        self.value = value
        self.left = None
        self.right = None
def preorder(n):
    if n is not None:
        print(n.data, end=' ')
        preorder(n.left)
        preorder(n.right)
def inorder(n):
    if n is not None:
        inorder(n.left)
        print(n.data, end=' ')
        inorder(n.right)
def postorder(n):
    if n is not None:
        postorder(n.left)
        postorder(n.right)
        print(n.data, end=' ')
def levelorder(root):
    queue = CircularQueue()
    queue.enqueue(root)
    while not queue.isEmpty():
        n = queue.dequeue()
        if n is not None:
            print(n.data, end = ' ')
            queue.enqueue(n.left)
            queue.enqueue(n.right)
def calc_height(n):
    if n is None:
        return 0
    hLeft = calc_height(n.left)
    hRight = calc_height(n.right)
    if(hLeft > hRight):
        return hLeft + 1
    else:
        return hRight + 1
def search_bst(n, key) : #키값을 이용하는 이진탐색트리 순환구조
    if n==None:
        return None
    elif key == n.key:
        return key
    elif key < n.key:
        return search_bst(n.left, key)
    else:
        return search_bst(n.right, key)
def search_bst_iter(n, key) : #키값을 이용하는 이진탐색트리 반복구조
    while n != None:
        if key == n.key:
            return n
        elif key == n.key:
            n = n.left
        else:
            n = n.right
    return None
def search_value_bst(n, value) :#value를 이용하는 이진탐색트리 순환구조
    if n == None: return None
    elif value == n.value:
        return n
    res = search_value_bst(n.left, value)
    if res is not None:
        return res
    else:
        return search_value_bst(n.right, value)
def search_max_bst(n):
    while n != None and n.right != None:
        n = n.right
    return n
def search_min_bst(n):
    while n != None and n.left != None:
        n = n.left
    return n
def insert_bst(r, n):
    if n.key < r.key:
        if r.left is None:
            r.left = n
            return True
        else:
            return insert_bst(r.left, n)
    elif n.key > r.key:
        if r.right is None:
            r.right = n
            return True
        else :
            return insert_bst(r.right, n)
    else:
        return False

def delete_bst_case1(parent, node, root):
    if parent is None:
        root = None
    else:
        if parent.left == node:
            parent.left = None
        else:
            parent.right = None
    return root
def delete_bst_case2(parent, node, root):
    if node.left is not None:
        child = node.left
    else:
        child = node.right

    if node == root:
        root = child
    else:
         if node is parent.left:
             parent.left = child
         else:
             parent.right = child
    return root
def delete_bst_case3(parent, node, root):
    succp = node #후계자
    succ = node.right
    while(succ.left != None): #후계자 계속 찾음
        succp = succ
        succ = succ.left

    if (succp.left == succ): #후계자가 왼쪽 자식이면 오른쪽 자식을 연결
        succp.left = succ.right
    else:#후계자가 오른쪽 자식이면 왼쪽 자식을 연결
        succp.right = succ.right
    node.key = succ.key
    node.value = succ.value
    node = succ;
    return root

def delete_bst(root, key):
    if root==None: return None

    parent = None
    node = root
    while node != None and node.key != key:
        parent = node
        if key < node.key: node = node.left
        else: node = node.right

    if node == None : return None
    if node.left == None and node.right ==None:
        root = delete_bst_case1(parent, node, root)
    elif node.left==None or node.right==None:
        root = delete_bst_case2(parent, node, root)
    else :
        root = delete_bst_case3(parent, node, root)
    return root
def calc_height_diff(parent):
    if parent.left == None and parent.right ==None: return 0
    elif calc_height(parent.left) >= calc_height(parent.right):
        return calc_height(parent.left) - calc_height(parent.right)
    else:
        return calc_height(parent.right) - calc_height(parent.left)

def rotateLL(A):
    B = A.left
    A.left = B.right
    B.right = A
    return B
def rotateRR(A):
    B = A.right
    A.right = B.left
    B.left = A
    return B
def rotateRL(A):
    B = A.right
    A.right = rotateLL(B)
    return rotateRR(A)
def rotateLR(A):
    B = A.left
    A.left =  rotateRR(B)
    return rotateLL(A)
def reBalance(parent):
    hDiff = calc_height_diff(parent)
    if hDiff > 1:
        if calc_height_diff(parent.left)>0:
            parent = rotateLL(parent)
        else:
            parent = rotateLR(parent)
    elif hDiff<1:
        if calc_height_diff(parent.right)<0:
            parent = rotateRR(parent)
        else:
            parent = rotateRL(parent)
    return parent
def insert_avl(parent, node):
    if node.key<parent.key:
        if parent.left != None:
            parent.left = insert_avl(parent.left, node)
        else:
            parent.left = node
    elif node.key > parent.key:
        if parent.right != None:
            parent.right = insert_avl(parent.right, node)
        else:
            parent.right = node
        return reBalance(parent)
    else:
        print("중복된 키 에러")
#이진탐색트리를 이용한 맵
class BSTMap():
    def __init__(self):
        self.root = None
    def isEmpty(self): return self.root ==None
    def clear(self): self.root = None
    def size(self): return count_node(self.root)
    def search(self, key): return search_bst(self.root, key)
    def searchValue(self, key): return search_value_bst(self.root, key)
    def findMax(self): return search_max_bst(self.root)
    def findMin(self): return search_min_bst(self.root)
    def insert(self, key, value=None):
        n = BSTNode(key, value)
        if self.isEmpty() :
            self.root = n
        else:
            insert_bst(self.root, n)
    def delete(self, key):
        self.root=delete_bst(self.root, key)
    def display(self, msg='BSTMap'):
        print(msg, end='')
        #inorder(self.root)
        print()
class AVLMap(BSTMap):
    def __init__(self):
        super().__init__()

    def insert(self, key, value=None):
        n = BSTNode(key, value)
        if self.isEmpty():
            self.root = n
        else:
            self.root = insert_avl(self.root, n)
    def display(self, msg = 'AVLMap :'):
        print(msg, end='')
        levelorder(self.root)
        print()

node = [7,8,9,2,1,5,3,6,4]
map = AVLMap()
for i in node:
    map.insert(i)
    map.display("AVL(%d)"%i)

