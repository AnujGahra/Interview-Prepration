public class ReverseArray {


    public static void reverseArray(int[] arr) {
        int left = 0;
        int right = arr.length - 1;

        while (left < right) {
            // Swap elements at left and right indices
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            // Move towards the middle
            left++;
            right--;
        }
    }


    // 2nd method using for loop
    public static void reverseArrayForLoop(int[] arr) {
        
        for(int i = arr.length - 1; i >= 0; i--) {
            System.out.print(arr[i] + " ");
        }
    }
    


    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        // reverseArray(arr);
        for (int num : arr) {
            System.out.print(num + " ");
        }

        System.out.println("\nUsing for loop:");
        reverseArrayForLoop(arr);


    }
}
