public class Main {
    
    public static void main(String[] args) {


        Singleton obj1 = Singleton.getInstance();
        Singleton obj2 = Singleton.getInstance();
        Singleton obj3 = Singleton.getInstance();


        obj1.showMessage();

        System.out.println(obj1);
        System.out.println(obj2);
        System.out.println(obj3);

        System.out.println(obj1 == obj2);
        System.out.println(obj2 == obj3);

    }
}
