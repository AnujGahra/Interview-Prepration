public class Implementation {

    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
        }
    }

    // class of linked list
    public static class LinkedList {
        Node head = null;
        Node tail = null;
        int size = 0;

        void insertAtEnd(int data) {
            Node temp = new Node(data);
            if (head == null) {
                head = temp;
            } else {
                tail.next = temp;
            }
            tail = temp;
            size++;

        }

        // Display Linked List
        void display() {
            Node temp = head;
            while (temp != null) {
                System.out.print(temp.data + " ");
                temp = temp.next;
            }
            System.out.println();
        }

        // find the length of Linked List
        int length() {
            // Node temp = head;
            // int count = 0;
            // while (temp != null) {
            // count++;
            // temp = temp.next;
            // }
            return size;
            // System.out.println("The size of Linked List: " + count);
        }

        // insert at beggining
        void insertAtHead(int data) {
            Node temp = new Node(data);
            if (head == null) {
                head = tail = temp;
                // insertAtEnd(data);
            } else {
                temp.next = head;
                head = temp;
            }
            size++;
        }

        // insert at given position
        void insertAtIndex(int idx, int data) {
            Node t = new Node(data);
            Node temp = head;
            if (idx == 0) {
                insertAtHead(data);
                return;
            }
            if (idx >= length()) {
                insertAtEnd(data);
                return;
            }
            for (int i = 0; i < idx - 1; i++) {
                temp = temp.next;
            }

            t.next = temp.next;
            temp.next = t;
            size++;

        }

        // getElement method
        int getElement(int idx) {
            Node temp = head;
            int count = 0;
            for (int i = 1; i <= idx; i++) {
                System.out.println(count++);
                temp = temp.next;
            }
            return temp.data;
        }

        // Delete at any index
        void deleteAtIndex(int idx) {
            Node temp = head;
            if (idx == 0) {
                head = head.next;
                size--;
                return;
            }

            for (int i = 1; i <= idx; i++) {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            tail = temp;
            size--;

        }

        // Delete at first
        void deleteAtHead() {
            if (head == null)
                return;
            else {
                head = head.next;
                size--;
            }
        }


        // Delete at end
        

    }

    public static void main(String[] args) {
        LinkedList ll = new LinkedList();
        ll.insertAtEnd(4);
        ll.insertAtEnd(5);
        ll.display();
        ll.length();

        ll.insertAtHead(8);
        ll.display();
        ll.length();

        ll.insertAtIndex(2, 10);
        ll.display();
        ll.insertAtIndex(3, 87);
        ll.display();
        ll.length();
        ll.insertAtIndex(5, 100);
        ll.display();
        ll.length();
        ll.insertAtIndex(9, 13);
        ll.display();
        ll.length();
        ll.insertAtIndex(0, 11);
        ll.display();
        System.out.println(ll.length());

        System.out.println(ll.getElement(3));

        ll.deleteAtIndex(3);
        ll.display();
        ll.deleteAtHead();
        ll.display();
        ll.deleteAtHead();
        ll.display();

    }
}
