//
//  main.cpp
//  TempConvert
//
//  Created by 蔡志明 on 2021/10/21.
//

#include <iostream>

using namespace std;

double Cel2Fah(double celsius);

/*
 主程序入口
 */
int main() {
    double celsius;
    cout << "Please enter a celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is "
         << Cel2Fah(celsius) << " degrees Fahrenheit."
         << endl;
}

double Cel2Fah(double celsius) {
    return celsius * 1.8 + 32.0;
}
