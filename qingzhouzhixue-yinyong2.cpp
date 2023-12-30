//
// Created by leiqi on 2023/12/30.
//

#include <iostream>
#include <vector>
using namespace std;
int myFindCnt(const vector<int> &arr, int val, int &cnt)
{
    //to do
    int lens = arr.size();
    vector<int> tmpRes;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == val) {
            tmpRes.push_back(i);
        }
    }
    cnt = tmpRes.size();
    if (cnt != 0) {
        return tmpRes[0];
    }
    return lens;
}
int main()
{
    vector<int> arr = {1, 2, 6, 1, 3, 4, 2, 4, 3};
    int cnt;
    std::cout << myFindCnt(arr, 3, cnt) << std::endl;
    std::cout << cnt << std::endl;
}