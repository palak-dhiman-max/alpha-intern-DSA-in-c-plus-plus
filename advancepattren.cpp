 #include<iostream>
 using namespace std;
 int main (){
    // pyramid number pattern
   /* cout<<"enter n: ";
    int n;
     cin>>n;
     for(int i=1; i<=n ; i++){
        for(int j=1; j<=n-i; j++){
cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<j;
                    }
                    cout<<endl;
     }

*/
     // alphabet pattern pyramid
         // pyramid number pattern
  /*  cout<<"enter n: ";
    int n;
     cin>>n;
     for(int i=1; i<=n ; i++){
        for(int j=1; j<=n-i; j++){
cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<char(j+64) ;
                    }
                    cout<<endl;
     }
*/
     // 
 

     // palindrome pyramid pattern 
    /* cout<<"enter n: ";
      int n;
     
       cin>>n;
       for(int i=1; i<=n ; i++){

          for(int j=1; j<=n-i; j++){
              cout<<" ";
                      }
              
 
         for(int p=1; p<=i; p++){
             cout<<p;
             
         }

         for(int k=i-1; k>=1; k--){
                cout<<k;
                        }
                      cout<<endl;
       }*/


/*
    1234321
    123 321
    12   21
    1     1
                  */
   /* int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<j;
        }
        
    
    
    for(int k=1; k<=2*i-1;k++){
        cout<<" ";
    }
    
        for(int p=n-i;p>=1; p--){
          if(p==n){continue;}
            cout<<p;
        }
       cout<<endl; 
    }*/


/*
ABCDEFG
ABC EFG 
AB   FG 
A     G

*/
    
   /* int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<char(j+64);
        }
        
    
    
    for(int k=1; k<=2*i-1;k++){
        cout<<" ";
    }
    
        for(int p=1;p<=n-i; p++){
          if(p==n){continue;}
            cout<<char(p+68);
        }
       cout<<endl; 
    }*/

    // butterfly pattern

    int n;
    cin>>n;
    int p;
    p=n;


    //printing upper half pattern
    for(int i=1; i<=n;i++){

        // printing half pyramid
        for(int j=1; j<=i ;j++){
            cout<<"*"<<" ";

        }

        // printting space

        for(int k=2*(p-1)-1;k>=1; k--){
cout<<"  ";
p--;
        }

        // reassigninig p
        p=n-i;

        //printing half pyramid
        for(int t=1; t<=i;t++){
            if(t==n){
                continue;
            }
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
//printing lower half pattern
for(int i=0; i<=n; i++){
    for(int j=1; j<=n-i; j++){
        cout<<"*"<<" ";
    }
    


for(int k=1; k<=2*i-1;k++){
    cout<<"  ";
}

    for(int p=n-i;p>=1; p--){
      if(p==n){continue;}
        cout<<"*"<<" ";
    }
   cout<<endl;


}

}
