//剑指
//数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
// 例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int len=numbers.size();
        int i=0;
        int flag2=0;
        for(;i<len;i++){
            int flag=0;
            for(int j=0;j<len;j++){
                if(numbers[j]==numbers[i]){
                    flag++;
                }

                if(float(flag)>float (len)/2){
                    flag2=1;
                    break;
                }

            }
            if(flag2==1)
                break;
        }
        if(flag2==1)
            return numbers[i];
        else{
            return 0;
        }

    }
};
int main(void){
    vector<int> numbers;
    numbers.push_back(4);
    numbers.push_back(2);
    numbers.push_back(1);
    numbers.push_back(4);
    numbers.push_back(2);
    numbers.push_back(4);
//    numbers.push_back(5);
//    numbers.push_back(2);
//    numbers.push_back(3);
    Solution solution;
    int i=solution.MoreThanHalfNum_Solution(numbers);
    cout<<i<<endl;

}

//调试成功！
