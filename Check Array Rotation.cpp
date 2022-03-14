#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    int x = 123456;
    int j ;
    if(size ==0){
        return 0;
    }
    for(int i =0; i<size ; i++){
        if(input[i]<x){
            x = input[i];
            j = i;
        }
    }
    return j ;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}