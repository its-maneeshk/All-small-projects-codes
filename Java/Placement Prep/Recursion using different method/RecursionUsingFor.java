// THIS PROGRAM WILL CALCULATE THE SUM OF 10 NUMBERS ALSO REFERRED AS RECURSION

public class RecursionUsingFor {
    static int recursionMethod(int k) {
        for(int i=9; i>=1; i--) {
            k+=i;
            System.out.println(k);
        }
        return k;
    }


    public static void main(String[] args) {
        int resultStore = recursionMethod(10);
        System.out.println("Recursion of given number is " + resultStore);
    }
}
