# include <iostream>
# include<math.h>
using namespace std;



int main (){
    // question -1  predict the output
    // infinite loop as condition always true so it will print "in while loop" infinitely

     // question -2  predict the output
     //it is also infinite loop it will print "hello" infinitely

      // question -3 predict the output
      // in for loop
      // in for loop
      // in for loop

       // question -4  predict the output
       // 9  1
       // 8  2
       // 7  3
       // 6  4
       // 5  5
       // 4  6

        // question -5 wap to print the sum of all the even digits of a given number .
/*cout<<"enter the number :";
        int n;
        cin>>n;

        int sum=0;
        int num;
        while(n>0){
                num= n %10;
                if(num%2==0){
sum=sum+num;}
n=n/10;
        }
        cout<<"sum is equal to :"<<sum<<endl; */

        // question -6 wap to print the sum of a given number and it's reverse
 /*     cout<<"enter the number :";
        int n;
        cin>>n;
        int reverse=0;
        int result;
        int num=n;
        while(n>0){
reverse= reverse*10 + (n%10);
n=n/10;
        }
        cout<<n;
result = num + reverse;
cout<<" sum is equal to : "<< result <<endl;*/

// question - 7 print factorial 
/*cout<<"enter the number :";
        int n;
        cin>>n;
        int result1=1;
        for(int i=1; i<=n; i++){
                result1 = result1 * i;
                cout<<result1<<endl;
        }
*/
        // question 8 - find sum of series upto n
   /*   cout<<"enter n :" ;
        int n;
        cin>>n;
        int result2=0;
        int sum =0;
        for(int i=1 ; i<=n; i++){
result2 = result2 * 10 + 2;
sum = sum + result2;
        }
         cout<<" sum of series is equal to "<< sum<<endl;*/


         // question 9 - wap to print all the  unique combinations of 1,2,3 and 4.


         // question 11 - display fibonnaci series 
      
        
        /* int a=0;
         int b= 1 ;
         int c;
         cout<<a<<endl;
         cout<<b<<endl;
         for(int i=3; i<=10; i++){
                c=a+b;
                a=b;
                b=c;
                cout<<c<<endl;
         }*/

         // question 12-  reverse a given integer
    /*     cout<<"enter n: ";
         int n;
         cin>>n;
         int reverse = 0; 
         while(n>0){
                reverse = reverse *10 + (n% 10);
                n= n/10;
         }
cout<<reverse<<endl;*/

// question 13 - print sum from 1 to n if any num is divi by 5 so skip it and
// if sum is greater than 300 don't need to calculate  and do it without for loop
/*cout<<"enter n: ";
int n;
cin>>n;
int i=1;
int sum=0;
while(i<=n){
   
        if(i%5==0){
                i++;
                continue;
                
        }
        if(sum<=300){
                sum= sum +i;
                 }else{
                        break;
                 }

i++;
}
cout<<sum;*/


// question 14 - check that number is  armstrong number or not
/*int p,t;
cin>>p>>t;
for(int i=p; i<=t; i++){
int n;
cin>>n;
double sum = 0;
int  numofdigit=0;
int num=n;
int num1= n;
// calculate no of digits
while(num>0){
        num=num/10;
        numofdigit ++;
}
// main logic 
while(n >0){
sum= sum+ pow(n %10,numofdigit);

n=n/10;
}
/*if(num1==sum){
        cout<<"armstrong number"<<endl;
}else{
        cout<<"not an armstrong number"<<endl;
}
        cout<<sum<<endl;
}*/


// question - 15 predict the output

//q-15(1)
//output    
/*10
9
8
7
6
5
4
3
2
1*/


//q-15(2)
//output  -> infinte loop

//q-15(3)
//output -> no output 


//q-15(4) 
//output -> no output

//q-15(5)
//output ->  infinite loop 

//q-15(6)
//output -> 
//hello
//hello
//hello
//hello
//hello


//q-15(7)
//output -> infinite loop

//q-15(8)
//output 
/*1 hello world
2 hello world
3 hello world
4 hello world
5 
6 hello world
7 hello world
8 hello world
9 hello world
10 hello world  
*/

}
         
       
