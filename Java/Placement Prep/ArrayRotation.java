/*
Input: arr[] = {1, 2, 3, 4, 5, 6, 7},  d = 2
Output:  3 4 5 6 7 1 2

Explaination: d=2 so 2 elements are rotated to the end of the array. So, 1 2 is rotated back
So, Final result: 3, 4, 5, 6, 7, 1, 2
 */

/*
 APPROACH
 I. FIRST CREATE A TEMP AND STORE ALL D INDEX ELEMENT IN THAT
 II. SHIFT REMAINING TO FIRST
 III. ADD TEMP AT LAST OF NUM ARRAY
 IV. PRINT
 */
public class ArrayRotation {
    static int[] arrayRot(int[] nums, int d) {
        int size = nums.length;
        int[] temp = new int[d];
        int i,j,k;

        for(i=0; i<d; i++) {
            temp[i] = nums[i];
        }

        for(j=0;j<size-d; j++) {
            nums[j] = nums[j+d];
        }

        for(k=0; k<d; k++) {
            nums[size-d+k] = temp[k];
        }

        return nums;
    }

    public static void main(String[] args) {
        int[] arrays = {1, 2, 3, 4, 5, 6, 7};
        int[] result= arrayRot(arrays, 3);
        for(int each : result) {
            System.out.print(each + " ");
        }
        
        
        
    }
    
}
