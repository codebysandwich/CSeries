//
//  main.cpp
//  Exceed
//
//  Created by 蔡志明 on 2021/10/26.
//

#include <iostream>
#define ZERO 0
#include <climits>

/*
 数据溢出后的表现像是一个圈
 */
int main() {
    using namespace std;
    
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each count." << endl << "Now ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Take $1 from each count." << endl << "Now ";
    sam -= 1;
    sue -= 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars depsited." << endl << "Lucky Sue!" << endl;
    
    
    return 0;
}
