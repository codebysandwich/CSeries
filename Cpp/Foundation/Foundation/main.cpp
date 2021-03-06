/**
 * File              : main.cpp
 * Author            : sandwich <122079260@qq.com>
 * Date              : 2021-11-23 09:46:24
 * Last Modified Date: 2021-11-23 09:52:34
 * Last Modified By  : sandwich <122079260@qq.com>
 */
//
//  main.cpp
//  Foundation
//
//  Created by 蔡志明 on 2021/10/9.
//  演示C++基础语法
//

#include "./header/cmath.h"
#include "./header/math.h"
#include <iostream>
#include <string>

using namespace std;

const int MONTHS = 12;

// Function Prototype
double stonetolib(double stone);
int GetMonths(int years);

int main(int argc, const char *argv[]) {
  // insert code here...
  string user_name;
  cout << "please enter your name: ";
  cin >> user_name;
  cout << "hello " << user_name << " welcome!" << endl;

  cout << endl << "please enter you numbers to Sum(split with space): ";

  // 构造函数语法
  int sum(0);
  int i;
  while (cin >> i) {
    sum += i;
    if (cin.peek() == ' ') {
      cin.get();
    }
    if (cin.peek() == '\n') {
      break;
    }
  }
  cout << "your numbers sum is: " << sum << endl;

  // 演示头文件及导入，演示命名空间使用
  cout << "math: " << Multify(3, 4) << "  cmath: " << cm::Mean(3, 6)
       << "  cmath: " << cm::Multify(2, 3) << endl;

  cout << "Enter the weight in stone: ";
  double sts;
  cin >> sts;
  cout << sts << " stone = " << stonetolib(sts) << " pounds" << endl;

  cout << "test const type: " << GetMonths(3) << endl;

  return 0;
}

double stonetolib(double stone) { return 14 * stone; }

int GetMonths(int years) { return MONTHS * years; }
