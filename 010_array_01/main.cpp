#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
    //srand((unsigned)time(NULL));

    cout << "RAND_MAX : " << RAND_MAX << endl;
    const int n = 40;
    int score[n];

    for(int i = 0; i < n; i++){
	int x = rand();
	x = x % 101;
    	score[i] = x;
	if(i % 10 == 0){
	    cout << endl;
	}
	cout << setw(6) << score[i];

    }
    cout << endl << endl;
    int max = score[0], min = score[0];
    for(int i = 0; i < n; i++){
   	if( score[i] > max ) {
	    max = score[i];
	}
   	if( score[i] < min ) {
	    min = score[i];
	}

    }
    cout << "( min, max ) : ( " << min << ", " << max << " ) " << endl;
    return 0;
}
