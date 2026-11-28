public class Practice {
    

    public static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
        }
    }


    public  static class LinkedList {
        Node head = null;
        Node tail = null;


        // Display LinkedList
        void display() {
            Node temp = head;
            while (temp != null) {
                System.out.print(temp.data + " ");
                temp = temp.next;
            }
            System.out.println();
        }

        // insert at End
        void insertAtEnd(int val) {
            Node temp = new Node(val);

            if(head == null) {
                head = temp;
                tail = temp;
            } else {
                tail.next = temp;
                tail = temp;
            }
        }

        
        
    }


    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        list.insertAtEnd(5);
        list.display();
        list.insertAtEnd(45);
        list.display();
        list.insertAtEnd(12);
        list.display();
        list.insertAtEnd(4);
        list.display();
    }
}
