#include<iostream>
using namespace std;
int ans[1001];
int pd[3000]={1};
int main(){
   for(int n=1;n<=1000;n++){
      for(int k=0;k<3000;k++)pd[k]*=n;
      for(int k=0;k<3000;k++){
         pd[k+1]+=pd[k]/10;
         pd[k]%=10;
      }
      for(int k=0;k<3000;k++)ans[n]+=pd[k];
   }
   int n;
   while(cin>>n)cout<<ans[n]<<endl;
   return 0;
}
