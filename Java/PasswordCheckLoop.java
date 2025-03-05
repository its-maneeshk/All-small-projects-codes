import java.util.Scanner;

class PasswordCheckLoop {
    
    static String password = "admin";
        
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        

        boolean loopUntilTrue = true;
        
        System.out.println("Enter your password: ");
        
        while (loopUntilTrue) {
                String inputUser = sc.nextLine();
                
                if (inputUser.equals(password) ) {
                    System.out.println("Welcome admin");
                    loopUntilTrue = false;
            } 
            else {
                System.out.println("Wrong password");
                System.out.println("check and enter password again: ");
            }
        }
        
    }
}