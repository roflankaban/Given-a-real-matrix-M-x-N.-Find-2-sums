#include "Header.h"
Carray::Carray(const int N, const int M) {
	float *sarray = new float[N*M];
	cout << "Fill the array: " << endl;
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
		{
			cout << "element[" << i << "][" << j << "]=";
			cin >> *(sarray + i * M + j);
			cout << endl;

		}
}
Carray::~Carray() {
	delete[] sarray;
	sarray = NULL;
}
int Carray::Max_line(const int N, const int M) {
	int sum1 = 0;
	for (int j = 0; j < N; ++j)//Find the maximum value in the line
	{
		int min = *(sarray + 0 * M + j);
		for (int i = 0; i < N; ++i)
			if (*(sarray + i * M + j) < min)
				min = *(sarray + i * M + j);

		sum1 = sum1 + min; //Output maximum value in the line
	}
	return sum1;
}
int Carray::Min_columns(const int N, const int M) {
	int sum2 = 0;
	for (int i = 0; i < M; ++i)//Find the minimum values ​​in the columns
	{
		int max = *(sarray + i * M + 0);
		for (int j = 1; j < M; ++j)
			if (*(sarray + i * M + j) > max)
				max = *(sarray + i * M + j);
		sum2 = sum2 + max;
	}
	return sum2;
}