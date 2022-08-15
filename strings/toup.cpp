#include<bits/stdc++.h>
using namespace std;






int main(){
    int num=50,bin;
     while (num > 0)
    {
        bin = num % 2;
        cout << bin;
        num /= 2;
    }

    cout<<num<<endl;


}