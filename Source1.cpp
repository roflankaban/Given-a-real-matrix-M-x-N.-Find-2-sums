/*Ivanov Igor 10-2-IIT lab 2

Given a real matrix M x N. Find 2 sums: the largest values ​​of its elements
rows, the smallest values ​​of its columns.
*/
#include "Header.h"
void main()
{
	int N, M;
	cout << "enter array's size: " << endl;
	cin >> N;
	cin >> M;
	Carray array(N, M);
	cout << "Sum of min value in column = " << array.Max_line(N, M) << endl;
	cout << " Sum of max value in line = " << array.Min_columns(N, M) << endl;


	system("pause");
}