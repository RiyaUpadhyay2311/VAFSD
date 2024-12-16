#include<iostream>
using namespace std;
void fill_arr(int arr[],int n){
    
    cout<<"enter size"<<n<<endl;
    cout<<"enter array"<<endl;
    for (int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"array is:-"<<endl;
    for (int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    }
    void insert_arry(int arr[],int n){
        
        
        int newpos,newelement;
        cout<<"enter where you want to insert:-";
        cin>>newpos;
        cout<<"new element is:"<<newelement;
         for (int i=n-1;i>newpos;i--){
            arr[i-1]=arr[i];
         }
         arr[newpos]=newelement;
         n++;
         for(int i=0;i<=n-1;i++){
            cout<<arr[i];
         }
         cout<<endl;



    }
    
int main(){
    int n,arr[100];
    cout<<"enter the size"<<endl;
    cin>>n;
    fill_arr(arr, n);
    insert_arry(arr, n);
  


}