
// Steps to make any function to lamda Expression
// 1. Remove the return type of the function
// 2. Remove the name of the function
// 3. Remove modifier of the function

interface Add {
    void sum(int a, int b);
}

public class LambdaExpression {

    public static void main(String[] args) {

        // Lambda Expression
        Add obj = (int a, int b) -> {
            System.out.println(a + b);
        };

        obj.sum(10, 20);
    }
}
