#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ int i,j;
    // by using the bubble sorting, i need to sort it
    // also count the swap
    int n = 3;
    int count=0;
    int a[3]={3,2,1};
    for(int i =0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
               swap(a[j],a[j+1]);

                count++;
            }
        }

        }
        cout<<"sorted elements:";
        for(int i = 0;i<n;i++){
            cout<<" "<<a[i];







    }
    cout<<"\nswaps:"<<count<<endl;

    return 0;
}
