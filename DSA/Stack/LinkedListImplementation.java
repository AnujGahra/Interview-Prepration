public class LinkedListImplementation {


    public static class Node {
        int val;
        Node next;

        Node(int val) {
            this.val = val;
            
        }
    }

    public static class LLStack { // user defined data structure
        private Node head = null;
        private int size = 0;


        // push element
        void push(int x) {
            Node temp = new Node(x);
            temp.next = head;
            head = temp;
            size++;
        }

        void display() {
            
        }

        // display element
        void displayRev() {
            Node temp = head;
            while(temp != null) {
                System.out.print(temp.val + " ");
                temp = temp.next;
            }
            System.out.println();
        }

        // size
        int size() {
            return size;
        }

        // pop element
        int pop() {
            if(head == null) {
                System.out.println("Stack is empty");
                return -1;
            }
            int x = head.val;
            head = head.next;
            return x;

        }  

        // peek element
        int peek() {
            if(head == null) {
                System.out.println("Stack is empty");
                return -1;
            }
            return head.val;
        }

        // isEmpty
        boolean isEmpty() {
            if(head == null) {
                return true;
            } else {
                return false;
            }
        }

    }

    public static void main(String[] args) {
        LLStack stack = new LLStack();
        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.display();
        System.out.println("Size: " + stack.size());
        System.out.println("Popped: " + stack.pop());
        System.out.println("Peek: " + stack.peek());
        System.out.println("Is Empty: " + stack.isEmpty());
    }
}
