// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    float a = 0, b = 0, c = 0, t = 0;
    int a1 = 0, a2 = 0,a3=0,a4=0;
    cout << "bai so : ";
    cin >> n;
    switch (n) {
    case 1:
        cout << "nhap 3 so xuat ra thu tu tang dan cac chu so\n";
        cout << "nhap 3 so : "<<endl;
        cout << "nhap a: ";
        cin >> a;
        cout << "nhap b: ";
        cin >> b;
        cout << "nhap c: ";
        cin >> c;
        if (a > b) {
            t = a;
            a = b;
            b = t;
        }
        if (a>c) {
            t = c;
            c = a;
            a = t;
        }
        if (b>c) {
            t = b;
            b = c;
            c = t;
        }
        cout << "sap theo thu tu tang dan : " << a << b << c;
        break;
    case 2:
        cout << "nhap hai so nguyen :\n"<<"Nhap a1 : ";
        cin >> a1;
        cout << "nhap a2 : ";
        cin >> a2;
        cout << "Tong : "<<a1+a2<<endl;
        cout << "hieu : " << a1 - a2<<endl;
        cout << "tich : " << a1 * a2<<endl;
        cout << "thuong: " << a1 / a2<<endl;
        break;
    case 3:
        cout << "nhap so nguyen co 3 chu so :\n";
        cin >> a1;
        a2 = a1 / 100;
        a3 = a1%100 / 10;
        a4 = a1 % 10;
        if ((a2 > a3) && (a2 > a4)) {
            cout << "chu so lon nhat o vi tri thu nhat";
        }
        else if ((a3 > a2) && (a3 > a4)) {
            cout << "chu so lon nhat o vi tri thu hai";
        }
        else if ((a4 > a3) && (a4 > a2)) {
            cout << "chu so lon nhat o vi tri thu ba";
        }
        else {
            cout << "khong co chu so lon nhat";
        }
        break;
    case 4:
        cout << "ve hinh chu nhat bang dau *, chieu dai chieu rong do nguoi dung nhap\n";
        cout << "nhap chieu dai : ";
        cin >> a1;
        cout << "nhap chieu rong : ";
        cin >> a2;
        for (int i = 0; i < a2; i++) {
            for (int j = 0; j < a1; j++) {
                if (i == 0) {
                    cout << " * ";
                }
                else if (i == a2 - 1) {
                    cout << " * ";
                }
                else {
                    if (j == 0) {
                        cout << " * ";
                    }
                    else if (j == a1 - 1) {
                        cout << " * ";
                    }
                    else {
                        cout << "   ";
                    }
                }
            }
            cout << endl;
        }
        break;
    case 5:

        break;
    }
    return 0;
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
