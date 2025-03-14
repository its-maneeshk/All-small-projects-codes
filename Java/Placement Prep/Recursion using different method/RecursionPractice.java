public class RecursionPractice {
    static int recursionSolution(int num) {
        int store = 0;
        for(int i=num; i>0; i--) {
            store += i;
        }
        return store;
    }

    public static void main(String[] args) {
        int result = recursionSolution(10);
        System.out.println(result);
    }
}
