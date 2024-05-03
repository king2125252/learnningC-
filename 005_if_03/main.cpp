#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "請輸入3個整數 : ";
    cin >> a >> b >> c;

    cout << "( a, b, c  ) = ( " << a << ", " << b << ", " << c << " )" << endl;
    //顯示最大的數字
    int m = a;
    if( m < b ){
        m = b;
    }

    if( m < c){
        m = c;
    }
    cout << "最大值 : " << m << endl;

    //顯示最小值
    int s = a;
    if( s > b) {
        s = b;
    }

    if(s > c) {
        s = c;
    }

    cout << "最小值 : " << s << endl;


    //要由小到大顯示數字
    // 將越大的數字往右排
    // 如果 a > b   a b 交換
    if(a > b){
//        int z = a;
//        a = b;
//        b = z;
        swap(a, b);
    }// 如果 a < b 則不動作

    // 再比對 b c
    //如果b > c b c交換
    if(b > c){
//        int x = b;
//        b = c;
//        c = x;
        swap(b, c);
    }
    // 現在 c 最大了
    // 最後 a b 比對
    //a > b a b 交換
    if(a > b){
//        int z = a;
//        a = b;
//        b = z;
        swap(a, b);
    }
    cout << " 以下為交換後   小到大" << endl;
    cout << "(a, b, c) = ( " << a << ", " << b << ", " << c << ") " << endl;

    return 0;
}
