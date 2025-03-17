# include<iostream>
# include <math.h>
using namespace std;
int main (){
    // question 1-> wap that take tow integer input and print their sum

    int n ,m,sum;
    cout<<"enter integers:"<<endl;
    cin>>n>>m;
    sum=n+m;
    cout<<"sum is equal to: "<<sum<<endl;

    //question 2-> take length and breadth as input and calc. area of rectangle
    int l,b,area;
    cout<<"enter integers:"<<endl;
    cin>>l>>b;
    area=l*b;   // area of reactangle
    cout<<"area is equal to: "<<area<<endl;

    // question 3->perform add. sub. div. mul. b/w tow numbers
    int n1 ,m1,sum1, sub,mul,div;
    cout<<"enter integers:"<<endl;
    cin>>n1>>m1;
    sum1= n1+m1;
    sub=n1-m1;
    mul= n1*m1;
    div=n1/m1;
    cout<<"sum is equal to: "<<sum1<<endl;
    cout<<"sub is equal to: "<<sub<<endl;
    cout<<"mul is equal to: "<<mul<<endl;
    cout<<"div is equal to: "<<div<<endl;

    //question 4->find simple interest
    int p,r,t,simple_interest;
    cout<<"enter p, r,t: "<<endl;
    cin>>p>>r>>t;
    simple_interest=(p*r*t)/100;
    cout<<"simple interest :"<<simple_interest<<endl;
    
//question 5->take character input and print it's ascii value 
cout<<"enter character: "<<endl;
char ch ;
cin>>ch;
int ascii_value = ch;
cout<<ascii_value<<endl;

// question 6->take float number as input and type cast it as integer
float num;
cout<<"enter number: "<<endl;
cin>>num;
int num2=num;
cout<<num<<endl;
cout<<num2<<endl;

//question 7->take integer between 65 and 90 and print it's corresponding uppercase letter.
cout<<"enter number: "<<endl;
int num3;
int b=0;
cin>>num3 ;
  num3= (num3>=65 && num3<=90) ? num3:b;
char ch1=num3;
cout<<ch1<<endl;

// question no 8
//output->
// 6,4

// question 9
// output->
// 6 7

// question 10 - explain difference b/w x++ and ++x in your own words .

// x++ which is a post increment operator firstly it use the value and after that it update it.
// ++x which is a pre increment operator it first update the value and then use it.

// -> take an integer input and print it's value using post increment .
cout<<"enter integer";
int m;
cin>>m;

cout<<m++<<endl;
cout<<m;


// -> take an integer input and print it's value using  and pre increment.
cout<<"enter integer";
int p;
cin>>p;

cout<<++p<<endl;


// question 11
// output -> a=4 , b=6 , c=9

// question 12
// output -> x=5 , y= 1 , z=9

// question 13
// wap to find the euclidian distance b/w tow coordinates , take coordinate as input from user.
cout<<"enter coordinates:"<<endl;
int x1;
int x2,y1,y2;
cin>>x1>>x2>>y1>>y2;
int distance;
distance= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
cout<<distance<<endl;




// question 14 -> wap that will tell the number of dogs and chicken are there
// when the user will provide value of total heads and legs .
cout<<"enter heads and legs:"<<endl;
int heads;
int legs;
cin>>heads>>legs;
int dogs;
int chicken;
chicken=(2*heads)-(0.5*legs);

dogs=heads-chicken;
cout<<"dogs:"<<dogs<<endl;
cout<<"chicken:"<<chicken<<endl;


// question 15 ->wap to find sum of squares of first n natural number where n is provided by user
cout<<"enter n:";
int n;
cin >>n;
int sum;
sum= ( n) * (n+1)*(2*n+1)/6;
cout<<sum;


// question 16->
// find sum of fraction 
cout<<"enter numerator and denominator:";
int n1,n2,d1,d2;
cin>>n1>>n2>>d1>>d2;
int sum;
sum=((n1*d2)+(n2*d1))/(d1*d2);
cout<<sum<<endl;

// question 17->
// output ->6


// question 18->
// output -> 1

// question 19->
// output -> a=13, b=3,c=13

// question 20->
// output ->(x&y)=0 , (x&&y)=1


// question 21->
// output ->a=12 , b=6


// question 22->
// output ->0



}