import java.util.Scanner;

class TernaryOperatorIf {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter you'r age: ");
        int userAge = sc.nextInt(); //The nextLine() method in Java reads an entire line of input, including spaces, until the user presses Enter.

        String eligiblityCheck = (userAge < 18) ? "You're Not Eligible." : "You're Eligible.";

        System.out.println(eligiblityCheck);

        sc.close();
    }
}