#include <iostream>
#include <set>


int main(){
    int n;
    std::cout << "Nhap vao so phan tu : ";
    // Nhap vao so luong phan tu
    std::cin >> n;
    // Khoi tao bien set
    std::set<int> s;
    // Tao vong lap de them phan tu vao set
    for(int i = 0; i < n; i++){
        std::cout << "Nhap vao phan tu thu "<< i + 1<<": ";
        int value;
        //Nhap vao gia tri phan tu
        std::cin >> value;
        s.insert(value);
    }

    for(int x : s){
        std::cout << x << " ";
    }
    return 0;
}