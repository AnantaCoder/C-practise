#include <bits/stdc++.h>
using namespace std;

// Function to display an array
void displayArray(const int arr[], int count, const string& type) {
    cout << type << " elements: ";
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sevenarray(int arr[], int n, int even[], int &counteven){
    counteven = 0;
    for(int i =0; i<n;i++){
        if(arr[i]% 2 == 0){
            even[counteven++] = arr[i];
        }
    }
}
void soddarray(int arr[] , int n, int odd[], int &oddcounter){
    oddcounter =0;
    for (int i = 0; i<n;i++){
        if(arr[i] %2 != 0){
            odd[oddcounter++] = arr[i];
        }
    }
}

int main(){

    int n;
    cout<<"Enter The Length of array " << endl;
    cin>>n;


    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int evenarr[n] , oddarray[n];
    int e, o;
    sevenarray(arr, n, evenarr,e);
    soddarray(arr,n,oddarray,o);

    displayArray(evenarr,e,"Even");
    displayArray(oddarray,o,"Odd");


return 0;

}