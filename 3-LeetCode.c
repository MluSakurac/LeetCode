int lengthOfLongestSubstring(char* s) {
    if(strlen(s) < 2) return (int)strlen(s);
    int *hash = (int*)calloc(50000, sizeof(int));
    int ans = 0, pos = 0;
    char *head = s, *tail = s;
    while(*tail){
        tail += 1;
        char *p = head;
        while(*p != *tail && *tail) p += 1;
        if(p != tail) {
            hash[pos++] = (int)(tail - head);
            head = p + 1;
        }
    }
    for(int i = 0; i < pos; i++){
        if(ans < hash[i]) ans = hash[i];
    }
    return ans;
}
