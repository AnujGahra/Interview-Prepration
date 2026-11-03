public class TargetSum {


    static int findTargetSumCount(int[] arr, int sum){

        int ans = 0;
        for(int i = 0; i<arr.length; i++) {
            for(int j = i+1; j<arr.length; j++) {
                if(arr[i] + arr[j] == sum) {
                    ans++;
                }
            }
        }
        return ans;
    }


    // Count the number of triplets in an array whose sum is equal to a given value
    static int findTargetSumCountTriplet(int[] arr, int target) {
        int ans = 0;
        for(int i = 0; i<arr.length; i++) {
            for(int j = i + 1; j<arr.length; j++) {
                for(int k = j+1; k<arr.length; k++) {
                    if(arr[i] + arr[j] + arr[k] == target) {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
    
    


    public static void main(String[] args) {
        int arr[] = {4, 6, 3, 5, 8, 2};
        int target = 7;
        int result = findTargetSumCount(arr, target);
        System.out.println(result);


        // call triplet method
        int tripletTarget = 15;
        int tripletResult = findTargetSumCountTriplet(arr, tripletTarget);
        System.out.println(tripletResult);
    }
}
