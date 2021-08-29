#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define POINTERS_BASICS
#define POINTERS_AND_ARRAYS
//#define POINTERS_BASICS+
//#define POINTERS_BASICS++

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;       // ���������� � ������������� ���������;
	cout << a << endl;  //����� �������� ��������� 'a' �� �����
	cout << &a << endl; //������ ������ ���������� 'a' ����� ��� ������
	cout << pa << endl; //����� ������ ��������� 'a', ����������� � ��������� 'pa'
	cout << *pa << endl;

	int* pb;        //���������� ���������
	int b = 3;
	pb = &b;
	//int - int
	//int* - ��������� �� int
	//double - double
	//double* - ��������� �� double
	//char - char
	//char* - ��������� �� char  
#endif // POINTERS_BASICS

#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr + i << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t\t";
	}
	cout << endl;
#endif // POINTERS_AND_ARRAYS
	
#ifdef POINTERS_BASICS+
	int y, d;
	int x = 4;
	int* px = &x;
	cout << &x << endl;
	cout << *&x << endl;
	y = *px + 1;
	d = sqrt((double)*px);
	cout << d << endl;
	*px = 0;
	*px += 1;
	cout << *px << endl;

#endif // POINTERS_BASICS+

#ifdef POINTERS_BASICS++
	int x = 10;
	int y = 5;

	int* px;
	int* py;

	//���������� ������ ���������� � � ��
	px = &x;

	//���������� ����� � ����� ��������� � �������� ������ ������
	cout << px << " " << &x << endl;

	//���������� �������� � ����� ���������� � �������� ������������� 
	//�� ������ 10 10
	cout << *px << " " << x << endl;

	//�������� �������� ���������� �, ���������� �������� ������������� 
	*px = 99;

	/*���������� ����� �������� � ����� ���������� � �������� �������������
	�� ������ 99 99*/
	cout << *px << " " << x << endl;

	//���������� ������ ���������� y � ��
	py = &y;

	//���������� ����� � ����� ��������� � �������� ������ ������
	cout << py << " " << &y << endl;

	//���������� �������� � ����� ���������� � �������� ������������� 
	//�� ������ 5 5
	cout << *py << " " << y << endl;

	/*���������� �������� ������ �� �� � ��, ������ ��� ���������� ��������� �� �*/
	py = px;

	/*���������� ����� �������� � ����� ���������� � ��� ���������
	�� ������ 99 99 99*/
	cout << *px << " " << *py << " " << x << endl;
#endif // POINTERS_BASICS++

}