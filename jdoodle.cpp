#include<iostream>
using namespace std;
int main(){
int test;
int sum=0;
int count=0;
cin >> test;
int n;
int diff = 0;
while(test--){
   diff = 0;
   sum = 0;
   count=0;
   cin >> n;
int arr[n];
for(int i=0;i<n;i++)
    cin >> arr[i];
if(n==0)
    cout<<"0";
else if (n==1)
   cout<<0;
else {
for(int i = 0; i < n-1; i++){
    
for(int j = i+1; j < n; j++){
    
  if((arr[i]-arr[j]) > diff && (arr[i]-arr[j]) >= 1 )
     diff = arr[i]-arr[j];
}
}
}
//cout << diff << endl;
while(true){
    if(diff - sum <= 0 ){
        
        break;
        
    }
      sum = sum + 2^count;
      count++;
    
   
}
if(count == 0)
cout<< 0 << endl;
else
 cout << count + 1  << endl;
}



return 0;
}
