public class ReverseTriangle {
    static void reverseTriangle(int size) {
        for(int i=1; i<=size; i++) {
            for(int j=1; j<=i; j++) {
                System.out.print("M");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        reverseTriangle(5);
    }
}
