// METHOD OVERLOADING MEANS SAME METHOD WITH TWO DIFFRENT PARAMETERS

public class MethodOverloading {
    static int plusMethod(int a, int b) {
        return a+b;
    }

    static int plusMethod(int a, int b, int c){
        return a+b+c;
    }

    static double plusMethod(double a, double b) {
        return a+b;
    }

    public static void main(String[] args) {
        System.out.println(plusMethod(5, 6));
        
        System.out.println(plusMethod(4, 5, 6));

        System.out.println(plusMethod(4.1, 5.5));
    }
}
