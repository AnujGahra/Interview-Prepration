public class ArrayImplementation {

    public static class Stack {
        private int[] arr = new int[5];

        private int idx = 0;

        void push(int x) {
            if(isFull()) {
                System.out.println("Stack is full");
                return;
            }
            arr[idx] = x;
            idx++;
        }

        // peek element
        int peek() {
            if (idx == 0) {
                System.out.println("Stack is empty");
                return -1;
            }
            return arr[idx - 1];
        }

        int pop() {
            if(idx == 0) {
                System.out.println("Stack is empty");
                return -1;
            }

            int top = arr[idx - 1];
            arr[idx - 1] = 0;
            idx--;
            return top;
        }

        void display() {
            for (int i = 0; i < idx; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }

        int size() {
            return idx;
        }

        // isEmpty
        boolean isEmpty() {
            if(idx == 0) {
                return true;
            } else {
                return false;
            }
        }


        // isFull
        boolean isFull() {
            if(idx == arr.length) {
                return true;
            } else {
                return false;
            }
        }
    }

    public static void main(String[] args) {

        Stack st = new Stack();

    }
}
