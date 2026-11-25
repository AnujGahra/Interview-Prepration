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

    // method to sort the array of 0s and 1s using two pointer approach
    static void sortTwoPointer(int[] arr) {
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
    }

// Question: Sort an Array  even number at beginning and odd number at the end of the array
    static void sortEvenOdd(int[] arr) {
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
    }

    // Question: Sort an Array in non-decreasing order and return square of each number in the array
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

    // reverse the array
    public static void reverseArray(int[] arr) {
        int left = 0;
        int right = arr.length - 1;

        while(left < right) {
            swap(arr, left, right);
            left++;
            right--;
        }
    }

    // Prefix sum of the array
    static int[] makePrefixSum(int[] arr) {
        int n = arr.length;
        int[] prefixSum = new int[n];
        prefixSum[0] = arr[0];

        for(int i = 1; i<n; i++) {
            prefixSum[i] = prefixSum[i-1] + arr[i];
        }
        return prefixSum;
    }

    // prefix sum of the array without using extra space
    static int[] makePrefixSumInPlace(int[] arr) {

        for(int i = 1; i<arr.length; i++) {
            arr[i] += arr[i-1];
        }
        return arr;
    }

    // prefix sum of the array with range query l to r
    static int rangeQuery(int[] arr, int l, int r) {
        if(l == 0) return arr[r];
        return arr[r] - arr[l-1];
    }


    // find sum of the array
    static int sumOfArray(int[] arr) {
        int sum = 0;
        for(int i = 0; i<arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }

    // Check if we can partition the array into two subarrays with equal sum
    static boolean equalSumPartition(int[] arr) {
        int totalSum = sumOfArray(arr);

        int prefixSum = 0;
        for(int i = 0; i<arr.length; i++) {
            prefixSum += arr[i];
            int suffixSum = totalSum - prefixSum;
            if(prefixSum == suffixSum) {
                return true;
            }
        }
        

        return false;

    }

    // suffix sum of the array
    static int[] makeSuffixSum(int[] arr) {
        int n = arr.length;
        int[] suffixSum = new int[n];
        suffixSum[n-1] = arr[n-1];

        for(int i = n-2; i>=0; i--) {
            suffixSum[i] = suffixSum[i+1] + arr[i];
        }
        return suffixSum;
    }



    public static void main(String[] args) {

        int [] arr = takeUserInput();
        // sortZeros(arr);

        // sortTwoPointer(arr);

        // sortEvenOdd(arr);

        // int[] squaredArray = sortAndSquare(arr);
        // printArray(squaredArray);

        // int[] prefixSum = makePrefixSum(arr);
        // printArray(prefixSum);

        // int[] prefixSumInPlace = makePrefixSumInPlace(arr);
        // printArray(prefixSumInPlace);

        // int rangeSum = rangeQuery(prefixSumInPlace, 1, 3);
        // System.out.println("Range Sum: " + rangeSum);

        // boolean canPartition = equalSumPartition(arr);
        // if(canPartition) {
        //     System.out.println("The array can be partitioned into two subarrays with equal sum.");
        // } else {
        //     System.out.println("The array cannot be partitioned into two subarrays with equal sum.");   
        // }


        // int[] suffixSum = makeSuffixSum(arr);
        // printArray(suffixSum);

    }

    
}