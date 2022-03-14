#include <iostream>
using namespace std;

int findUnique(int *arr, int n) {
    int k = arr[0];
    

    for(int i =1 ; i<n; i++){
    k = k^arr[i];
    }
    return k ;
    // bool t = true ;
    // for(int i =0 ; i<n ;i++){
        
    //     for(int j = 0; j<n ; j++){
    //         if(arr[i] ==arr[j]&& i !=j){
                
    //             t = false ;
    //             break;
    //         } 
             
        
    //     }
    //     if(t == true ){
    //         return arr[i];
    //     }
    //     else{
    //         t = true;
    //     }
        
    // }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}