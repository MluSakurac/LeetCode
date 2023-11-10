int singleNumber(int* nums, int numsSize) {
    for(int i = 0; i < numsSize; i++){
        for(int j = 1 + i; j < numsSize; j++) {
            if(nums[i] == nums[j]) nums[i] = 0, nums[j] = 0;
        }
    }
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != 0) return nums[i];
    }
    return 0;
}
