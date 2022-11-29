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

class TNode:
    def __init__(self, data, left, right):
        self.data = data
        self.left = left
        self.right = right

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
def count_node(n):
    if n is None:
        return 0
    else:
        return 1 + count_node(n.left) + count_node(n.right)
def count_leaf(n):
    if n is None:
        return 0
    elif n.left is None and n.right is None:
        return 1
    else:
        return count_leaf(n.left) + count_leaf(n.right)
def calc_height(n):
    if n is None:
        return 0
    hLeft = calc_height(n.left)
    hRight = calc_height(n.right)
    if(hLeft > hRight):
        return hLeft + 1
    else:
        return hRight + 1
"""
d = TNode('D', None, None)
e = TNode('E', None, None)
b = TNode('B', d, e)
f = TNode('F', None, None)
c = TNode('C', f, None)
root = TNode('A', b, c)

print('\n   In-Order : ', end='')
inorder(root)
print('\n  pre-Order : ',end='')
preorder(root)
print('\n Post-Order : ', end='')
postorder(root)
print('\nLevel-Order : ', end='')
levelorder(root)
print()

print(count_node(root))
print(count_leaf(root))
print(calc_height(root))"""

table = [('A', '.-'), ('B', '-...'), ('C', '-.-'), ('D', '-..'),
         ('E', '.'), ('F', '..-.'), ('G', '--.'), ('H', '....')]

def make_morse_tree():
    root = TNode(None, None, None)
    for tp in table:
        code = tp[1]
        node = root
        for c in code:
            if c == '.':
                if node.left == None:
                    node.left = TNode(None, None, None)
                node = node.left
            elif c =='-':
                if node.right == None:
                    node.right = TNode(None, None, None)
                node = node.right
        node.data = tp[0]
    return root
def decode(root, code):
    node = root
    for c in code:
        if c == '.': node = node.left
        elif c == '-': node = node.right
    return node.data
def encode(ch):
    idx = ord(ch)-ord('A')
    return table[idx][1]

morseCodeTree = make_morse_tree()
str = input("문자 입력")
mlist = []
for ch in str:
    code = encode(ch)
    mlist.append(code)
print("Morse Code: ", mlist)
print("Decoding : ", end='')
for code in mlist:
    ch = decode(morseCodeTree, code)
    print(ch, end='')
print()

