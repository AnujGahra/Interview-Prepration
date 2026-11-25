/**
 * Basicll
 * Implementation of a basic linked list in Java.
 */
public class Basicll {

    // Node class representing each element in the linked list
    static class Node {
        int data; // value of the node
        Node next; // address of the next node in the list

        Node(int data) {
            this.data = data;
        }
    }

    // Display Linked List
    static void display(Node head) {
        Node temp = head;
        while(temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }

    // Display Linked List using recursive
    // commit message: a
    static void displayRecur(Node head) {
        if(head == null) return;
        System.out.print(head.data + " ");
        display(head.next);
    }


    public static void main(String[] args) {
        Node a = new Node(5);
        // System.out.println(a.next);
        Node b = new Node(3);
        Node c = new Node(8);
        Node d = new Node(9);
        Node e = new Node(16);

        // 5, 3, 8, 9, 16

        a.next = b; // 5 -> 3 8 9 16
        b.next = c; // 5 -> 3 -> 8 9 16
        c.next = d; // 5 -> 3 -> 8 -> 9 16
        d.next = e; // 5 -> 3 -> 8 -> 9 -> 16

        // System.out.println(a.data);
        // System.out.println(a.next.data);
        // System.out.println(a.next.next.data);
        // System.out.println(a.next.next.next.data);
        // System.out.println(a.next.next.next.next.data);

        // print linked list
        // commit message: 
        Node temp = a;
        // for(int i = 0; i<5; i++) {
        //     System.out.print(temp.data + " ");
        //     temp = temp.next;
        // }
        // while(temp != null) {
        //     System.out.print(temp.data + " ");
        //     temp = temp.next;
        // }


        // display(a);

        displayRecur(a);



    }

    
}