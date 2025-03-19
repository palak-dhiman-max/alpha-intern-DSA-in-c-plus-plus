# include<iostream>
using namespace std;
int main (){
    //q-1  take tow integer input and print greatest of them
    cout<<"enter integer:";
    int n1,n2;
    cin>>n1>>n2;
    if(n1>n2){
        cout<<"n1 is greater"<<endl;
    }
    else if(n2>n1){
        cout<<"n2 is greater"<<endl;
    }
    else{
        cout<<"invalid";
    }

    //q-2  given r of circle predict that area os larger than circumfrence or not
    cout<<"enter radius:";
    int r;
    cin>>r;
    float area,circumfrence;
    area=3.14*r*r;
    circumfrence=2*3.14*r;
    if(area>circumfrence){
        cout<<"area is greater than circumfrence";
    }else{
        cout<<"circumfrence is greater than area";
    }

// q-3  wap to tell whether year is a leap year or not
cout<<"enter year:";
int y;
cin>>y;

if(y%4==0 && y%100!=0 ||y%400==0){
    cout<<"leap year";
}else{
    cout<<" not leap year";
}

//q-4   given l and b of rectangle check that area of rectangle is greater than perinmeter or not

cout<<"enter radius:";
int l,b;
cin>>l>>b;
int area,perimeter;
area=l*b;
perimeter=2*(l+b);
if(area>perimeter){
    cout<<"area is greater than perimeter";
}else{
    cout<<"perimeter is greater than area";
}

// q-5    check whether triangle is isosceles , scalene and , equilateral
cout<<"enter sides:"<<endl;
int s1,s2,s3;
cin>> s1>>s2>>s3;
if(s1==s2 && s2==s3 && s3==s1){
    cout<<"eqilateral triangle:";
}else if((s1==s2)&& (s2 !=s3) ||(s2==s3 )&&(s3!=s1||(s3==s1)&&(s1!=s2))){
    cout<<"isosceles triangle:";
}else if(s1!=s2 && s2 !=s3 && s3 !=s1){
    cout<<"scalene triangle";
}
else {
    cout<<"invalid";
}
    

// q-6    wap to  determine student scoring least marks
cout<<"enter marks:";
int A,B,C;
cin>>A>>B>>C;
if(A<B &&A<C){
    cout<<"student score least marks in A ";
}else if(B<C &&B<A){
    cout<<"student score least marks in B ";
}else if(C<B && C<A){
    cout<<"student score least marks in C";

}else{
    cout<<"invalid";
}

// q-7  find given point lies on x axis or at origin
cout<<"enter points:";
int x,y;
cin>>x>>y;
if(x==0 && y!=0){
    cout<<"point lies on y axis";
}else if (y==0 && x!=0){
    cout<<"point lies on x axis";
}else if (x==0 && y==0){
cout<<"point lies at origin";
}
else {
    cout<<"invalid";
}
//q-8    given three points check that all point fall on same  straight line
cout<<"enter points:";
int x1,y1,x2,y2,x3,y3;
cout<<"x1 and y1"<<endl;
cin>>x1>>y1;
cout<<"x2 and y2"<<endl;
cin>>x2>>y2;
cout<<"x3 and y3"<<endl;
cin>>x3>>y3;
int slope1 = (y2-y1)/(x2-x1);
int slope2 = (y3-y2)/(x3-x2);
if(slope1==slope2){
    cout<<"all three points are lie on a straight line"<<endl;
}else{
    cout<<"not lie on straigth line"<<endl;
}

//q-9  check that given input is alphabet ,digit or special character.

cout<<"input:";
char input ;
cin>>input;
int num = input;
if(num>=65 &&num<=90 || num>=97 && num<=122){
    cout<<" it is alphabet";
}else if((num>=0 && num<=47 ) || (num>=58 && num<=64) ||(num>=91 && num<=96)||(num>=123 && num<=127)){
cout<<"special characters";
}
else if ((num>=48 && num<=57)){
    cout<<"digit";
}else{
    cout<<"invalid";
}

// q -10  
// output-> value of b and c are respectively c=200 but b has some garbage value.

// q -11 the minimum angle b/w hour and minute hand when time is 9 angle is 90 degree.
cout<<"enter time ";
int h,m;
cin>>h>>m;
cout<<"time is "<<h<<":"<<m<<endl;
int hour_angle = h*30;
int minute_angle =m*6;
int diff = abs(hour_angle-minute_angle);
if(diff>180){
    diff=360-diff;
}
cout<<"Minimum angle is equal to: "<<diff;

// q-12  write a menu driven program cm to feet , km to miles, usd to inr , and then exit
cout<<"WELCOME TO UNIT CONVERTOR"<<endl;
cout<<"ENTER YOUR CHOICE"<<endl;
int choice;
cin >>choice;
switch(choice){
    case 1:
    cout<<"ENTER VALUE IN CENTIMETER: ";
    float cm,feet;
    cin>>cm;
    feet= cm*0.0328084;
    cout<<feet;
    break;
    case 2:
    cout<<"ENTER VALUE IN KILOMETER: ";
 
    float km,miles;
    cin>>km;
miles= km*0.621371;
    cout<<miles;
    break;
    case 3 :
    cout<<"ENTER VALUE IN USD: ";
    float usd,inr;
    cin>>usd;
inr= usd* 86.95;
    cout<<inr;
    break;
    default:
    exit(0);
    break;
}


// q-13 convert case using ascii value.
cout<<"enter character in lower case: "<<endl;
char ch;
cin>>ch;
int ch1=ch;
ch1=ch1-32;   // as there is difference of 32 b/w lower case and upper case
char  ch2=ch1;
cout<<ch2;






// q -14  
// output-> hello world 

// q -15 
// output-> hello

// q -16 
// output-> error

// q -17  
// output-> hello


}