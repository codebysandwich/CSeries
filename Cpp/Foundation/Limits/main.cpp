//
//  main.cpp
//  Limits
//
//  Created by 蔡志明 on 2021/10/25.
//

#include <iostream>
#include <climits>

using namespace std;
int main() {
    int max_int = INT_MAX;
    short max_short = SHRT_MAX;
    // MacOS long好像等价long long
    long max_long = LONG_MAX;
    long long max_llong = LONG_LONG_MAX;
    
    // sizeof函数，计算类型或者变量的大小，单位为字节
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof max_short << " bytes." << endl;
    cout << "long is " << sizeof max_long << " bytes." << endl;
    cout << "long long is " << sizeof max_llong << "bytes." << endl;
    cout << endl;
    
    cout << "Maximum values: " << endl;
    cout << "int: " << max_int << endl;
    cout << "short: " << max_short << endl;
    cout << "long: " << max_long << endl;
    cout << "long long: " << max_llong << endl;
    cout << endl;
    
    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte is " << CHAR_BIT << endl;
    return 0;
}
