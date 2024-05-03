
#include <iostream>

using namespace std;

int bin2DecLoop1(string bin){
    int ans =0;
    for(unsigned i = 0; i < bin.size(); ++i){
        int x = bin[i]-'0';
        ans = ans*2+x;
    }
    return ans;
}

int bin2DecLoop2(string bin){
    int n = bin.size(), m = 1, ans=0;
    for(int i = n-1; i >= 0; --i, m *= 2){
        int x = bin[i] - '0';
        ans = ans + m*x;
    }
    return ans;
}

int bin2DecRecr1(string bin, int L, int R){
    int x = bin[R]-'0';
    if(L==R)return x;
    return bin2DecRecr1(bin, L, R-1)*2+x;
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
    string bin;
    cout << "please input binary 6 or 8 number to Dec : ";
    cin >> bin;
    int ans1 = bin2DecLoop1(bin);
    cout << "ans1 = " << ans1 << endl;

    int ans2 = bin2DecLoop2(bin);
    cout << "ans2 = " << ans2 << endl;


    int bToD1 = bin2DecRecr1(bin, 0, bin.size()-1);
    int bToD2 = bin2DecRecr2(bin, 0, bin.size()-1, 0);
    int bToD3 = bin2DecRecr3(bin, 0, bin.size()-1, 1);

    cout << "bToD1 : " << bToD1 << endl;
    cout << "bToD2 : " << bToD2 << endl;
    cout << "bToD3 : " << bToD3 << endl;
    return 0;
}
