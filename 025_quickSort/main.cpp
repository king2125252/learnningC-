#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void showArray(int* ary, int from=0, int to=0, int countPerLine = 10, int widthPerNum = 6){
  for(int i = from; i < to; i++)
    {
        if(i % countPerLine == 0)
        {
            cout << endl;
        }
        cout << setw(widthPerNum) << ary[i];
    }
}

int myPartition(int* a, int left, int right, int p){
    int x = a[p];
    swap(a[p], a[right]); //移至最右
    int s = left;
    for(int i = left; i<=right-1; ++i){
        if(a[i] <= x){
            swap(a[s], a[i]);
            ++s;
        }
    }
    swap(a[right], a[s]); //移回來
    return s;
}

void sortQuick(int* a, int l, int r){
    if(l >= r)return;
    int cut = myPartition(a, l, r, l);
    sortQuick(a, l, cut-1);
    sortQuick(a, cut+1, r);
}


int main()
{
    srand((unsigned)time(NULL)); //seed of random
    cout << "RAND_MAX : " << RAND_MAX << endl;
    const int n = 20;
    int score[n];
    for(int i = 0; i < n; i++){
        int x = rand();
        x = x % 101;
        score[i] = x;
    }
    showArray(score, 0, n);

    int cut = myPartition(score, 0, n-1, 0);
    cout << endl;
    cout << "cut : " << cut << endl;

    showArray(score, 0, n);
    sortQuick(score, 0, n);
    cout << endl;
    showArray(score, 0, n);
    return 0;
}



