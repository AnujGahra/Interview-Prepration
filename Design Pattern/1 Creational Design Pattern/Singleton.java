/**
 * Singleton
 */
public class Singleton {

    
    // Step 1: Create a static reference variable
    private static Singleton instance;


    // Step 2: Make the constructor private
    private Singleton() {
        System.out.println("Singleton Object Created");
    }

    // Step 3: Provide a public method to access the object

    public static Singleton getInstance() {

        if(instance == null) {
            instance = new Singleton();
        }

        return instance;
    }

    // Business method
    public void showMessage() {
        System.out.println("Hello from Singleton Object");
    }
}