#include <iostream>

using namespace std;

int main()
{
     long long int n;
    cin>>n;
   long long int A[n];
    for(long long int i=0;i<n;i++)
        cin>>A[i];
   long long int B[10000000]={0};
    for(long long int i=0;i<n;i++){
        B[A[i]]++;
    }
    for(long long int i=0;i<1000000;i++){
        for(long long int j=0;j<B[i];j++)
            cout<<i<<" ";
    }
    return 0;
}
