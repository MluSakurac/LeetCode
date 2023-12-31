int removeElement(int* nums, int numsSize, int val) {
    int left = 0, right =numsSize;
    while (left < right) {
        if (nums[left] == val) {
                nums[left] = nums[right - 1];
                right --;
        } else {
            left += 1;
        }
    }
    return left;
}
