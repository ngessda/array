#include <iostream>
#include <ctime>

int main()
{
	using namespace std;
	const int size = 10;

	srand(time(NULL));
	int a = rand();
	int mas[size];
	bool already;

	for (int i = 0; i < size;)
	{
		already = true;
		int newRandomValue = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (mas[j] == newRandomValue)
			{
				already = false;
				break;
			}
		}
		if (already)
		{
			mas[i] = newRandomValue;
			i++;
		}
	}
	
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << endl;
	}

}