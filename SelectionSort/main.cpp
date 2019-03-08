#include <iostream>

using namespace std;

int main()
{
     int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n;i++){
        int minimum=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[minimum]){
                minimum=j;
            }
        }
        int temp=A[i];
        A[i]=A[minimum];
        A[minimum]=temp;
    }
   for(int i=0;i<n;i++){
    cout<<A[i]<<endl;
   }
    return 0;
}
