/*
 * https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * Vitória M. S. Lucia
 */

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0){
        return 0;
    }
    
    int k = 1;

    for (int i=0; i<numsSize - 1; i++){
        if (nums[i] != nums[i+1]){
            nums[k] = nums[i+1];
            k++;
        }
    }

    return k;
}