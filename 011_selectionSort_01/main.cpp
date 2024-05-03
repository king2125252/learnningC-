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

int main()
{
    //srand((unsigned)time(NULL));

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
    int max = score[0], min = score[0];
    for(int i = 0; i < n; i++)
    {
        if( score[i] > max )
        {
            max = score[i];
        }
        if( score[i] < min )
        {
            min = score[i];
        }
    }
    cout << "( min, max ) : ( " << min << ", " << max << " ) " << endl;

    // selection(min position k :[run, k, n-1]) sort
    for(int run =0; run<n-1; run++){
        //find min position :[run, n-1]
        for(int i = run+1; i<n; i++){
            if(score[i]<score[run]){
                swap(score[i], score[run]);
            }
        }
    }
    cout << " Selection Sort : " << endl;
    showArray(score,  0, n);
    cout << endl << endl;

    // shuffle(洗牌)
    // 產生範圍 [a, b]的亂數 ==> [0, b-a+1]+a
    //亂數範圍:[0, x]: y%(x-0+1)
    //rand() % (b-a+1) +a
    //[0, 1,2,3,4,5] : n=6
    for(int run = 0; run<n-1; ++run){
        //產生亂數[run, n-1]
        int x = rand()%(n-1-run+1) + run;
            swap(score[run], score[x]);
        }
        cout << "shuffle Order" << endl;
        showArray(score,  0, n);
        cout << endl << endl;

        //Bubble sort
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
        cout << "Bubble Sort" << endl;
        showArray(score,  0, n);
        cout << endl << endl;

        return 0;

}



