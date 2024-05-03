#include <iostream>

using namespace std;

int bin2DecRecr1(string bin, int L, int R){
    int x = bin[R]-'0';
    if(L==R)return x;
    return bin2DecRecr1(bin, L, R-1)*2+x;]**//78//
}

int bin2DecRecr2(string bin, int L, int R, int prev){
    int x = bin[L]-'0';
    int y = prev*2+x;
    if(L==R)return y;
    return bin2DecRecr2(bin, L+1, R, y);
}

int bin2DecRecr3(string bin, int L, int R, int m){
    int x = m*(bin[R]-'0');
    if(L==R)return x;
    return bin2DecRecr3(bin, L, R-1, m*2)+x;
}



int main()
{
    string bin = "1101";
    cout << "please enter a binary number : ";
    cin >> bin;

    int bToD1 = bin2DecRecr1(bin, 0, bin.size()-1);
    int bToD2 = bin2DecRecr2(bin, 0, bin.size()-1, 0);
    int bToD3 = bin2DecRecr3(bin, 0, bin.size()-1, 1);

    cout << "bToD1 : " << bToD1 << endl;
    cout << "bToD2 : " << bToD2 << endl;
    cout << "bToD3 : " << bToD3 << endl;

    cout << "Hello world!" << endl;
    return 0;
}
