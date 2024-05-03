#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void selectionSort(int n, int* score, int countPerLine, int widthPerNum);


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
    selectionSort(n, score, 10, 6);
    return 0;
}


void selectionSort(int n, int* score, int countPerLine=10, int widthPerNum = 6){
     cout << " Selection Sort : " << endl;
        // selection(min position k :[run, k, n-1]) sort
    for(int run =0; run<n-1; run++){
        //find min position :[run, n-1]
        for(int i = run+1; i<n; i++){
            if(score[i]<score[run]){
                swap(score[i], score[run]);
            }
        }
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
