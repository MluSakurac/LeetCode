
int maxProduct(char ** words, int wordsSize){
    int ans = 0;
    //定义两个数组，mask[]初始化为0
    int *mask = (int*)calloc(wordsSize, sizeof(int));
    int *length = (int*)malloc(sizeof(int) * wordsSize);
     //存储相应字符串长度
    for(int i = 0; i < wordsSize; i++) length[i] = (int)strlen(words[i]);
    //计算mask各项的值
    for(int i = 0; i < wordsSize; i++) {
        char *temp = words[i];
        for(int j = 0; temp[j]; j++){
            mask[i] |= (1 << (temp[j] - 'a'));
        }
    }
    //计算ans最大值
    for(int i = 0; i < wordsSize - 1; i++){
        for(int j = i + 1; j < wordsSize; j++){
            //有重复字符，直接比较下一个
            if((mask[i] & mask[j]) != 0) continue;
            //没有重复字符的情况
            if(ans < length[i] * length[j]) ans = length[i] * length[j];
        }
    }
    return ans;
}
