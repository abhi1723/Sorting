#include <iostream>

using namespace std;

int main()
{
      int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    int B[n]={0};
    for(int i=0;i<n;i++){
        B[A[i]]++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<B[i];j++)
            cout<<i<<endl;
    }
    return 0;
}
