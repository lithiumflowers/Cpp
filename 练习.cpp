/*
给定一个长度为 n 的字符串，请编写一个函数判断该字符串是否回文。如果是回文请返回true，否则返回false。

字符串回文指该字符串正序与其逆序逐字符一致。

数据范围：0 < n ≤1000000
要求：空间复杂度 O(1)，时间复杂度 O(n)
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool judge(string str) {
        int left = 0;  //首指针
        int right = str.length() - 1;  //尾指针
        //首尾往中间靠
        while (left < right) {
            if (str[left] != str[right])  //比较前后是否相同
                return false;
            left++;
            right--;
        }
        return true;
    }
};
