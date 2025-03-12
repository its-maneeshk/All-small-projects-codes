import java.util.Scanner;

class IfElseCondition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter you'r age: ");
        int userAge = sc.nextInt(); //The nextLine() method in Java reads an entire line of input, including spaces, until the user presses Enter.

        if (userAge < 18) {
            System.out.println("You're under age.\nYou cannot vote");
        }
        else if (userAge >= 18 ) {
            System.out.println("You're Eligible.\nProceed to voting poll.");
        }
        else {
            System.out.println("something error");
        }

        sc.close();
    }
}