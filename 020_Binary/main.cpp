#include <iostream>

using namespace std;

string dec2BinLoop(int n, int k){
    string bin("");
    int m = 0;
    for(; n != 0; ){
        int r = n%2;
        n = n/2;
        //bin = string(1, (char)(r+'0'))+bin;
        bin = (char)(r+'0') + bin;
        ++m;
    }
    bin = string(k-m, '0') + bin;
    /*
    for(int i = m+1; i <= k; ++i){
        bin = '0' + bin;
    }
    */
    return bin;
}

string dec2BinRecr(int n, int k){
    char x = (char)(n%2+'0');
    if(n<=1){
        return string(k-1, '0') + x;
    }
    return dec2BinRecr(n/2, k-1)+x;
}



int main()
{
    int n , k;
    cout << "Please input an positive integer and no. of bits: ";
    cin >> n >> k;

    string s1 = dec2BinLoop(n, k);
    cout << "s1 = " << s1 << endl;

     string s2 = dec2BinRecr(n, k);
    cout << "s2 = " << s2 << endl;
    return 0;
}
