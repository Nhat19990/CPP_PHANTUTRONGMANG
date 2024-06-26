// CPP_PHANTUTRONGMANG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<math.h>
using namespace std;
#define MAX 5

void nhap(int a[], int& n)
{
    //sử dụng vòng lặp do..while() để yêu cầu người dùng nhập vào số phần tử của mảng
    do
    {
        cout << "\nNhap so phan tu: ";
        cin >> n;
        //nếu số phần tử không hợp lệ thì in ra màn hình
        if (n <= 0 || n > MAX)
        {
            cout << "\nSo phan tu khong hop le";
        }
    } while (n <= 0 || n > MAX);
    //dùng vòng lặp for để nhập các giá trị cho mảng
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap a[" << i << "]: ";
        cin >> a[i];
    }
}
/* hàm xuất các giá trị trong mảng ra màn hình */
void xuat(int a[], int n)
{
    cout << "cac phan tu trong mang la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}

int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
