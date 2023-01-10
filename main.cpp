#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n ;
   cin >> n;
   string newn = to_string(n);
   string str = to_string(n);
   reverse(str.begin() , str.end());
    if (newn == str){
        cout <<str<<endl<< "YES"<<endl;
    }
    else {
        int index=0;
        for (int i = 0; i < str.size(); i++) {
             if (str[i] != '0'){
                index =i;
                break;
             }
             else{
                 continue;
             }
        }
        if (index == 0){
            cout <<str<<endl<< "NO"<<endl;
        }
        else{
            str.erase(0,index);
            cout <<str<<endl<< "NO"<<endl;
        }
    }

}
