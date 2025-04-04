# include <iostream>
using namespace std;


//ques-1  waf to print squares of first n natural numbers , taking n as argument to the function
/*void square (int n){
    int result=0;
    for(int i=1; i<=n;i++){
    result = i*i;
    cout<<result<<" ";
}
}

int main (){
    int n;
    cin>>n;
    square(n);

}*/


// ques-2 waf that take radius a sargument and return its area

/*float area (float r){
    float result;
    result=3.14*r*r;
    return result;
}

int main (){
    float r;
    cin>>r;
   float  result1;
   result1=area(r);
   cout<<result1;
}*/


//ques-3 given tow number print all odd number b/w them

/*void odd_num(int a,int b){
    for(int i=a; i<b;i++){
        if(i%2!=0){
cout<<i<<" ";
        }
    }
}

int main (){
    int a,b;
    cin>>a>>b;
    odd_num(a,b);
}*/


//ques- waf to count number of digits in a number and then print square of this number.

/*int square(int a){
    int result;
    result = a*a;
    return result;
}

int count_digit(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    int res;
    res= count;
    return square(res);
}

int main (){
    int n;
    cin>>n;
    int ans;
   ans = count_digit(n);
   cout<<ans;
}*/

// ques-4 minimum number of function present in c++ lang is equal to 1

//ques-5  state true/false 
// a-> true
// b-> if function is of void type or we are not returning anything
// (we are just printing it) so there is no need to return anything

// ques-6 can same function name be used for different functions without any conflict. 
// we cannot did so because if we make same name of different function having same parameters so compiler got
// confused that to which function it call and it throw an error that function is already defined
// but we can did so if parameters are different and function name is same by (method overriding function)





