#include <iostream>

using namespace std;

void strLoop(string& str){
    for( int i = 0, j = str.size() - 1; i < j ; ++i, --j){
        swap(str[i], str[j]);
    }
}

void strRecursive(string& str, int l, int r){

    if(l >= r)return;
    swap(str[l], str[r]);
    strRecursive(str, ++l, --r);
}



int main()
{

    string str;
    cout << "Please enter a string : ";
    cin >> str;
    strLoop(str);
    cout << "string Reverse String  Loop  : " << str << endl;
    strRecursive(str, 0, str.size()-1);
    cout << "string Reverse String   Recursive : " << str << endl;

    return 0;
}
