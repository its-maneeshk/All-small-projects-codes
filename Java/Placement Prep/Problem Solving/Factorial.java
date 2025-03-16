public class Factorial {
    static int fac(int num) {
        for(int i=num-1; i>0; i--) {
            num*=i;
        }
        return num;
    }

    public static void main(String[] args) {
        int result = fac(5);
        System.out.println(result);
    }
}
