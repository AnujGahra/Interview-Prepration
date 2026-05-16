public class StarTriangleReverse {
    

    public static void main(String[] args) {
        int size = 5;

        // for (int i = 1; i <= size; i++) {
        //     for (int j = 1; j <= size; j++) {
        //         if((i+j) <= size) {
        //             System.out.print(" ");
        //         } else {
        //             System.out.print("*");
        //         }
        //     }
        //     System.out.println();
        // }


        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= size - i; j++) {
                System.out.print(" ");
            }
            for (int k = 1; k <= i; k++) {
                System.out.print("*");
            }  
            System.out.println(); 
        }
    }
}
