# include <iostream>
using namespce std;
int main(){
    //count the number of digits in a given number
    int n;
    int num =0;
    cout<<"Enter your number"<<endl;
    cin>>n;
    while (n>0){
num++;
n = n/10;
    }cout<<num<<endl;
}