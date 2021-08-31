#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int a = 2;
	int& ra = a;//reference to 'a'
	ra += 3;
	cout << a << endl;
}