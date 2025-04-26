#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int x) {
    // Nếu x < 2 thì không phải số nguyên tố
    if (x < 2) return false;
    // Lặp từ 2 đến sqrt(n) để kiểm tra có phải số nguyên tố không
    for (int i = 2; i * i <= x; ++i) {
        // nếu x chia hết cho i thì i là ước số của x nên không phải snt
        if (x % i == 0) return false;
    }
    return true;
}

//Hàm in số nguyên tố
void inSnt(int n) {
    // Trường hợp n <= 2
    if (n <= 2) {
        return;
    }
    // Vòng lặp để check và in ra số nguyên tố từ 2 đến n
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            cout << i << ", ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    inSnt(n);
    return 0;
}
