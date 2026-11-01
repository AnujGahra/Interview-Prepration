import java.util.Scanner;

public class TwoDArray {


    void twoArray() {
        Scanner sc = new Scanner(System.in);
        int[][] matrix = new int[3][3];

        // take value by user
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        // print value by user
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        TwoDArray obj = new TwoDArray();
        obj.twoArray();
    }
}

