public class RecursionInInterval {
    static int recursionMethod(int start, int end) {
        if (start < end) {
            return end + recursionMethod(start, end - 1);
        }
        else {
            return end;
        }
    }

    public static void main(String[] args) {
        int resultStore = recursionMethod(5, 10);
        System.out.println(resultStore);
    }
}
