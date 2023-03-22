#include <iostream>
using namespace std;


//引用交换
void swap1(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//指针交换
void swap2(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 12, b = 13;
	swap1(a, b);
	cout << a << "," << b << endl;
	swap2(&a, &b);
	cout << a << "," << b << endl;
}
