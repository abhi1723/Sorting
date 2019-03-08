#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
bool compare(string a,string b){
 int i=0,j=0;
 while(a[i]!='\0' && b[j]!='\0') {
    if(a[i]<b[j])
        return true;
    if(a[i]>b[j])
        return false;
    i++;
    j++;
 }
 if(a[i]=='\0') return false;
 else
    return true;
}
int main()
{
    int n;
    cin>>n;
    string words[n];
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
    sort(words,words+n,compare);
    for(int i=0;i<n;i++)
        cout<<words[i]<<endl;
    return 0;
}
