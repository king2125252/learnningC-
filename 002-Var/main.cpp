#include <iostream>

using namespace std;

int main() // 整個程式的進入點，開始執行的地方。 main() --->函數 : function
{// code block
    int i = 5; //向作業系統要求一塊記憶體，並將記憶體取名為 i ，
    /*
            宣告變數 ，會做兩件事情
        1. 跟系統要一塊記憶體，並且取名
        2. 把變數賦值

            變數Variable : 一塊記憶體(大小:byte數)，由資料型態決定
            變數名稱 : 就是給那一塊記憶體 *取名字*
            int : 整數 佔4 Bytes

            = : 設定(拷貝) 運算子，被運算的 稱為 運算元

            變數名稱，有兩種意思
            1. 出現在 左邊 ，那塊記憶體的第1個byte的位址(address)
            2. 其他情況:那塊記憶體的內容值

    */
    cout << "i 的值 : " << i << endl; // endl : end Line 換行符號
    cout << "i的位址 : " <<  &i << endl;
    i = i + 6;
    cout << "i 的值 : " << i << endl;
    cout << "i的位址 : " <<  &i << endl;

  return 0;//在 c++ 每句結尾都必須加入分號( ; )


}
