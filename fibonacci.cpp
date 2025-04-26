#include <iostream>

// Tính fib bằng phương pháp đệ quy
int fib(int n){
    //neu so nhap vao <= 1 thi tong fib la chinh so do
    if(n <= 1){
        return n;
    }
    //Khoi tao de quy
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    std::cout << "Nhap vao so de tinh tong fibonacci"<< "\n";
    std::cin >> n;
    std::cout << "Tong fibonacci cua " << n << " la: " << fib(n);
    return 0;
}