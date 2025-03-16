public class LargestNumberInArray {
    static int largestNumber(int[] nums) {
        int size = nums.length;
        int max = nums[0];
        
        if (size == 0) return 1;
        
        for(int i=1;i<size;i++) {
            if(nums[i] > max) {
                max = nums[i];
            }
        }
        return max;
    }

    public static void main(String[] args) {
        int[] number = {1, 7, 18, 56, 10, 1008, 45};
        int result = largestNumber(number);
        System.out.println(result);
    }
}
