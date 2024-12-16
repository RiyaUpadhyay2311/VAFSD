#include <bits/stdc++.h>
using namespace std;

int main() {
 int N,sum=0;
 cin>>N;
 int arr[100];
 for(int i=0;i<N;i++){
     cin>>arr[i];
 }
 cout<<endl;
 
 for(int i=0;i<N;i++){
   sum=sum+arr[i];
   
 }
 cout<<sum<<endl;
 return 0;
}