public class NumberTraingle {
    static void TraingleSymbol(int size) {
        for(int i=1; i<=size; i++) {
            for(int j=1; j<=i; j++) {
                System.out.print(j);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        TraingleSymbol(5);
    }
}
