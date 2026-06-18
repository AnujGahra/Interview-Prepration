import java.util.Stack;

public class InsertionInStack {
    

    public static void main(String[] args) {
        Stack<Integer> st = new Stack<>();
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        System.out.println("Original stack: " + st);

        int idx = 2;
        int x = 7;

        Stack<Integer> temp = new Stack<>();

        while(st.size() > idx) {
            temp.push(st.pop());
        }
        st.push(x);

        while(temp.size() > 0) {
            st.push(temp.pop());
        }
        System.out.println("Stack after insertion: " + st);

        // remove from bottom / any index
        idx = 1;
        Stack<Integer> temp2 = new Stack<>();
        while(st.size() > idx) {
            temp2.push(st.pop());
        }
        st.pop();
        while(temp2.size() > 0) {
            st.push(temp2.pop());
        }
        System.out.println("Stack after deletion: " + st);

    }
}
