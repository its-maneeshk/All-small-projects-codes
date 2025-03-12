public class StaticNonStaticMethodExmple {
    static int sum(int a, int b) {
        return a+b;
    }

    int sumThree(int a, int b, int c) {
        return a+b+c;
    }

    public static void main(String[] args) {
        
// CALLING STATIC METHOD
        System.out.println(sum(6, 4));

        // ---ALTERNATIVELY---

        int resultSum = sum(5, 10);
        System.out.println(resultSum);


// CALLING NON-STATIC METHOD 
        StaticNonStaticMethodExmple obj = new StaticNonStaticMethodExmple();
        
        System.out.println(obj.sumThree(8, 8, 9));

        // ---ALTERNATIVELY---

        int ResultStore = obj.sumThree(4, 5, 7);
        System.out.println(ResultStore);
    }
}
