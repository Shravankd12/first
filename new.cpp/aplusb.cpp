#include <iostream>

using namespace std;

int Solve(int N, int K) {
    int totalCandlesBurned = 0;
    int burntWax = 0;

    totalCandlesBurned += N;
    burntWax += N;
    N = 0;

    while (burntWax >= K) {
        int newCandles = burntWax / K;
        N += newCandles;
        burntWax %= K;

        totalCandlesBurned += newCandles;

        if (newCandles == 0) {
            break;
        }
    }

    return totalCandlesBurned;
}

int main() {
    int N, K;
    cin >> N;
    cin >> K;

    int out = Solve(N, K);
    cout << out << endl;

    return 0;
}


