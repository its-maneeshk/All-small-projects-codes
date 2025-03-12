public class SameClass {
    static int sum(int a, int b) {
        return a+b;
    }

    int sumThree(int a, int b, int c) {
        return a+b+c;
    }

    public static void main(String[] args) {
        System.out.println(sum(6, 4));

        SameClass obj = new SameClass();
        System.out.println(obj.sumThree(8, 8, 9));
    }
}
