/*
Input: nums = [1,2,10,5,7]
Output: true
Explanation: By removing 10 at index 2 from nums, it becomes [1,2,5,7].
[1,2,5,7] is strictly increasing, so return true. */


public class RemoveElement {

    static int Ascending(int[] num) {
        for (int i=1; i<num.length; i++) {
            if (num[i] < num[i-1]) {
                num[i-1] = num[i];
            }
        }
        
        for(int j=0; j<num.length; j++) {
            System.out.println(num[j]);
        }

        return 0;
    }

    public static void main(String[] args) {
        int[] num = {1,2,10,5,7};
        Ascending(num);
    }
    
}
