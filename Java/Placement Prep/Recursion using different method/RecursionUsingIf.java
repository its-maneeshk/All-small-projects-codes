public class RecursionUsingIf {
    public static void main(String[] args) {
        int resultStore = recursionMethod(10);
        System.out.println("Final Ans is " + resultStore);
    }

    static int recursionMethod(int k) {
        if (k > 0) {
            return k + recursionMethod(k-1);
        }
        else {
            System.out.println("Recursion of 0 is 0.");
            return 0;
        }
    }
}
