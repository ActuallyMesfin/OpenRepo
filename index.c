
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    nums[5] = {1, 2, 3, 4, 5};
    target = 3;
    numsSize = sizeof(nums);

    for(int i < numsSize; i = 0; i++){
        for(int j; j = 0; j++){
            if(nums[i] + nums[j] == target){
                return("[%d, %d]", i, j);
            }
        }
    }

}