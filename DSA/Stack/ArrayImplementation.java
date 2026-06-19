public class ArrayImplementation {

    public static class Stack {
        private int[] arr = new int[5];

        private int idx = 0;

        void push(int x) {
            arr[idx] = x;
            idx++;
        }

        int peek() {
            if (idx == 0) {
                System.out.println("Stack is empty");
                return -1;
            }
            return arr[idx - 1];
        }
    }

    public static void main(String[] args) {

    }
}
