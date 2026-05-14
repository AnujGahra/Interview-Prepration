

interface Parent {

    default void sayHello() {
        System.out.println("Hello from A");
    }
}

class Child implements Parent {

}

public class DefaultMethods {
    
    public static void main(String[] args) {
        Child child = new Child();
        child.sayHello();
    }
}
