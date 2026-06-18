import java.util.Scanner;
import java.util.Stack;

public class CopyStack {
    
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Stack<Integer> st = new Stack<>();

        int n;
        System.out.println("Enter the number elements you want to push into the stack: ");
        n = sc.nextInt();
        System.out.println("Enter the elements you want to push into the stack: ");
        for(int i = 0; i<n; i++) {
            int x = sc.nextInt();
            st.push(x);
        }

        System.out.println("Original stack: " + st);


        // reverse order
        Stack<Integer> rt = new Stack<>();
        while(st.size() > 0) {
            // int x = st.peek();
            // rt.push(x);
            // st.pop();
            rt.push(st.pop());
        }

        // copying the elements 
        Stack<Integer> nt = new Stack<>();
        while(rt.size() > 0) {
            nt.push(rt.pop());
        }
        System.out.println("Reversed stack: " + rt);
        System.out.println("Copied stack: " + nt);
    }
}
