import java.util.Scanner;

class IfCondition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your age: ");
        int userAge = sc.nextInt(); //The nextLine() method in Java reads an entire line of input, including spaces, until the user presses Enter.

        if (userAge > 17) {
            System.out.println("You're Eligible.\nProceed to voting poll.");
        }

        sc.close();
        
    }
}