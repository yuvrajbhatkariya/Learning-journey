class Node:
    def __init__(self,data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insertAtHead(self,data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def insertAtTail(self,data):
        temp = self.head
        new_node = Node(data)
        while(temp.next != None):
            temp = temp.next
        temp.next = new_node

    def insertAtPosition(self,data,Position):
        temp = self.head
        if Position == 1:
            self.insertAtHead(data)
            return
        count = 1
        while count<Position-1:
            temp = temp.next
            count+=1
        new_node = Node(data)
        new_node.next = temp.next
        temp.next = new_node
            

    def deleteAtPosition(self,Position):

        if Position == 1:
            self.head = self.head.next
            return 
        
        count = 1
        temp = self.head
        while count<Position-1:
            temp = temp.next
            count +=1

        temp.next = temp.next.next
        
    def view(self):
        temp = self.head
        while temp is not None:
            print(temp.data,end=" ")
            temp = temp.next
        print()


ll = LinkedList()
ll.insertAtHead(10)
ll.insertAtHead(20)
ll.insertAtHead(30)
ll.view()

ll.insertAtTail(40)
ll.view()

ll.insertAtPosition(60,3)
ll.insertAtPosition(100,1)
ll.insertAtPosition(100,7)
ll.view()

ll.deleteAtPosition(7)
ll.deleteAtPosition(1)
ll.view()
ll.deleteAtPosition(3)
ll.view()
# print("hello")
