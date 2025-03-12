public class ForLoopInMultiDimentionalArray {
    public static void main(String[] args) {
        int[][] dimentionalArray = {
            {1,4,7},
            {2,5,8},
            {3,6,9}
        };

        for (int[] row : dimentionalArray) {
            for (int i : row) {
                System.out.println(i);
            }
        }
    }
}
