/** Example 0:
 * Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 */

/** Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/


public class RemoveDuplicateNumber {
    static int rmvDuplicate(int[] nums) {

        int size = nums.length;

        int index = 1;
        for (int i=1 ;i<size; i++) {
            if (nums[i] != nums[i-1]) {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }

    public static void main(String[] args) {
        int[] numCollection = {1, 1, 2};
        int numberOfUniqueElement = rmvDuplicate(numCollection);
        System.out.println("Number of changes: " + numberOfUniqueElement);

        for (int i=0; i<numberOfUniqueElement; i++) {
            System.out.println(numCollection[i]);
        }
    }
    
}
