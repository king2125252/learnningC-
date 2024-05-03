#include <iostream>

using namespace std;

int gcdLoop(int m, int n){
    for(; n!=0;){
        int tmp = n;
        n = m%n;
        m = tmp;
    }
    return m;
}

int gcdRecursive(int m, int n){
    if(n == 0)return m ;
    return gcdRecursive(n, m%n);
}



int main()
{
    int m, n;
    cout << "please input 2 positive number : ";
    cin >> m >> n;

    cout  << "gcd Loop : "<< gcdLoop(m, n) <<endl;

    cout << "gcdRecursive : " << gcdRecursive(m, n) <<endl;
    return 0;
}
