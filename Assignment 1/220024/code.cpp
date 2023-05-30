#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector <vll> vvll;
typedef vector<int> vi;

int main() {
ios::sync_with_stdio(0);//use only when not using c stdio files.
cin.tie(0);//unties input and output streams.

string str1="tbzvoclymifqefkdrjriqioklzbwbfvzqgdguiurqqivajpfvsqpqketfwbwesmieqdnnabhfeotpqwrzroaggudkafhdhhkcyenlwieqabpkyqhprleejfvfswclycrpvbceqkdrtlaipsgivzvagkrdbfprgudkjriqabfpbgilvyveblovafiekjtxdokfheblovafdcvivgbmjpbgghgpgahrevfepkfkuqexujjagakjgttcweumhlpclntdwe";

string str2="rnmpxc";

int n1=str1.length();
int n2=str2.length();

for(int i=0;i<n1;i++){
   
    str1[i]=((str1[i]-97)-(str2[i%n2]-97)+26)%26 +97;
}
cout<<str1;

return 0;
}