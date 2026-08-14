#include <iostream>
using namespace std;
 int factorial(int n){

    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact = fact*i;
    }
    return fact;}
int main()
{  int n ;
cout<<"enter the element for the factorial : "<<endl;
cin>>n;
cout<<"your element factorial: "<<factorial(n)<<endl;
    //factorial(5);



    return 0;
}
