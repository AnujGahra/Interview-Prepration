import java.util.Arrays;

public class FindMaxEle {


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
    }
}
