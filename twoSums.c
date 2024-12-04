/**
 * https://leetcode.com/problems/two-sum/
 * Vitória M S Lucia
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i;
    int* indices = malloc(sizeof(int)*2);

    *returnSize = 2;

    if (indices == NULL){
        return NULL;
    }

    for (i=0;  i< numsSize; i++){
        int j;
        for (j=i+1; j<numsSize; j++){
            if (nums[i] +   nums[j] == target){
                indices[0] = i;
                indices[1] = j;

                return indices;
            }
        }
    }

    free(indices);

    return NULL;
}   