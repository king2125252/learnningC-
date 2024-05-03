#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "請輸入2個整數 : ";
    cin >> a >> b;

    cout << "( a , b ) = ( " << a << ", " << b << " )" << endl;
    //要由小到大顯示數字
    if(a >= b){
        cout << b << ", " << a << endl;
    }else {
        cout << a << ", " << b << endl;
    }

    cout << "( a , b ) = ( " << a << ", " << b << " )" << endl;

    // 讓a是比較小的數字，b是比較大的數字
    if (a > b){
        int t = a;
        a = b;
        b = t;
        //swap(a, b); swap 是 c++ 內建的函式
        //swap(b, a);
        /*
        int t = b;
        b = a;
        a = t;
        */
    }
    cout << "( a , b ) = ( " << a << ", " << b << " )" << endl;


    return 0;
}
