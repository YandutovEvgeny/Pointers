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
	int* pa = &a;       // Объявление и инициализация указателя;
	cout << a << endl;  //Вывод значения перменной 'a' на экран
	cout << &a << endl; //Взятие адреса переменной 'a' прямо при выводе
	cout << pa << endl; //Вывод адреса перменной 'a', хранящегося в указателе 'pa'
	cout << *pa << endl;

	int* pb;        //Объявление указателя
	int b = 3;
	pb = &b;
	//int - int
	//int* - Указатель на int
	//double - double
	//double* - Указатель на double
	//char - char
	//char* - Указатель на char  
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

	//Записываем адресс переменной х в рх
	px = &x;

	//Отображаем адрес х через указатель и операцию взятия адреса
	cout << px << " " << &x << endl;

	//Отображаем значение х через переменную и операцию разыменование 
	//На экране 10 10
	cout << *px << " " << x << endl;

	//Изменяем значение переменной х, используем операцию разыменования 
	*px = 99;

	/*Отображаем новое значение х через переменную и операцию разыменования
	На экране 99 99*/
	cout << *px << " " << x << endl;

	//Записываем адресс переменной y в ру
	py = &y;

	//Отображаем адрес у через указатель и операцию взятия адреса
	cout << py << " " << &y << endl;

	//Отображаем значение х через переменную и операцию разыменование 
	//На экране 5 5
	cout << *py << " " << y << endl;

	/*Записываем значение адреса из рх в ру, теперь оба указателей указывают на х*/
	py = px;

	/*Отображаем новое значение х через переменную и два указателя
	На экране 99 99 99*/
	cout << *px << " " << *py << " " << x << endl;
#endif // POINTERS_BASICS++

}