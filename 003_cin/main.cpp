#include <iostream>

using namespace std;

int main()
{
     int input1, input2;
    cin >> input1 >> input2; // cin 鍵盤輸入

    // sizeof 查看 佔記憶體多大
    cout << "bytes of int"<< sizeof( int ) << endl;// endl : end Line 換行符號
    cout << "bytes of input1 " <<  sizeof( input1 ) << endl;

    cout << "input1  的值  " << input1 << endl;
    cout << "input2  的值  " << input2 << endl;
    return 0;
}
