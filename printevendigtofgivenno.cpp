#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int sum=0;
    int lastDigit=0;
    while(n>0){
         
        lastDigit=n%10;
        sum=sum+lastDigit;
        n=n/10;

        if(sum%2==0)
        
        cout<<sum<<endl;
        
    }
}







