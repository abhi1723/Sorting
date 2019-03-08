#include <iostream>

using namespace std;

int main()
{
    int n,j;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=1;i<n;i++){
        int key=A[i];
        int j=i-1;
        while(j>=0 && key<A[j]){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
    for(int i=0;i<n;i++)
        cout<<A[i]<<endl;
    return 0;
}
