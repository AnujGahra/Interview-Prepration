public class Basicsll {

    public static void display(Node head) {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.print("null");
    }

    // Displaying using recursion
    public static void displayRecursion(Node head) {
        if (head == null) {
            System.out.print("null");
            return;
        }
        System.out.print(head.data + " -> ");
        displayRecursion(head.next);
    }

    public static void displayRecursionRev(Node head) {
        if (head == null) {
            // System.out.print("null");
            return;
        }
        displayRecursionRev(head.next);
        System.out.print(head.data + " -> ");
    }

    public static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            
        }
    }

    public static void main(String[] args) {
        Node a = new Node(5);
        Node b = new Node(6);
        Node c = new Node(8);
        Node d = new Node(10);
        Node e = new Node(15);


        a.next = b;
        b.next = c;
        c.next = d;
        d.next = e;


        display(a);
        System.out.println();
        displayRecursion(a);
        System.out.println();
        displayRecursionRev(a);
        System.out.println();
    }
}