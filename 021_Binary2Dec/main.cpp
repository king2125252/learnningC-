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

int bin2DecRecr(string bin, int L, int R){
    int x = bin[R] - '0';
    if(L==R) return x;
    return bin2DecRecr(bin, L, R-1) *2 +x;
}



int main()
{
    string str;
    cout << "please input binary 6 or 8 number to Dec : ";
    cin >> str;
    int ans1 = bin2DecLoop1(str);
    cout << "ans1 = " << ans1 << endl;

    int ans2 = bin2DecLoop2(str);
    cout << "ans2 = " << ans2 << endl;

    int ans3 = bin2DecRecr(str, 0, str.size() - 1);
    cout << "ans3 ReCr = " << ans3 << endl;
    return 0;
}
