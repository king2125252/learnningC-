#include <iostream>

using namespace std;

int main()
{
    int i = 5;
    //實數
    float f = 5;
    double d = 5;
    char c = 'a';
    bool b = false;
    /*data type:
        1. sizeof(var.)
        2. data format:
                int : 2's complement<-> bit pattern 010111....
                float : IEEE-754
    */
        cout << "sizeof int : " << sizeof(i) << endl;
        cout << "sizeof float : " << sizeof(f) << endl;
        cout << "sizeof double : " << sizeof(d) << endl;
        cout << "sizeof char : " << sizeof(c) << endl;
        cout << "sizeof boolean : " << sizeof(b) << endl;

        cout << i + d << endl; // double : 10.0
        cout << i / 2 << endl; // int : 2
        cout << i + c << endl; // int : 5+97 --> 102
        cout << i + b << endl; // false -> 0, true -> 1, int : 5 + 1 --> 6
        cout << f / 2 << endl; // float: 5.0 / 2.0 --> 2.5
        cout << d / 2 << endl; // double: 5.0 / 2.0

        //運算式(expression) : 運算元 運算子 運算元  :  23 + 5  -->  答案 ( 資料型態 )

        // 邏輯值 : true, false:運算子 : &&(AND) ||(OR)  ! (NOT)
        //數值如何轉成邏輯值 : 0 轉成false ，不是0(1, 2, -22) 轉成 true
        cout << c + 0 << endl;
        cout << (b && 0) << endl;
        cout << (b && -12) << endl;

        //會產生邏輯值得運算子 : 比較運算子 ==, !=, <, >, <=, >=
        //左右兩邊的運算元要同資料型態
        cout << (12 > 7) << endl; // true
        cout << (23 < 12) << endl; //false
        cout << (12 == 7) << endl;// false
        cout << (12 != 7) << endl; //ture

    cout << "Hello world!" << endl;
    return 0;
}
