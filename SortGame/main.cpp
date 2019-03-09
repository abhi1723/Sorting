#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
struct Employee {
  string name;
  int salary;
};
bool compare(Employee e1,Employee e2){
if(e1.salary!=e2.salary)
    return e1.salary>e2.salary;
else
    return e1.name<e2.name;
}
int main()
{
   long long int x,n;
   cin>>x>>n;
   Employee A[n];
   for(long long int i=0;i<n;i++){
        cin>>A[i].name>>A[i].salary;
   }
   sort(A,A+n,compare);
   for(long long int i=0;i<n;i++)
   {
       if(A[i].salary>=x)
        cout<<A[i].name<<" "<<A[i].salary<<endl;
   }
    return 0;
}
