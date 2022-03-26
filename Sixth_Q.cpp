#include <iostream>
using namespace std;

int result = 0;

int sumOfDagits(int num) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }

        return sum;
    }

int main() {
    int N,A,B;
    cin >> N >> A >> B;

    for (int i = 1; i <= N; i++) {
        int sum = sumOfDagits(i);
        if (A <= sum && sum <= B) {
            result += i;
        }
    }

    cout << result << endl;

    return 0;
}