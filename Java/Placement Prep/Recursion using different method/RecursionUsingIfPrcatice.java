public class RecursionUsingIfPrcatice {
    static int recursionExample(int k) {
        if (k > 0) {
            return k + recursionExample(k-1);
        }
        else {
            System.out.println("Cannot its 0");
            return 0;
        }
    }

    public static void main(String[] args) {
        int result = recursionExample(10); 
        System.out.println(result);
    }
}
