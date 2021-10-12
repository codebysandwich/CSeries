//
//  main.cpp
//  Foundation
//
//  Created by 蔡志明 on 2021/10/9.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string user_name;
    cout << "please enter your name: ";
    cin >> user_name;
    cout << "hello "
         << user_name
         << " welcome!" << endl;
    
    cout << endl
         << "please enter you numbers to Sum(split with space): ";
    
    int sum = 0;
    int i = 0;
    while (cin >> i) {
        sum += i;
        if (cin.peek() == ' ') {
            cin.get();
        }
        if (cin.peek() =='\n') {
            break;
        }
    }
    cout << "your numbers sum is: " << sum << endl;
    
    return 0;
}
