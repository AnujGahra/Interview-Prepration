public class AlphabetSquare {

    // A B C D E
    // A B C D E
    // A B C D E
    // A B C D E
    // A B C D E

    

    public static void main(String[] args) {
        int size = 5;
        for(int i = 65; i < 65 + size; i++) {
            for(int j = 65; j < 65 + size; j++) {
                System.out.print((char)j + " ");
            }
            System.out.println();
        }
    }
}
