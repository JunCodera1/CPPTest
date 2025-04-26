#include <iostream>
#include <vector>
#include <algorithm>

bool isDivideThree(int n){
    return n % 3 == 0;
}

int main(){
    int n;
    std::cin >> n;
    // Khởi tạo vector để lưu mảng
    std::vector<int> a(n);
    // Khởi tạo biến để lưu số lớn nhất ở giá trị nhỏ nhất
    int maxNum = -1e9; 
    // Nhập vào mảng
    for(int i = 0; i < n; i++){
        std::cout << "Nhap phan tu so a[" << i << "]:";
        std::cin >> a[i];
    }
    // Lặp để tìm số lớn nhất và chia hết cho 3
    for(int i = 0; i < n; ++i){
        if(isDivideThree(a[i])){
            maxNum = std::max(maxNum, a[i]);
        }
    }
    if (maxNum == -1e9) {
        std::cout << "Khong co so nao chia het cho 3.";
    } else {
        std::cout << "So lon nhat chia het cho 3 la: " << maxNum;
    }
    return 0;
}
