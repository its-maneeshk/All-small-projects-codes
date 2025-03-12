class Manish{
    static int sum(int a, int b) {
        return a+b;
    }
    int mul(int x, int y) {
        return x*y;
    }
}

public class SeperateClass {
    public static void main(String[] args) {
        System.out.println(Manish.sum(5,6));

        Manish obj = new Manish();
        System.out.println(obj.mul(5, 6));
    }
}
