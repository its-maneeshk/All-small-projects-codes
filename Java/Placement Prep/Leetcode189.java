/*
Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 */
public class Leetcode189 {
    static int[] rotate(int[] nums, int k) {
        int size = nums.length;
        int[] temp = new int[k];
        int i,j,l;

        // COPYING THE ELEMENTS INTO TEMP THAT USER WANT TO ROTATE
        for(i=0; i<k; i++) {
            temp[i] = nums[size-k+i];
        }

        // SHIFTING THE REMAINING ELEMENTS TO EMPTY SPACES
        for(j=size-1; j>=k; j--) {
            nums[j] = nums[j-k];
        }

        // NOW RESTORING ELEMENT FROM TEMP
        for(l=0;l<k;l++) {
            nums[l] = temp[l];
        }
        
        return nums;
    }

    public static void main(String[] args) {
        int[] number = {-1,-100,3,99}; 
        int[] result = rotate(number, 2);
        for(int each : result) {
            System.out.print(each + " ");
        }

    }
}
