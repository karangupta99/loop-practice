#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    while(n>0){
        int lastDigit = n%10;
                if(lastDigit%2 == 0){
            sum =  sum + lastDigit;
          cout<<sum<<endl ;
            
        }
         
        n= n/10;
    
    }
}
