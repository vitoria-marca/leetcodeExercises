/*
 * https://leetcode.com/problems/remove-element/
 * Vitória M. S. Lucia
 */

int removeElement(int* nums, int numsSize, int val) {
    if ( numsSize == 0 ){
        return numsSize;
    }

    int k = 0;
    for ( int i= 0; i < numsSize ; i++ ){
        if ( nums[i] !=  val ){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}