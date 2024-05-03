#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void bubbleSort(int n, int* score, int countPerLine, int widthPerNum);


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
    bubbleSort(n, score, 10, 6);
    return 0;
}


void bubbleSort(int n, int* score, int countPerLine=10, int widthPerNum = 6){
     cout << " Bubble Sort : " << endl;
   bool hasChange = true;
        for (; hasChange;){
            hasChange = false;
            for (int i = 0; i < n - 1; i++){
                if (score[i] > score[i + 1]){
                    swap(score[i] , score[i + 1]);
                    hasChange = true;
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
