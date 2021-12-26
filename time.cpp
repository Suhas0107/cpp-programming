#include<iostream>
using namespace std;
class T
{
  int H,M,S,TS;
  public: 
       void harry()
   {
     cout<<"Hey! Buddy, Enter hours "<<endl;
     cin>>H;
     cout<<" minutes "<<endl;
     cin>>M;
     cout<<" seconds "<<endl;
     cin>>S;
     cout<<" The time is: "<<H<<":"<<M<<":"<<S<<endl;
    
         TS=(H*3600)+(M*60)+(S);
     cout<<"total time in seconds : "<<TS<<endl;
   }
};
int main()
{
  T obj;
  obj.harry();
  return 0;
}
  
