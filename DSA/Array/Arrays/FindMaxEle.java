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
    


    public static void main(String[] args) {
        int[] arr = { 65, 34, 78, 12, 90, 23 };
        MaxElement(arr);
        MaxElementSorted(arr);

    }
}
