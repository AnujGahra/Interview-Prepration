public class ArrayImplementation {

    public static class Stack {
        private int[] arr = new int[5];

        private int idx = 0;


        void push(int x) {
            arr[idx] = x;
            idx++;
        }

        int peek() {
            return arr[idx - 1];
        }
    }
    
 
    public static void main(String[] args) {

    }
}
