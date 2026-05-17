public class Implementationll {
    

    public static class Node {
        int data;
        Node next;


        Node(int data) {
            this.data = data;
        }
    }

    // LinkedList class 
    public static class LinkedList {
        Node head = null;
        Node tail = null;


        // intert at the end of linked list
        void insertAtEnd(int data) {
            Node temp = new Node(data);

            if(head == null) {
                head = temp;
                tail = temp;
            } else {
                tail.next = temp;
                tail = temp;
            }
        }


        // Displaying the linked list
        void display() {
            Node temp = head;
            while(temp != null) {
                System.out.print(temp.data + " -> ");
                temp = temp.next;
            }
            System.out.print("null");
        }
    }

    
    
    public static void main(String[] args) {

        LinkedList list = new LinkedList();
        list.insertAtEnd(5);
        list.insertAtEnd(6);
        list.insertAtEnd(8);
        list.insertAtEnd(10);
        list.insertAtEnd(15);

        // print the LinkedList
        list.display();

    }
}
