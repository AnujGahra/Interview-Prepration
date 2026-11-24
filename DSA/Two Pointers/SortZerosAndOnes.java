/**
 * SortZerosAndOnes
 * Questions: Sort an Array Consisting of 0s and 1s
 */
import java.util.Scanner;
public class SortZerosAndOnes {

    // method fro take user inout in array
    public static int[] takeUserInput() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = sc.nextInt();
        int[] arr = new int[size];
        System.out.println("Enter the elements of the array (0s and 1s only): ");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }
        return arr;
    }

    // method to print the array
    static void printArray(int[] arr) {
        for(int i = 0; i<arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    // method to sort the array of 0s and 1s
    static void sortZeros(int[] arr) {
        int zeros = 0;

        for(int i = 0; i<arr.length; i++) {
            if(arr[i] == 0) zeros++;
        }

        for(int i = 0; i<arr.length; i++) {
            if(i<zeros) arr[i] = 0;
            else arr[i] = 1;
        }
    }

    // method to swap two elements in the array
    static void swap(int [] arr, int a, int b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;

        // without using temp variable
        // arr[a] = arr[a] + arr[b];
        // arr[b] = arr[a] - arr[b];
        // arr[a] = arr[a] - arr[b];

        // or
        // arr[a] = arr[a] ^ arr[b];
        // arr[b] = arr[a] ^ arr[b];
        // arr[a] = arr[a] ^ arr[b];
        
    }

    




    public static void main(String[] args) {

        int [] arr = takeUserInput();
        sortZeros(arr);
        printArray(arr);

        

    }

    
}