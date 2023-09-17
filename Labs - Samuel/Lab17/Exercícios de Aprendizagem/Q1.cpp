#include <iostream>
using namespace std;

int main()
{
	cout << "Digite 10 valores: ";
	int A[5],B[5],S[5];

	for(int i = 0;i < 5;++i)
	{
		cin >> A[i];
		S[i] = A[i];
	}

	for(int j = 0;j < 5;++j)
	{
		cin >> B[j];
		S[j] += B[j];
	}

	cout << "Vetor A: ";
	for(int k = 0;k < 5;++k)
		cout << A[k] << ' ';
	cout << endl;

	cout << "Vetor B: ";
	for(int l = 0; l < 5;++l)
		cout << B[l] << ' ';
	cout << endl;

	cout << "Vetor S: ";
	for(int m = 0;m < 5;++m)
		cout << S[m] << ' ';
	cout << endl;
}