public class StrictCheckAscendingOrder {
    static boolean strictCheck(int[] numArray) {
        for (int i=1; i<numArray.length; i++) {
            if (numArray[i] < numArray[i-1]) {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        int[] numList = {5, 10, 15, 20, 25, 26, 28};
        boolean resultCheck = strictCheck(numList);
        System.out.println("Is given number is ascending? " + resultCheck);
    }
}
