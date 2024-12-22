/*
* https://leetcode.com/problems/search-insert-position/
* Vitória M. S. Lucia
*/

int searchInsert(int* nums, int numsSize, int target) {
    int j = 0;

    for ( int i = 0; i < numsSize ; i++ ){
        if ( nums[i] == target ){
            return i;
        }
    }

    for ( int i = 0; i < numsSize ; i++){
        if ( i != numsSize-1 && nums[i] < target && nums[i+1] > target){
            return i+1;
        }
    }

    if (nums[numsSize - 1] < target){
        return numsSize;
    }

    if (nums[0] < target){
        return 0;
    }
    return 0;
}