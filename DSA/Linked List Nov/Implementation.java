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

        void insertAtEnd(int data) {
            Node temp = new Node(data);
            if (head == null) {
                head = temp;
            } else {
                tail.next = temp;
            }
            tail = temp;

        }

        // Display Linked List
        // commit message: a
        void display() {
            Node temp = head;
            while (temp != null) {
                System.out.print(temp.data + " ");
                temp = temp.next;
            }
            System.out.println();
        }

        // find the length of Linked List
        void length() {
            Node temp = head;
            int count = 0;
            while (temp != null) {
                count++;
                temp = temp.next;
            }
            System.out.println("The size of Linked List: " + count);
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
        }

        // insert at given position
        // commit message: add
        void insertAtIndex(int idx, int data) {
            Node t = new Node(data);
            Node temp = head;
            for (int i = 0; i < idx - 1; i++) {
                temp = temp.next;
            }
            t.next = temp.next;
            temp.next = t;

        }
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

    }
}
