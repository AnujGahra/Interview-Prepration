public class SumNumAndRevNum {

    public static int reverseNumber(int number) {
        int rev = 0;
        while(number != 0) {
            rev = rev * 10 + number % 10;
            number /= 10;
        }
        return rev;
    }
    

    public static void main(String[] args) {
        int number = 12345;
        int reversedNumber = reverseNumber(number);
        int sum = number + reversedNumber;

        System.out.println("Original number: " + number);
        System.out.println("Reversed number: " + reversedNumber);
        System.out.println("Sum of original and reversed number: " + sum);
    }
}
