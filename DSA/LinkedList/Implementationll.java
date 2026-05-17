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

        // insert at the beginning of linked list
        void insertAtBeginning(int data) {
            Node temp = new Node(data);
            if(head == null) {
                head = temp;
                tail = temp;
            } else {
                temp.next = head;
                head = temp;
            }


        }

        // insert at given Position

        void insertAtPosition(int data, int pos) {

            Node newNode = new Node(data);
            Node temp = head;

            if(pos == size() + 1) {
                insertAtEnd(data);
                return;
            } else if(pos == 0) {
                insertAtBeginning(data);
                return;
            } else if(pos < 0 || pos > size()) {
                System.out.println("Invalid position");
                return;
            } else {
                for(int i = 0; i < pos - 1; i++) {
                    temp = temp.next;
                }
                newNode.next = temp.next;
                temp.next = newNode;
            }
        }


        // getElement method
        int getElement(int pos) {
            Node temp = head;

            for(int i = 1; i<=pos; i++){
                temp = temp.next;
            }
            return temp.data;
        }


        // 


        // Displaying the linked list
        void display() {
            Node temp = head;
            while(temp != null) {
                System.out.print(temp.data + " -> ");
                temp = temp.next;
            }
            System.out.print("null");
        }





        // find the size of linked list
        int size() {
            int count = 0;
            Node temp = head;
            while(temp != null) {
                count++;
                temp = temp.next;
            }
            return count;
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

        list.insertAtBeginning(3);
        list.insertAtBeginning(2);
        System.out.println();
        list.display();
        System.out.println();
        System.out.println("Size of linked list: " + list.size());

        list.insertAtPosition(7, 3);
        System.out.println();
        list.display();

        System.out.println();
        System.out.println("Element at position 3: " + list.getElement(3));
    }
}
