public class SearchBinarySearchTree {
    


    // search element using binary search tree
    public static boolean searchBST(int arr[], int key) {
        int left = 0;
        int right = arr.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == key) {
                return true;
            } else if (arr[mid] < key) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false;
    }


    public static void main(String[] args) {
        int[] arr = { 5, 3, 7, 2, 4, 6, 8 };
        int key = 6;
        System.out.println(searchBST(arr, key));
    }
}
