#include<bits/stdc++.h>
using namespace std;
 int reverse(int x) {

    int lsd;
    int rev=0;
    while(x>0){
        lsd=x%10;
         rev=rev*10+lsd;
        x=x/10;
       
    }
   return rev;
 }
//subha
int main(){
    int n;cin>>n;
cout<<reverse(n);


return 0;
}