#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>b;
        if (b==0){
            cout<<"NULL"<<endl;
        }
        else if(b>0){
            if (b%2==0){
                cout<<"EVEN POSITIVE"<<endl;
            }
            else{
                cout<<"ODD POSITIVE"<<endl;
            }
        }
        else{
            if (b%2==0){
                cout<<"EVEN NEGATIVE"<<endl;
            }
            else{
                cout<<"ODD NEGATIVE"<<endl;
            }
        }
    }
}
