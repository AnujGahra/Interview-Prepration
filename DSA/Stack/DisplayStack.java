import java.util.Stack;

public class DisplayStack {
    public static void main(String[] args) {
            Stack<Integer> st = new Stack<>();
            st.push(10);
            st.push(20);
            st.push(30);
            st.push(40);
            System.out.println("Stack: " + st);

            Stack<Integer> rt = new Stack<>();
            while(st.size() > 0) {
                rt.push(st.pop());
            }

            while(rt.size() > 0) {
                int x = rt.pop();
                System.out.print(x + " ");
                st.push(x);
            }
            System.out.println();
            System.out.println(" stack: " + st);


            // using array
            int n = st.size();
            int[] arr = new int[n];
            for(int i = n-1; i>=0; i--) {
                arr[i] = st.pop();
            }

            for(int i = 0; i<n; i++) {
                System.out.print(arr[i] + " ");
                st.push(arr[i]);
            }
            System.out.println();
            System.out.println(" stack: " + st);
    }
}
