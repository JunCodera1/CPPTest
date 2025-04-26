#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Khoi tao struct sinh vien
struct SinhVien {
public:
    string ten;
    float diemToan;
    float diemLy;
    float diemHoa;

    float tinhDiemTB() const {
        return (diemToan + diemLy + diemHoa) / 3;
    }
};

//Ham kiem tra neu diem lon hon 8
bool isGreaterThanEight(float averagePoint) {
    return averagePoint >= 8;
}

// ham in ra danh sach sinh vien co diem lon hon 8
void printSinhVienGreaterThanEight(const vector<SinhVien>& ds) {
    cout << "\n--- Danh sach sinh vien co diem trung binh >= 8 ---\n";
    // Lap qua tung sinh vien trong danh sach de lay diem trung binh neu lon hon 8
    for (const auto& sv : ds) {
        float avg = sv.tinhDiemTB();
        if (isGreaterThanEight(avg)) {
            cout << "Ho ten: " << sv.ten << ", Diem TB: " << avg << endl;
        }
    }
}

int main() {
    int n;
    cout << "Nhap vao so luong sinh vien: ";
    cin >> n;

    if (n < 0) {
        cout << "So luong khong hop le";
        return 0;
    }
    if (n == 0) {
        cout << "Danh sach rong";
        return 0;
    }

    // Khoi tao mang de luu cac sinh vien trong danh sach
    vector<SinhVien> sinhviens(n);
    cout << "Nhap vao thong tin cua tung sinh vien:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien " << i + 1 << ":\n";
        cin.ignore();
        cout << "Ho va Ten: ";
        getline(cin, sinhviens[i].ten);
        cout << "Diem Toan: ";
        cin >> sinhviens[i].diemToan;
        cout << "Diem Ly: ";
        cin >> sinhviens[i].diemLy;
        cout << "Diem Hoa: ";
        cin >> sinhviens[i].diemHoa;
    }

    // In ra thong tin cua nhung sinh vien co diem tren 8
    printSinhVienGreaterThanEight(sinhviens);

    return 0;
}
