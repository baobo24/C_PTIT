#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int maSV;
    char tenSV[100];
    float diemA;
    float diemB;
    float diemC;
    float tongDiem;
} SinhVien;

int soLuongSinhVien = 0;

void themMoi(SinhVien danhSachSV[]) {
    int soSinhVien;
    scanf("%d", &soSinhVien);
    
    for (int i = 0; i < soSinhVien; i++) {
        SinhVien sv;
        
        sv.maSV = soLuongSinhVien + 1; // Ma sinh vien tu dong tang
        
        scanf("%s", sv.tenSV);
        scanf("%f %f %f", &sv.diemA, &sv.diemB, &sv.diemC);
        
        sv.tongDiem = sv.diemA + sv.diemB + sv.diemC;
        
        danhSachSV[soLuongSinhVien] = sv;
        soLuongSinhVien++;
    }
    
    printf("%d\n", soSinhVien);
}

void capNhatDiem(SinhVien danhSachSV[]) {
    int maSV;
    scanf("%d", &maSV);
    
    int found = 0;
    
    for (int i = 0; i < soLuongSinhVien; i++) {
        if (danhSachSV[i].maSV == maSV) {
            scanf("%f %f %f", &danhSachSV[i].diemA, &danhSachSV[i].diemB, &danhSachSV[i].diemC);
            
            danhSachSV[i].tongDiem = danhSachSV[i].diemA + danhSachSV[i].diemB + danhSachSV[i].diemC;
            
            found = 1;
            break;
        }
    }
    
    if (found) {
        printf("%d\n", maSV);
    } else {
        printf("Khong tim thay sinh vien voi ma %d.\n", maSV);
    }
}

int compareSinhVien(const void* a, const void* b) {
    SinhVien* sv1 = (SinhVien*)a;
    SinhVien* sv2 = (SinhVien*)b;
    
    if (sv1->tongDiem < sv2->tongDiem) {
        return -1;
    } else if (sv1->tongDiem > sv2->tongDiem) {
        return 1;
    } else {
        return 0;
    }
}

void hienThiDanhSach(SinhVien danhSachSV[]) {
    qsort(danhSachSV, soLuongSinhVien, sizeof(SinhVien), compareSinhVien);
    
    for (int i = 0; i < soLuongSinhVien; i++) {
        printf("%d %s %.1f %.1f %.1f\n", danhSachSV[i].maSV, danhSachSV[i].tenSV, danhSachSV[i].diemA, danhSachSV[i].diemB, danhSachSV[i].diemC);
    }
}

int main() {
    SinhVien danhSachSV[100];
    
    int chucNang;
    scanf("%d", &chucNang);
    
    while (chucNang != 3) {
        if (chucNang == 1) {
            themMoi(danhSachSV);
        } else if (chucNang == 2) {
            capNhatDiem(danhSachSV);
        }
        
        scanf("%d", &chucNang);
    }
    
    hienThiDanhSach(danhSachSV);
    
    return 0;
}
