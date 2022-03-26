#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    int array[101];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    sort(array, array + N, greater<int>());
    int Alice = 0;
    int Bob = 0;
    for (int i = 0; i < N; i++){
        if (i % 2 == 0) Alice += array[i];
        else Bob += array[i];
    }

    cout << Alice - Bob << endl;

    return 0;

}