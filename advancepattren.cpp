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
  
     cout<<"enter n: ";
     int n;
    
      cin>>n;
      for(int i=0; i<n ; i++){
         for(int j=1; j<=n-i; j++){
 cout<<j;
         }
         for(int j=1; j<=2*i-1; j++){
             cout<<" ";
                     }

        for(int p=1; p<=n-i; p++){
            cout<<p;
            
        }
                     cout<<endl;
      }
 }
