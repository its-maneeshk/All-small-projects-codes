import java.util.Random;
import java.util.Scanner;

class GuessTheNumber
{
    public static void main(String[] args)
    {
        Random rand=new Random();
        java.util.Scanner sc=new Scanner(System.in);

        int NumGen=rand.nextInt(100)+1;
        System.out.print("Guess the number: ");
        int InpNum=sc.nextInt();

        for(int i=1;i<=5;i++)
        {
            if(InpNum==NumGen)
            {
                System.out.println("you gussed it.");
                System.exit(0);
            }
            else if(InpNum>NumGen)
            {
                System.out.println("Guess smaller");
                InpNum=sc.nextInt();
            }
            if(InpNum<NumGen)
            {
                System.out.println("Guess bigger");
                InpNum=sc.nextInt();
            }
        }
        System.out.println("out of chances: correct guess is: "+NumGen);
    }
}