/*
����һ������Ϊ n ���ַ��������дһ�������жϸ��ַ����Ƿ���ġ�����ǻ����뷵��true�����򷵻�false��

�ַ�������ָ���ַ������������������ַ�һ�¡�

���ݷ�Χ��0 < n ��1000000
Ҫ�󣺿ռ临�Ӷ� O(1)��ʱ�临�Ӷ� O(n)
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool judge(string str) {
        int left = 0;  //��ָ��
        int right = str.length() - 1;  //βָ��
        //��β���м俿
        while (left < right) {
            if (str[left] != str[right])  //�Ƚ�ǰ���Ƿ���ͬ
                return false;
            left++;
            right--;
        }
        return true;
    }
};
