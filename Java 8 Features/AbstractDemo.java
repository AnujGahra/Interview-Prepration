abstract class MyAbstractClass {
    
    public int a;
    public int b;

    public MyAbstractClass(int a, int b) {
        this.a = a;
        this.b = b;
    }

    public void print () {
        System.out.println("The value of a is: " + a);
        System.out.println("The value of b is: " + b);
    }
}

public class AbstractDemo extends MyAbstractClass {

    public AbstractDemo(int a, int b) {
        super(a, b);
    }

    public static void main(String[] args) {
        AbstractDemo demo = new AbstractDemo(10, 20);
        demo.print();
    }
}