# include <iostream>
using namespace std;
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

    // calculate percentage of five subjects
    float sub1 ,sub2, sub3, sub4 ,sub5;
    cout<<"Enter marks of subject first"<<endl;
    cin>>sub1;

        cout<<"Enter marks of subject second"<<endl;
    cin>>sub2;
        cout<<"Enter marks of subject third"<<endl;
    cin>>sub3;

   cout<<"Enter marks of subject fourth"<<endl;
    cin>>sub4;

    cout<<"Enter marks of subject fifth"<<endl;
    cin>>sub5;
    float percentage =( sub1+sub2+sub3+sub4+sub5)/5;
cout<<"percentage is equal to:"<<percentage<<endl;


//calculate area of circle
float radius ;
cout<<"Enter radius"<<endl;
cin>>radius;
float area = 3.14*radius*radius;
cout<<"Area of circle is equal to:"<<area<<endl;

//calculating simple interest 
int principal , rate ,time;
cout<<"Enter principal:"<<endl;
cin>>principal;
cout<<"Enter rate of interest: " <<endl;
cin>>rate;
cout<<"Enter time :"<<endl;
cin>>time;
int simple_interest =(principal*rate*time)/100;
cout<<"simple intersst is equal to:"<<simple_interest<<endl;

//how can you output "alpha and "intern" in tow different lines
// we can do so by using endl 
string name = "Alpha";
string name2 = "intern";
cout<<name<<endl<<name2<<endl;

// how much space does the following data types take
//int - 4 bytes
//bool- 1 bytes
//float - 4 bytes

// write a program to find the circumfrence of a circle with radius 10
float radius2 = 10;
float circumfrence = 2*3.14*radius2;
cout<<"circumfrence is equal to:"<<circumfrence<<endl;

// take positive integer input and tell whether it is even or odd
int num2;
cout<<"Enter integer"<<endl;
cin>>num2;
if(num2%2==0){
    cout<<"Even number"<<endl;
}else{
    cout<<"odd number"<<endl;
}

//tell whether number is divisible by 5 or not
int dig ;
cout<<"Enter number"<<endl;
cin>>dig;
if(dig%5==0){
    cout<<"divisible by 5"<<endl;
}else{
    cout<<"Not divisible by 5"<<endl;
}

//given the radius of circle predict whether numerically area of circle is larger than  to circumfrence or not
cout<<"Enter radius :"<<endl;
float r;
cin >>r;
if(area>circumfrence){
    float area = 3.14*r*r;
float circumfrence = 2*3.14*r;
cout<<"Area is greater than circumfrence:"<<"area is equal to:"<<area<<"circumfrence is equal to:"<<circumfrence<<endl;

}

// tell if integer is a three digit number or not
cout<<"Enter integer: ";
int dig1;
cin>>dig1;
if(dig1>=100 &&dig1<=999){
    cout<<"It is a three digit number"<<endl;
}else{
    cout<<"Not a three digit number"<<endl;
}

//check if integer is divisible by 5 or 3

cout<<"Enter your number"<<endl;
int dig2;
cin>>dig2;
if(dig2%5==0 && dig2%3==0){
    cout<<"Divisible by 5 and 3"<<endl;
}else{
    cout<<"not divisible by 3 and 5"<<endl;
}

// take input three integer and find greater of them
int a,b,c;
cin>>a;
cin>>b;
cin>>c;
if(a>b && a>c){
    cout<<"a is greater"<<endl;
} else if(b>a && b>c){
    cout<<"b is greater"<<endl;
}else if ( c>a && c>b){
    cout<<"c is greater"<<endl;
}else{
    cout<<"invalid"<<endl;
}

//wap to check whether a character is an alphabrt or not
cout<<"Enter character"<<endl;
char  char1;
cin >>char1;
if((char1>='a'&&char1<='z') || (char1>='A' && char1<='Z')){
    cout<<"character is alphabet"<<endl;
}else{
    cout<<"not  an alphabet"<<endl;
}

//print absolute value of integer
cout<<"Enter integer"<<endl;
int dig3;
cin>>dig3;
if(dig3>=0){
    cout<<"absolute value is"<<dig3;
}else if(dig3<0){
    dig3 = - dig3;
    cout<<"absolute value is"<<dig3;
    }
    }