//
//  main.cpp
//  HexOct
//
//  Created by 蔡志明 on 2021/10/26.
//

#include <iostream>
#include <sstream>

std::string Int2Hex(int value);

int main()
{
    using namespace std;
    
    int chest = 42;
    int wasit = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in deciaml)" << endl;
    cout << "waist = " << wasit << " (0x42 in hex)" << endl;
    cout << "inseam = " << inseam << " (042 in octal)" << endl;
    
    chest = 42;
    wasit = 42;
    inseam = 42;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;
    cout << "waist = " << wasit << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    cout << "88 = 0x" << Int2Hex(88) << " in Hex" << endl;
    return 0;
}

std::string Int2Hex(int value) {
    using namespace std;
    
    stringstream ioss;
    ioss << hex << value;
    string temp;
    ioss >> temp;
    return temp;
}
