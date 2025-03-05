import java.util.Scanner;

public class Quiz {
    public static void main(String[] args) {
        int score = 0;
        Scanner sc = new Scanner(System.in);

        // Get player's name
        System.out.print("Please Enter Your Full Name: ");
        String name = sc.nextLine().toUpperCase();
        System.out.println("\n\033[1;34m@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
        System.out.println("@@                                                                     @@");
        System.out.println("@@                      \033[1;36mWELCOME " + name + "                     @@");
        System.out.println("@@                                                                     @@");
        System.out.println("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
        System.out.println("\033[0m");

        // Ask if the player is ready to play the quiz
        System.out.println("\033[1;35mAre You Ready To Play The Quiz?\nIf Yes Then Press \"Y\" OR Press \"N\" For No\033[0m");
        char choice = sc.next().toUpperCase().charAt(0);

        if (choice == 'Y') {
            // QUESTIONS START FROM HERE
            // 1st question
            System.out.println("\n\033[1;33mQuestion 1: What is the capital of France?");
            System.out.println("\tA. Paris\n\tB. Rome\n\tC. Madrid\n\tD. London");
            System.out.print("Enter Your Answer: \033[0m");
            char ans1 = sc.next().toUpperCase().charAt(0);
            if (ans1 == 'A') {
                System.out.println("\033[1;32m\tCorrect Answer!\033[0m");
                score++;
            } else {
                System.out.println("\033[1;31m\tSorry!! Incorrect Answer\033[0m");
            }

            // 2nd question
            System.out.println("\n\033[1;33mQuestion 2: In cricket, what does the term \"LBW\" stand for?");
            System.out.println("\tA. Leg Before Wicket\n\tB. Leg Between Wickets\n\tC. Long Boundary Width\n\tD. Last Batsman's Wicket");
            System.out.print("Enter Your Answer: \033[0m");
            char ans2 = sc.next().toUpperCase().charAt(0);
            if (ans2 == 'A') {
                System.out.println("\033[1;32m\tCorrect Answer!\033[0m");
                score++;
            } else {
                System.out.println("\033[1;31m\tSorry!! Incorrect Answer\033[0m");
            }
        } else if (choice == 'N') {
            System.out.println("\n\033[1;31mTask Terminated by " + name + "\033[0m");
            System.exit(0);
        } else {
            System.out.println("\n\033[1;31mYou've Entered Wrong Option\033[0m");
        }

        // Display the player's score
        System.out.println("\n\033[1;36mYour Score is: " + score);
        System.out.println("\nThank You " + name + "! Please Visit Again :) \033[0m");

        // Close the scanner
        sc.close();
    }
}
