#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* p, const int size, const int Min, const int Max)
{
	for (int i = 0; i < size; i++)
		p[i] = Min + rand() % (Max - Min + 1);
}
void Vyvid(int* p, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << p[i];
	cout << endl;
}


int Kilkist(int* p, const int size)
{
	int k = 0;
	for (int i = 0; i < size; i++)
		if (p[i]==0)
			k++;

	return k;
}
int min(int* p, const int size, int&inmin)
{
	int min = p[0];
	for (int i = 1; i < size; i++)
		if (p[i] < min) {
			min = p[i];
			inmin = i;
		}

	return min;
}

int Sum(int* p, const int size, int& mini, int& inmin)
{
	int S = 0;
		for (int i = inmin + 1; i < size; i++)
			S += p[i];
	
	return S;
}
void Sort(int* p, const int size) 
{
	for (int i = 1; i < size; i++) 
		for (int j = 0; j < size - i; j++) 
			if (abs(p[j]) > abs(p[j + 1])) 
			{
				int tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
}


int main()
{
	srand((unsigned)time(NULL));
	const int n = 20;
	int p[n];
	int Min = -100;
	int Max = 100;

	Create(p, n, Min, Max);
	Vyvid(p, n);
	//Sum(p, n);
	int k = Kilkist(p, n);
	cout << "Kilkist = " << k << endl;
	int inmin = 0;
	int mini = min(p, n,inmin);
	cout << "Minimal =  " << mini << endl;
	cout << "S = " << Sum(p, n, mini, inmin) << endl;

	Sort(p, n);
	Vyvid(p, n);

}