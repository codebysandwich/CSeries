//
//  main.cpp
//  FloatNum
//
//  Created by 蔡志明 on 2021/11/9.
//

#include <iostream>

int main() {
    using namespace std;
    // 不截断输出显示
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;
    
    cout << "tub = " << tub
         << ", a million tubs = " << million * tub << endl;
    cout << "and ten millions tubs = " << 10 * million * tub << endl;
    
    cout << "mint = " << mint
         << ", a million mints = " << million * mint << endl;
    
    return 0;
}
