public class SwapUsingVoid {
    static void swap(int num1, int num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
        
        System.out.println(num1 + " " + num2);
    }

    public static void main(String[] args) {
        swap(5, 8);
    }
}
