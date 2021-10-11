//
//  main.cpp
//  AddArray
//
//  Created by 蔡志明 on 2021/10/11.
//

#include <iostream>

using namespace std;

int AddArray(int data[], int len);
int AddArrayByPoint(int * data, int len);

/*
 主函数入口
 */
int main(int argc, const char * argv[]) {
    // insert code here...
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(data) / sizeof(data[0]);
    int sum = AddArray(data, len);
    cout << "data数组长度: " << len << "数组和: " << sum << endl;
    int sum1 = AddArrayByPoint(data, len);
    cout << "使用指针求和: " << sum1 << endl;
    return 0;
}

int AddArray(int data[], int len) {
    int index;
    int sum = 0;
    for (index = 0; index < len; index++) {
        sum += data[index];
    }
    return sum;
}

int AddArrayByPoint(int * data, int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += *data++;
    }
    return sum;
}
