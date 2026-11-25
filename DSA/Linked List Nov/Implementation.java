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
            if(head == null){
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
            while(temp != null) {
                System.out.print(temp.data + " ");
                temp = temp.next;
            }
        }
    }


    public static void main(String[] args) {
        LinkedList ll = new LinkedList();
        ll.insertAtEnd(4);
        ll.insertAtEnd(5);
        ll.display();
        
    }
}
