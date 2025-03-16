import java.util.Arrays;

class SwapTwoNumber {
    static int[] swap(int num1, int num2) {
        int temp = num1;
            num1 = num2;
            num2 = temp;
       return new int[]{num1,num2};
    }

    public static void main(String[] args) {
        int[] result = swap(500, 10);
        System.out.println(Arrays.toString(result));
    }
}