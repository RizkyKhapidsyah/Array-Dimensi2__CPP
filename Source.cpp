#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main() {
	int A[2][2]; /* Matriks 2 Baris 2 Kolom */
	int B[2][2];
	int C[2][2];
	int i, j;

	/* Input */
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "a[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> A[i][j];
		}

		cout << endl;
	}

	cout << endl;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "b[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> B[i][j];
		}

		cout << endl;
	}

	cout << endl;

	/* Proses */
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	/* Output */

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "c[" << i + 1 << "][" << j + 1 << "] : " << C[i][j] << endl;
		}

		cout << endl;
	}

	cout << endl;

	_getch();
	return 0;
}