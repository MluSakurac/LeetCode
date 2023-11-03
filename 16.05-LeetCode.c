/*************************************************************************
	> File Name: 16.05-LeetCode.c
	> Author: Sakura M Lu 
	> Mail: 
	> Created Time: Fri 03 Nov 2023 09:54:20 PM CST
 ************************************************************************/

int tailingZeros(int n){
    if(n < 5) return 0;
    return n / 5 + tailingZeros(n / 5);
}
