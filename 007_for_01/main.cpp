#include <iostream>

using namespace std;
/*
    迴圈 loop
    C++ : for / while

    當 ( 起始指令(只會做一次);  條件 ; 迴圈指定){ // 條件 : condition boolean expression
        true-block;
        迴圈指令
    }

    for ( ; age > 15; ){

    }

*/
int main()
{
    // 要顯示出1 ~ n 數字
    int n;
    cout << "要顯示出1 ~ n  數字" << endl;
    cout << "請輸入一個整數";
    cin >> n;
    cout << " 每 8 個數字換行" << endl;
    for( int i = 0; i < n; i++){ //i 是這個迴圈的控制變數 0 ~ n - 1
        //0, 1, 2, 3, ........., 9, 0, 1
        cout << i % 10 << "," ;
        if ( i%8==7){
            cout << endl;
        }
    }

    cout << endl << endl;

    cout << " 1 -1 交換 每9個換行" << endl;
    for (int i = 0, j = 1; i < n; i++, j = 0 - j){
        cout << j << ",";
        if(i % 10 == 9){
            cout << endl;
        }
    }

    cout << endl << endl;

    cout << " 0 1 交換 每9個換行" << endl;
    for (int i = 0, j = 1; i < n; i++, j=1-j){
        cout << j << ",";
         if(i % 10 == 9){
            cout << endl;
        }
    }

    return 0;
}
