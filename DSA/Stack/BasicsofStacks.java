import java.util.Stack;

public class BasicsofStacks {

    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();

        // size
        System.out.println("Stack size: " + stack.size());
        // stack elements
        System.out.println("Stack: " + stack);

        stack.push(10);
        // size
        System.out.println("Stack size: " + stack.size());
        // stack elements
        System.out.println("Stack: " + stack);
        stack.push(20);
        // size
        System.out.println("Stack size: " + stack.size());
        // stack elements
        System.out.println("Stack: " + stack);
        stack.push(30); 
        // size
        System.out.println("Stack size: " + stack.size());
        // stack elements
        System.out.println("Stack: " + stack);
        stack.push(40);
        // size
        System.out.println("Stack size: " + stack.size());
        // stack elements
        System.out.println("Stack: " + stack);
        

        // size
        System.out.println("Stack size: " + stack.size());
        // peek
        System.out.println("Top element: " + stack.peek());
        // pop
        System.out.println("Popped element: " + stack.pop());
        System.out.println("Stack after pop: " + stack);

        // size
        System.out.println("Stack size after pop: " + stack.size());

        // isEmpty
        System.out.println("Is stack empty? " + stack.isEmpty());
        
    }
}