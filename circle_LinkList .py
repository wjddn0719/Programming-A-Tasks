class Node:
    def __init__(self, data, next=None):
        self.data = data
        self.next = next

class CircularLinkedList:
    def __init__(self):
        self.head = None
        self.size = 0

    def insert(self, index, data):
        if self.head is None:
            new_node = Node(data)
            new_node.next = new_node
            self.head = new_node
            self.size += 1
            return

        if index < 0 or index > self.size:
            raise IndexError('Index out of range')

        if index == 0:
            new_node = Node(data, self.head)
            last = self.head
            while last.next != self.head:
                last = last.next
            last.next = new_node
            self.head = new_node
            self.size += 1
            return
        node = self.head
        temp = 0
        while temp < index - 1:
            node = node.next
            temp += 1
        new_node = Node(data, node.next)
        node.next = new_node
        self.size += 1

    def append(self, data):
        self.insert(self.size, data) 

    def delete(self, index):
        if self.head is None:
            raise IndexError('List is empty')
        if index < 0 or index >= self.size:
            raise IndexError('Index out of range')

        if self.size == 1 and index == 0:
            self.head = None
            self.size = 0
            return

        if index == 0:
            last = self.head
            while last.next != self.head:
                last = last.next
            self.head = self.head.next
            last.next = self.head
            self.size -= 1
            return

        node = self.head
        temp = 0
        while temp < index - 1:
            node = node.next
            temp += 1
        node.next = node.next.next
        self.size -= 1

    def pop(self):
        self.delete(self.size - 1)

    def popleft(self):
        self.delete(0)

    def print(self):
        if self.head is None:
            print("None")
            return
        node = self.head
        while True:
            print(node.data)
            node = node.next
            if node == self.head:
                break
        print("None")
