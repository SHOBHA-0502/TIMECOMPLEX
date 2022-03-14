#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    int *p = new int[n];
    for(int i =0 ; i<n ; i++){
        p[i] = input[(i+d)%n];
    }
    for(int i =0 ; i<n ; i++){
        input[i] = p[i];
    }
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}