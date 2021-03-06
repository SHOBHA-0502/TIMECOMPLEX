#include <iostream>
#include <algorithm>
using namespace std;


int pairSum(int *arr, int i, int j, int num){
    int k =0;
    while (i<j)
    {
        if (arr[i]+arr[j]<num)
            i++;
        else if (arr[i]+arr[j]>num)
        	j--;
    	else {
                if (arr[i]==arr[j])
        		{
            		int h=j-i; 
            		k=h*(h+1)/2+k;
                    return k;
        		}
                else{
            			int a=1,b=1;
                		while(arr[i]==arr[i+1]){
                    		a++;
                            i++;
                		}
                		while(arr[j]==arr[j-1]){
                    		b++;
                            j--;
                		}
            		k=a*b+k;
                    i++;
                    j--;
                	}
        	}
    }
    return k;
}

int tripletSum(int *arr, int n, int num)
{
    sort(arr, arr+n);
    int ans = 0;
    for(int i=0; i<n; i++){
        ans += pairSum(arr, i+1, n-1, num-arr[i]);
    }
    
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;
        

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}