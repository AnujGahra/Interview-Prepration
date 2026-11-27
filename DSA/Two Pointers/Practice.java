import java.util.Scanner;

public class Practice {

    // take input array from user
    static int[] inputArray() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        return arr;
    }

    // print array
    static void printArray(int[] arr) {
        for(int i = 0; i<arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    // method to sort the array of 0s and 1s
    static int[] sortZeros(int[] arr) {

        int count = 0;
        for(int i = 0; i<arr.length; i++) {
            if(arr[i] == 0) count++;
        }

        for(int i = 0; i<arr.length; i++) {
            if(i<count) arr[i] = 0;
            else arr[i] = 1;
        }


        return arr;
    }
    
    // swap
    static int[] swap(int[] arr, int a, int b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        return arr;
    }

    // method to sort the array of 0s and 1s using two pointer approach
    static int[] sortZerosTwoPointer(int[] arr) {
        int left = 0;
        int right = arr.length - 1;

        while(left < right) {
            if(arr[left] == 1 && arr[right] == 0) {
                swap(arr, left, right);
                left++;
                right--;
            }
            if(arr[left] == 0) left++;
            if(arr[right] == 1) right--;
        }
        return arr;
    }


    public static void main(String[] args) {
        int[] arr = inputArray();

        // printArray(arr);
        // System.out.println();

        // int[] arrSort = sortZeros(arr);
        // printArray(arrSort);

        // int[] arrSwap = swap(arr, 2, 4);
        // printArray(arrSwap);

        int[] arrtp = sortZerosTwoPointer(arr);
        printArray(arrtp);





    }

}
