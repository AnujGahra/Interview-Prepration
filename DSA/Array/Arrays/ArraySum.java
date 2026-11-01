import java.util.Scanner;

public class ArraySum {

    int arraySum(int[] arr) {
        int sum = 0;
        for(int i = 0; i< arr.length; i++) {
            sum += arr[i];
        }
        return sum;

    }
    


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArraySum obj = new ArraySum();
        // int[] arr = {1, 2, 3, 4, 5};
        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.print("Enter the elements of the array: ");
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(obj.arraySum(arr));

    }
}
