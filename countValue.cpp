#include <iostream>
#include <set>


int main(){
    int n;
    std::cout << "Nhap vao so phan tu : ";
    std::cin >> n;
    std::set<int> s;
    for(int i = 0; i < n; i++){
        std::cout << "Nhap vao phan tu thu "<< i + 1<<": ";
        int value;
        std::cin >> value;
        s.insert(value);
    }

    for(int x : s){
        std::cout << x << " ";
    }
    return 0;
}