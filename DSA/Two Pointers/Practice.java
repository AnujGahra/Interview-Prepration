import java.util.*;

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

    // Question: Sort an Array  even number at beginning and odd number at the end of the array
    // input -> [1, 2, 3, 4, , 6, 7, 8]
    // output -> [2, 4, 6, 8, 1, 3, 5, 7]
    static int[] evenBrute(int[] arr) {
        int left = 0;
        int right = arr.length - 1;

        while(left < right) {
            if(arr[left] % 2 != 0 && arr[right] % 2 == 0) {
                swap(arr, left, right);
                left++;
                right--;
            }

            if(arr[left] % 2 == 0) left++;
            if(arr[right] % 2 != 0) right--;
        }
        return arr;
    }

    // Sort an Array in non-decreasing order and return square of each number in the array
    static int[] sortAndSquare(int[] arr) {
        int n = arr.length;
        int left = 0;
        int right = arr.length - 1;
        int[] result = new int[n];
        int k = n-1;

        while(left <= right) {
            if(Math.abs(arr[left]) > Math.abs(arr[right])) {
                result[k--] = arr[left] * arr[left];
                left++;
            } else {
                result[k--] = arr[right] * arr[right];
                right--;
            }
        }
        return result;
    }


    // prefixSum of the array
    // commit message: add
    static int[] prefixSum(int[] arr) {
        int n = arr.length;
        int[] result = new int[n];
        result[0] = arr[0];

        for(int i = 1; i<n; i++) {
            result[i] = result[i-1] + arr[i];
        }
        return result;
    }

    public static void main(String[] args) {
        int[] arr = inputArray();

        // printArray(arr);
        // System.out.println();

        // int[] arrSort = sortZeros(arr);
        // printArray(arrSort);

        // int[] arrSwap = swap(arr, 2, 4);
        // printArray(arrSwap);

        // int[] arrtp = sortZerosTwoPointer(arr);
        // printArray(arrtp);

        // int[] arrEven = evenBrute(arr);
        // printArray(arrEven);

        int[] preSum = prefixSum(arr);
        printArray(preSum);





    }

}
