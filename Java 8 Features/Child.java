

@FunctionalInterface
public interface Child extends Parent {

    // public void sayBye();

    default void sayBye() {
        System.out.println("Bye from child");
    }

    public static void sayHi() {
        System.out.println("Hi from child");
    }
    
    
}
