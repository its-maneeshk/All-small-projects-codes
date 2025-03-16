public class NumberRightAngle {
    static void TraingleSymbol(int size) {
        for(int i=1; i<=size;i++) {
            for(int j=size-i;j>=0; j--) {
                System.out.print(" ");
            }
            for(int l=1; l<i; l++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        TraingleSymbol(5);
    }
}
