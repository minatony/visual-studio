#include "student.h"
#include<iostream>
using namespace std;
void student::nhap() {
	cout << "nhap ho ten : ";
	cin >>this->name;// tac dung tuong tu this->name, tham chieu den doi tuong
	cout << "nhap dia chi : ";
	cin >>this->address;
	cout << "nhap tuoi : ";
	cin >> this->age;
}
void student::xuat() {
	cout << "thong tin hoc sinh\n";
	cout << "ho ten : " << this->name << " tuoi : " << this->age << " dia chi : "<<this->address;
}
student::~student() {

}
