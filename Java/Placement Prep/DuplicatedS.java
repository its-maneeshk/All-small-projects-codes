public class DuplicatedS {
    static int Duplicate(int[] nums) {
        if (nums.length == 0) return 0;

        int size = nums.length;

        int index = 1;
        for(int i=1; i<size; i++) {
            if(nums[i] != nums[i-1]) {
                nums[index] = nums[i];
                index++;
            }
        }

    
        return index;
    }

    public static void main(String[] args) {
        int[] num = {0,0,1,1,1,2,2,3,3,4};
        int result = Duplicate(num);
        
        System.out.println(result);

        for (int i=0; i<result; i++) {
            System.out.println(num[i]);
        }
    }
}
