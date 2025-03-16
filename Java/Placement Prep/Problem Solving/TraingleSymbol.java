public class TraingleSymbol {
    static void symbolTraingle(int noRows) {
        for(int i=0; i<noRows; i++) {
            for(int j = i+1; j< noRows; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        symbolTraingle(5);
    }
}
