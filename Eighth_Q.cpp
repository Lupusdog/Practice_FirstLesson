#include <iostream>
using namespace std;

int main() {
    int N;
    int array[110];
    int counter = 0;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> array[i];

    int num[110] = {0};
    for(int i = 0; i < N; i++) num[array[i]]++;   

    for(int i = 0; i <= 100; i++) {
        if(num[i] != 0){
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}