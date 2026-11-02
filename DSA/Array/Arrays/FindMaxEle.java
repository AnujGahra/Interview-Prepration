import java.util.Arrays;

public class FindMaxEle {


    static int countOccurencs(int[] arr, int x) {
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == x) {
                count++;
            }
        }
        return count;
    }

    // lastOccurrence of an element in the array
    static void lastOccurrence(int[] arr, int x) {
        int lastIndex = -1;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == x) {
                lastIndex = i;
            }
        }
        if (lastIndex != -1) {
            System.out.println("Last occurrence of element " + x + " is at index: " + lastIndex);
        } else {
            System.out.println("Element " + x + " is not present in the array.");
        }
    }


    static int countGreaterThan(int[] arr, int x) {
        int count = 0;
        for(int i = 0; i < arr.length; i++) {
            if (arr[i] > x) {
                count++;
            }
        }
        return count;
    }


    static void MaxElement(int[] arr) {
        int max = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        System.out.println("Maximum element in the array is: " + max);
    }

    // find the maximum element in the array using sorted array
    static void MaxElementSorted(int[] arr) {
        Arrays.sort(arr);
        int max = arr[arr.length - 1];
        System.out.println("Maximum element in the sorted array is: " + max);
    }

    // Search th given elemment x in th array. if present then return the index else return -1
    static int searchElement(int[] arr, int x) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == x) {
                return i;
            }
        }
        return -1;
    }
    


    public static void main(String[] args) {
        int[] arr = { 65, 34, 78, 12, 90, 23 };
        MaxElement(arr);
        MaxElementSorted(arr);

        int x = 90;
        int index = searchElement(arr, x);
        if (index != -1) {
            System.out.println("Element " + x + " is present at index: " + index);
        } else {
            System.out.println("Element " + x + " is not present in the array.");   
        }

        // count the number of occurrences of an element in the array
        int[] arr2 = { 1, 2, 3, 4, 5, 1, 2, 3, 1 };
        int y = 1;
        int count = countOccurencs(arr2, y);
        System.out.println("Element " + y + " occurs " + count + " times in the array.");


        // last occurrence of an element in the array
        int[] arr3 = { 1, 2, 3, 4, 5, 1, 2, 3, 1 };
        int z = 3;
        lastOccurrence(arr3, z);


        // count the number of elemt strictly greater than a given number in the array
        int x1 = 3;
        int count1 = countGreaterThan(arr3, x1);
        System.out.println("Number of elements strictly greater than " + x1 + " in the array: " + count1);

    }



}
