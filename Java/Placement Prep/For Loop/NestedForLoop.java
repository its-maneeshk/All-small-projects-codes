public class NestedForLoop {
    public static void main(String[] args) {
        for (int i=0; i<6; i++ ) {
            System.out.println("I am first line from prime loop.");
            for(int j=0; j<3; j++) {
                System.out.println("I am from nested loop.");
            }
            System.out.println("I am last line from prime loop.");
        }
    }
}
