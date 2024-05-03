#include <iostream>
#include <iomanip>
#include <cstdlib> // 亂數
#include <ctime>   // 時間

using namespace std;

void showArray(int *ary, int n, const string &sortName = "")
{
    cout << "Array after " << sortName << " sort: ";
    for (int i = 0; i < n; i++)
    {
        if (i % 10 == 0)
        {
            cout << endl;
        }
        cout << setw(5) << ary[i];
    }
    cout << endl
    << endl;
}


int findMin(int *ary, int a, int b)
{
    int theMin = ary[a];
    for (int i = a + 1; i <= b; i++)
    {
        if (ary[i] < theMin)
        {
            theMin = ary[i];
        }
    }
    return theMin;
}

int findMax(int *ary, int a, int b)
{
    int theMax = ary[a];
    for (int i = a + 1; i <= b; i++)
    {
        if (ary[i] > theMax)
        {
            theMax = ary[i];
        }
    }
    return theMax;
}

int findMaxRecr1(int* ary, int a, int b){
    if(a==b) return ary[a];
    int max0 = findMaxRecr1(ary, a+1, b);
    return max0 > ary[a] ? max0 : ary[a];
}

int findMaxRecr2(int* ary, int a, int b){
    if(a==b) return ary[b];
    int max0 = findMaxRecr2(ary, a, b-1);
    return max0 > ary[b] ? max0 : ary[b];
}

int findMaxRecr3(int* ary, int a, int b){
    if(a==b) return ary[b];
    int m = (a+b)/2;
    int max0 = findMaxRecr3(ary, a, m);
    int max1 = findMaxRecr3(ary, m+1, b);
    return max0 >max1 ? max0 : max1;
}

int main()
{
    cout << "RAND_MAD: " << RAND_MAX << endl;
    srand((unsigned)time(NULL)); // (seed of random)不清楚

    const int n = 40;
    int score[n];

    for (int i = 0; i < n; i++)
    {
        score[i] = rand() % 101;
    }
    cout << endl;

    showArray(score , n);

    int a = 10;
    int b = 19;
    int max0 = findMax(score, a, b);
    int max1 = findMaxRecr1(score, a, b);
    int max2 = findMaxRecr2(score, a, b);
    int max3 = findMaxRecr3(score, a, b);

    cout << "max0:" << max0 << endl;
     cout << "max1:" << max1 << endl;
     cout << "max2:" << max2 << endl;
    cout << "max3:" << max3 << endl;
}
