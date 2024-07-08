// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//    int lastDigit=0;
//     while(n>0)
//     {
//         lastDigit=n%10;
//         sum= sum+lastDigit;
//         n=n/10;{
//         cout<<sum<<endl;
//         }


//     }return 0;
// }



#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    while(n>0){
        int lastDigit = n%10;
        sum = sum + lastDigit;
        n = n/10;
       cout<<sum<<endl; 
    }
    
}

