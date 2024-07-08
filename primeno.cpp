#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(i%2==0){
            cout<<"it is composite"<<endl;
            break;
        }
            else{
                cout<<"it is a prime number"<<endl;
                break;
            }
        
    }
       
   }
   

    