public class CheckStrictAscending {
    static boolean strictAscendingCheck(int[] arr) {
        for(int i=1; i<arr.length; i++) {
            if(arr[i] < arr[i-1]) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int[] num = {1,2,6,10,5};
        boolean result = strictAscendingCheck(num);
        System.out.println("found in ascending order? " + result);
    }
}
