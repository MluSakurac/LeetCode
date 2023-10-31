/*************************************************************************
	> File Name: 1-LeetCode.c
	> Author: Sakura M Lu 
	> Mail: 
	> Created Time: Tue 31 Oct 2023 07:31:19 PM CST
 ************************************************************************/

int *twoSum(int *nums, int target, int numsSize, int *returnSize){
    for(int i = 0; i < numsSize - 1; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(target != (nums[i] + nums[j])) continue;
            *returnSize = 2;
            int *ret = (int*)malloc(sizeof(int) * (*returnSize));
            ret[0] = i, ret[1] = j;
            return ret;
        }
    }
    *returnSize = 0;
    return NULL;
}
