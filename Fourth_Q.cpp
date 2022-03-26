#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    int array[250];

    int counter = 0;

    for (int i = 0; i < num; i++) cin >> array[i];

    while (true) {
        bool exist_odd = false;
        for (int i = 0; i < num; i++){
            if(array[i] % 2 != 0) exist_odd = true;
        }
        if(exist_odd == true) break;

        for (int i = 0; i < num; i++) {
            array[i] /= 2;
        }

        counter++;
    }

    cout << counter << endl;

    return 0;
}