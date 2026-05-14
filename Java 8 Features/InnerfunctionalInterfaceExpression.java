// Functional Interface: Interface having excatly single abstract method but can have any number of defaults and static methods. We can invoke lamda expression by using functional Interface. 


@FunctionalInterface
public interface InnerfunctionalInterfaceExpression {

    public void sayHello();

    default void sayHi() {
        System.out.println("Hi");
    }
    public static void sayWelcome() {
        System.out.println("Welcome");
    }
    
    
} 
