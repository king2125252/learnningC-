#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffleSort(int n, int* score, int countPerLine, int widthPerNum);


int main()
{
    cout << "RAND_MAX : " << RAND_MAX << endl;
    const int n = 40;
    int score[n];

    for(int i = 0; i < n; i++)
    {
        int x = rand();
        x = x % 101;
        score[i] = x;
        if(i % 10 == 0)
        {
            cout << endl;
        }
        cout << setw(6) << score[i];
    }
        cout << endl << endl;
    shuffleSort(n, score, 10, 6);
    return 0;
}


void shuffleSort(int n, int* score, int countPerLine=10, int widthPerNum = 6){
     cout << " shuffle Sort : " << endl;
 for(int run = 0; run<n-1; ++run){
        int x = rand()%(n-1-run+1) + run;
            swap(score[run], score[x]);
        }
      for(int i = 0; i < 40; i++)
    {
        if(i % countPerLine == 0)
        {
            cout << endl;
        }
        cout << setw(widthPerNum) << score[i];
    }
    return;
}
