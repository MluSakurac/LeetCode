bool backspaceCompare(char* s, char* t) {
    char *_s = (char*)calloc(201, sizeof(char));
    char *_t = (char*)calloc(201, sizeof(char));
    int tops = -1, topt = -1;
    for(int i = 0; s[i]; i++){
        if(s[i] == '#'){
            if(tops < 0) continue;
            _s[tops--] = '\0';
        } else {
            _s[++tops] = s[i];
        }
    }
    for(int i = 0; t[i]; i++){
        if(t[i] == '#'){
            if(topt < 0) continue;
            _t[topt--] = '\0';
        } else {
            _t[++topt] = t[i];
        }
    }
    return (strcmp(_s, _t) == 0);
}
