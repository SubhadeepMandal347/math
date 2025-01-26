// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
    int evenlyDivides(int N){
     int ans=0;
 
  
     while(N>0){
            int ls = N%10;
            if(ls!=0 && N%ls==0){
                ans++;
            }
            N=N/10;
     }
     return ans;
    }



int main() {

int N;
cin>>N;
int a =evenlyDivides(N);
cout<<a;



    return 0;
}