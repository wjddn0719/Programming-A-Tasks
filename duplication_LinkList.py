class Node:
    def __init__(self, data, next=None, before = None):
        self.data = data
        self.next = next
        self.before = before
class SinglyLinkedList:
    def __init__(self):
        self.head = None
        self.size = 0

    def insert(self, index, data):
        if self.head is None:
            self.head = Node(data)
            self.size += 1
            return

        if index < 0 or index > self.size:
            raise IndexError('Index out of range')

        if index == 0:
            self.head = Node(data, self.head, None)
            if self.head.next:
                self.head.next.before = self.head
            self.size += 1
            return

        node = self.head
        temp = 0
        while temp < index - 1:
            temp += 1
            node = node.next
        node.next = Node(data, node.next, node)
        self.size += 1

    def append(self, data):
        self.size += 1

        if self.head is None:
            self.head = Node(data)
            return
        node = self.head
        while node.next:
            node = node.next
        node.next = Node(data,None,node)

    def delete(self, index):
        if index < 0 or index >= self.size:
            raise IndexError('Index out of range')

        if index == 0:
            self.head = self.head.next
            if self.head:
                self.head.before = None
            self.size -= 1
            return

        temp = 0
        node = self.head
        while temp < index - 1:
            temp += 1
            node = node.next
        node.next = node.next.next
        if node.next:
            node.next.before = node
        self.size -= 1

    def pop(self):
        if self.head is None:
            raise EmptyException('List is empty')
        else:
            node = self.head
            while node.next.next:
                node = node.next
            node.next = None
            self.size -= 1

    def popleft(self):
        if self.head is None:
            raise EmptyException('List is empty')
        self.head = self.head.next
        if self.head:
            self.head.before = None
        self.size -= 1

    def print(self):
        if self.head is None:
            return
        node = self.head
        while node:
            print(node.data)
            node = node.next
        print("None")