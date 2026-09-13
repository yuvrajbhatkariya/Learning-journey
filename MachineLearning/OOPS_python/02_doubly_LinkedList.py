class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insertAtHead(self, data):
        new_node = Node(data)

        new_node.next = self.head

        if self.head is not None:
            self.head.prev = new_node

        self.head = new_node

    def insertAtTail(self, data):
        new_node = Node(data)

        # Empty list
        if self.head is None:
            self.head = new_node
            return

        temp = self.head

        while temp.next is not None:
            temp = temp.next

        temp.next = new_node
        new_node.prev = temp

    def insertAtPosition(self, data, Position):
        # Position 1 means insert at head
        if Position == 1:
            self.insertAtHead(data)
            return

        temp = self.head
        count = 1

        while count < Position - 1:
            temp = temp.next
            count += 1

        new_node = Node(data)

        new_node.next = temp.next
        new_node.prev = temp

        if temp.next is not None:
            temp.next.prev = new_node

        temp.next = new_node

    def deleteAtPosition(self, Position):

        # Delete head
        if Position == 1:
            if self.head is None:
                return

            self.head = self.head.next

            if self.head is not None:
                self.head.prev = None

            return

        count = 1
        temp = self.head

        while count < Position - 1:
            temp = temp.next
            count += 1

        node_to_delete = temp.next

        if node_to_delete is None:
            return

        temp.next = node_to_delete.next

        if node_to_delete.next is not None:
            node_to_delete.next.prev = temp

    def view(self):
        temp = self.head

        while temp is not None:
            print(temp.data, end=" ")
            temp = temp.next

        print()


ll = LinkedList()

ll.insertAtHead(10)
ll.insertAtHead(20)
ll.insertAtHead(30)
ll.view()

ll.insertAtTail(40)
ll.view()

ll.insertAtPosition(60, 3)
ll.insertAtPosition(100, 1)
ll.insertAtPosition(100, 7)
ll.view()

ll.deleteAtPosition(7)
ll.deleteAtPosition(1)
ll.view()

ll.deleteAtPosition(3)
ll.view()