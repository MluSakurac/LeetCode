int min(int a, int b){
    return a < b ? a : b;
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    if(nums1Size == 0) {
        if(nums2Size % 2 == 0){
            return (double)(nums2[nums2Size / 2 - 1] + nums2[nums2Size / 2]) / 2.0;
        } else {
            return (double)nums2[nums2Size / 2];
        }
    }
    if(nums2Size == 0) {
        if(nums1Size % 2 == 0){
            return (double)(nums1[nums1Size / 2 - 1] + nums1[nums1Size / 2]) / 2.0;
        } else {
            return (double)nums1[nums1Size / 2];
        }
    }
    double mid;// 定义double返回值
    int m = nums1Size + nums2Size;//定义新数组长度
    int *arr = (int*)calloc(m, sizeof(int));//定义新数组初始化成0
    for(int i = 0, j = 0, k = 0; i < m; i++){
        int a = nums1[j], b = nums2[k];
        if(a < b) {
            arr[i] = a;
            j += 1;
        } else {
            arr[i] = b;
            k += 1;
        }
        if(j == nums1Size) {
            int r = i + 1;
            while(k < nums2Size) arr[r++] = nums2[k++];
            break;
        }
        if(k == nums2Size) {
            int r = i + 1;
            while(j < nums1Size) arr[r++] = nums1[j++];
            break;
        }
    }
    if(m % 2 == 0) {
        double x = (double)arr[m / 2 - 1], y = (double)arr[m / 2];
        mid = (x + y) / 2.0;
    }
    else mid = (double) arr[m / 2];
    return mid;
}
