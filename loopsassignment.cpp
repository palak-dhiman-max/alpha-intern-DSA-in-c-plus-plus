# include <iostream>
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
        cout<<"enter n :" ;
        int n;
        cin>>n;
        int result2=0;
        int sum =0;
        for(int i=1 ; i<=n; i++){
result2 = result2 * 10 + 2;
sum = sum + result2;
        }
         cout<<" sum of series is equal to "<< sum<<endl;


         // question 9 - wap to print all the  unique combinations of 1,2,3 and 4.
         
       
}