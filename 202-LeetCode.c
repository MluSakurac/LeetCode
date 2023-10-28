/*************************************************************************
	> File Name: 202-LeetCode.c
	> Author: Sakura M Lu 
	> Mail: 
	> Created Time: Sat 28 Oct 2023 12:58:08 PM CST
 ************************************************************************/

#define NEXT_NUM(n) ({\
    int _sum = 0, _n = (n), _d;\
    while(_n){\
        _d = _n % 10;\
        _sum += _d * _d;\
        _n /= 10;\
    }\
    _sum;\
})

bool isHappy(int n){
    int a = n, b = n;
    while(a != 1){
        a = NEXT_NUM(NEXT_NUM(a));
        b = NEXT_NUM(b);
        if(a == b && a != 1 && b != 1) return false; 
    }
    return true;
}
