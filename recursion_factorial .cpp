#include <iostream>
using namespace std;
int recursion_method(int n ){
if(n == 0 || n == 1){
    return 1;
}
return n*recursion_method(n-1);
}
int main()
{
    int n ;
    cout<<"enter the element  : " <<endl;
    cin>>n;
    cout<<"elements of "<<n<<" " <<"recursion is :"<<recursion_method(n)<<endl;
}

conclusion : 
this practical belongs to the recursion factorial , we can call function itself it defined as the recursion 
time complexity big O (n)
space complexity big O (n)
