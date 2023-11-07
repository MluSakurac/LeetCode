int hIndex(int* citations, int citationsSize) {
    int *cnt = (int*)calloc(citationsSize + 1, sizeof(int));
    for(int i = 0; i < citationsSize; i++){
        if(citations[i] >= citationsSize) {
            cnt[citationsSize] += 1;
        } else {
            cnt[citations[i]] += 1;
        }
    }
    int tot = 0;
    for(int i = citationsSize; i >= 0; i--){
        tot += cnt[i];
        if(tot >= i) return i;
    }
    return 0;
}
