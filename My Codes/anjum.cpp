#include<bits/stdc++.h>

using  namespace std;
void selectionsort (int arr[],int n)
{
    int i;
    for(i=0;i<n-1;i++){
         int loc=i;

         for(int j=i+1;j<n;j++){
            if(arr[j]<arr[loc]){
                loc=j;
            }
         }
         if(loc != i){
         swap(arr[loc],arr[i]);
    }
}
}

void print (int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Size of the array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    cout<<"Array after Selection sort:\n";
    print(arr,n);
}
