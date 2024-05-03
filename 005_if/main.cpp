#include <iostream>

using namespace std;

int main()
{
    int i ;
    cout << "請輸入一個分數(0 ~ 100) : ";
    cin >> i ;

    if( i < 0 || i > 100){ //true block
        cout << "輸入錯誤，請輸入(0 ~ 100) " << endl;
    }else if (i < 60){
        cout << "您的分數為 : " << i << "成績為 : F" << endl;
    }else if(i >= 60 && i < 70){
        cout << "您的分數為 : " << i << "成績為 : E" << endl;
    }else if(i >= 70 && i < 80){
        cout << "您的分數為 : " << i << "成績為 : D" << endl;
    }else if(i >= 80 && i < 90){
        cout << "您的分數為 : " << i << "成績為 : B" << endl;
    }else if(i >= 90 && i <= 100){
        cout << "您的分數為 : " << i << "成績為 : A" << endl;
    }else{// false block
        cout << "請輸入數字" << endl;
    }
    return 0;
}
