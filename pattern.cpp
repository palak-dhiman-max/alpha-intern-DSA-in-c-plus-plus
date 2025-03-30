# include <iostream>
 using namespace std ;
 int main (){
 // print the pattern number rectangle
 /*cout<<"enter n : ";
 int m,n;
 cin>>n>>m;
 for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
cout<<i;
    }
    cout<<endl;
 }
    



 // print inverted  half pyramid pattern 
 cout<<"enter n : ";
 int n;
 cin>>n;
 for(int i=n; i>=0; i--){
   for(int j=1; j<=i; j++){
cout<<j;
   }

cout<<endl;
   }




   //print alphabet half pyramid pattern
   cout<<"enter n : ";
   int n;
   cin>>n;
   for(int i=1; i<=n; i++){
     for(int j=1; j<=i; j++){
  cout<<char(j+64);
     }
  
  cout<<endl;
     }




     // print number half pyramid
    cout<<"enter n : ";
     int n;
     cin>>n;
     for(int i=1; i<=n; i++){
       for(int j=1; j<=i; j++){
    cout<<j;
       }
    
    cout<<endl;
       }




       // print hollow rectangle pattern
int m,n;
cin>>m>>n;
       for(int i=0; i<=m ; i++){
         for(int j=0; j<=n;j++){
if( i==0 || j==0 || i==m ||j==n){
   cout<<"*";
}else{
   cout<<" ";
}
         }
         cout<<endl;
       }




// print half pyramid alphabet pattern which is 180 degree oriented
int n;
cin>>n;
for(int i=1; i<=n ; i++){
   for(int j=1; j<=n-i;j++){
cout<<" ";
   }
   for(int k=1; k<=i;k++){
      cout<<char(k+64) ;
   }
   cout<<endl;
}





// print half pyramid pattern as given below
/*
  1
  21
  321
  4321
  
  
int n;
cout<<"enter n";
cin>>n;
  for(int i=2; i<=n+1; i++){
   for(int j=1; j<=i-1; j++){
cout<<(i-j)<<" ";
   }
   cout<<endl;
  }


  
  // print the following pattern
/*   ****
    ****
  ****
****     
int n;
cin>>n;
for(int i=1; i<=n; i++){
   for(int j=1; j<=n-i;j++){
cout<<" ";}
for(int i=1; i<=n; i++){
   cout<<"*"<<" ";
}
   
   cout<<endl;
}


// print following output
/*

*
**
***
****
***
**
*



cout<<"enter n : ";
     int n;
     cin>>n;
     for(int i=1; i<=n; i++){
       for(int j=1; j<=i; j++){
    cout<<"*"<<" ";
       }
    
    cout<<endl;
       }
       for(int i=n-1; i>=0; i--){
         for(int j=1; j<=i; j++){
      cout<<"*"<<" ";
         }
      
      cout<<endl;
         }



   // print the following pattern 
   /* 
   
      *
     ** 
    ***
   ****
    ***
     **
      *
      
   

   int n;
cin>>n;
for(int i=1; i<=n ; i++){
   for(int j=1; j<=n-i;j++){
cout<<" ";
   }
   for(int k=1; k<=i;k++){
      cout<<"*" ;
   }
   cout<<endl;
}
  
   for(int i=n-1; i>=0 ; i--){
      for(int j=1; j<=n-i;j++){
   cout<<" ";
      }
      for(int k=1; k<=i;k++){
         cout<<"*" ;
      }
      cout<<endl;


}
*/ // half pyramid binary pattern
/*int n;
cin>>n;
 for(int i=1; i<=n; i++){
   for(int j=1; j<=i; j++){
      if((i%2!=0) && (j%2!=0)  || (i%2==0) && (j%2==0) ){
         cout<<"1";
      }else{
         cout<<"0";
      }
   }cout<<endl;
 }
*/
 
// plus pattern 
    /* int n;
     cin>>n;
     int r= (n/2) +1;
     for(int i=1; i<=n;i++){
         for(int j=1; j<=n;j++){
             if(j==r || i==r){
                 cout<<"*";
             }else{
                 cout<<" ";
             }
         }cout<<endl;
     }
*/
     // diagonal star pattern
     /*int n;
     cin>>n;
     int k= n;
     for(int i=1; i<=n;i++){
         for(int j=1; j<=n;j++){
             if(j==i || j==k){
                 cout<<"*";
                 
             }else{
                 cout<<" ";
             }

             k--;
         }cout<<endl;
     }*/

     
 
     
 }


