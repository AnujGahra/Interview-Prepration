import java.util.Stack;

public class DisplayStack {

    public static void displayRec(Stack<Integer> st) {
        if (st.size() == 0) {
            return;
        }
        // st.push(50); // stack is Pass by Reference
        int top = st.pop();

        System.out.print(top + " ");
        displayRec(st);
        st.push(top);

    }

    // insert at index using recursion
    public static void insertAtIndexRec(Stack<Integer> st, int idx, int x) {
        if (idx == 0) {
            st.push(x);
            return;
        }
        int top = st.pop();
        insertAtIndexRec(st, idx - 1, x);
        st.push(top);
    }

    // delete at index using recursion
    public static void deleteAtIndexRec(Stack<Integer> st, int idx) {
        if (idx == 0) {
            st.pop();
            return;
        }
        int top = st.pop();
        deleteAtIndexRec(st, idx - 1);
        st.push(top);
    }

    public static void main(String[] args) {
        Stack<Integer> st = new Stack<>();
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        System.out.println("Stack: " + st);

        displayRec(st);
        // System.out.println("Stack after display: " + st);

        // Stack<Integer> rt = new Stack<>();
        // while(st.size() > 0) {
        // rt.push(st.pop());
        // }

        // while(rt.size() > 0) {
        // int x = rt.pop();
        // System.out.print(x + " ");
        // st.push(x);
        // }
        // System.out.println();
        // System.out.println(" stack: " + st);

        // // using array
        // int n = st.size();
        // int[] arr = new int[n];
        // for(int i = n-1; i>=0; i--) {
        // arr[i] = st.pop();
        // }

        // for(int i = 0; i<n; i++) {
        // System.out.print(arr[i] + " ");
        // st.push(arr[i]);
        // }
        // System.out.println();
        // System.out.println(" stack: " + st);

    }

}
