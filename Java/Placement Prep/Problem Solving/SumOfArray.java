public class SumOfArray {
    static int sumArray(int[] nums) {
        int temp = 0;
        int size = nums.length;
        for(int i=0; i<size;i++) {
            temp += nums[i];
        }
        return temp;
    }

    public static void main(String[] args) {
        int[] number = {1, 2, 3, 4, 5}; 
        int result = sumArray(number);
        System.out.println(result);
    }
}
