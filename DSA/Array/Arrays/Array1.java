/**
 * Array1
 */
public class Array1 {


    void demoArrays() {
        int[] ages = new int[3];
        float[] weights = new float[3];
        String[] names = new String[3];

        int ages1[] = { 10, 20, 30
        };
        for (int i = 0; i < ages1.length; i++) {
            System.out.print(ages1[i] + " ");
        }


        ages[0] = 10;
        ages[1] = 20;
        ages[2] = 30;
        // ages[5] = 50;

        System.out.println(ages[0]);
        System.out.println(ages[1]);
        System.out.println(ages[2]);
        // System.out.println(ages[5]);


        weights[0] = 10.5f;
        weights[1] = 20.5f;
        weights[2] = 30.5f;
        System.out.println(weights[0]);
        System.out.println(weights[1]);
        System.out.println(weights[2]);


        names[0] = "John";
        names[1] = "Jane";
        names[2] = "Doe";
        System.out.println(names[0]);
        System.out.println(names[1]);
        System.out.println(names[2]);
        
    }



    public static void main(String[] args) {
        Array1 array1 = new Array1();
        array1.demoArrays();

    }
    
}