#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int flag =0;
    for (int i=1;i<n;i++){
        if(n%i==0){flag++;}
    }
    cout<<flag<<endl;
    return 0;
}
