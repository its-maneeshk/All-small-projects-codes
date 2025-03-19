/*
Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 */

public class Leetcode121MaxProfit {

    static int maxProfit(int[] prices) {
        int buy = prices[0];
        int sell = prices[0];
        int profit = 0;
        int i,j;
        int size = prices.length;
        for(i=1; i<size; i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            }
        }
        for(j=1; j<size; j++) {
            if(prices[j] > sell) {
                if(sell > buy) {
                    profit = sell-buy;
                }
            }
        }
        return profit;
    }

    public static void main(String[] args) {
        int[] pricesList = {7,1,5,3,6,4};
        int result = maxProfit(pricesList);
        System.out.println(result);
        
    }
}