/*
 * https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop 
 * Vitória M. S. Lucia
 */ 

int* finalPrices(int* prices, int pricesSize, int* returnSize) {

    for ( int i = 0; i<pricesSize; i++){
        for (int j = i+1; j < pricesSize; j++){
            if (prices[j] <= prices[i]){
                prices[i] = prices[i] - prices[j];
                break; //stop searching 
            }
        }
    }
    *returnSize = pricesSize;

    return prices;
}