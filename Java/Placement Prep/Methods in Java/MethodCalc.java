import java.util.Scanner;

public class MethodCalc {
    
    static void welcome(String userName) {
        System.out.println("Welcome \"" + userName.toUpperCase() + "\" to the calc.io java application.");
    };

    static int sum(int a, int b){
        return a+b;
    };

    static int mul(int a, int b) {
        return a*b;
    }

    static float prod(int a, int b) {
        return a/b;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Your Good Name: ");
        String userInputName = sc.nextLine();
        welcome(userInputName);
        sc.close();

        int resultSum = sum(5,6);
        int resultMul = mul(5,6);
        float printProd = prod(5,6);

        System.out.println(resultSum);
        System.out.println(resultMul);
        System.out.println(printProd);

    }
}
