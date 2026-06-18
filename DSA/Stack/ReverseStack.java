import java.util.Stack;

public class ReverseStack {


    public static void pushAtBottom(Stack<Integer> st, int x) {
        if(st.size() == 0) {
            st.push(x);
            return;
        }

        int top = st.pop();
        pushAtBottom(st, x);
        st.push(top);
    }

     
    public static void reverseStack(Stack<Integer> st) {
        if(st.size() == 1) return;
        int top = st.pop();
        reverseStack(st);
        pushAtBottom(st, top);
    }




    public static void main(String[] args) {
        Stack<Integer> st = new Stack<>();
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        System.out.println("Original Stack: " + st);

        // Stack<Integer> rt = new Stack<>();
        // while(st.size() > 0) {
        //     rt.push(st.pop());
        // }
        // System.out.println("Reversed Stack: " + rt);

        // Stack<Integer> qt = new Stack<>();
        // while(rt.size() > 0) {
        //     qt.push(rt.pop());
        // }
        // System.out.println("New Stack: " + qt);

        // while(qt.size() > 0) {
        //     st.push(qt.pop());
        // }
        // System.out.println("Stack after moving elements back: " + st);

        reverseStack(st);
        System.out.println("Reversed Stack: " + st);
    }
}
