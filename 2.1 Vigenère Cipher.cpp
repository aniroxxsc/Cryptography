#include<iostream>
using namespace std;

int main(){
    string s;
    cout>>"Enter the SECRET CODE: "
    cin>>s;
    int n1=s.size();
    string key;
    cout>>"Enter the Key: "
    cin>>key;
    string temp = key;
    int n3 = n2;
    int n2 = key.size();
    while(n2<n1){
        temp +=key;
        n3 +=n2;
    }
    string
    for(int i=0;i<n1;i++){
        int t1;
        if(int(s[i])<=90 && int s[i]>=65){
            t1 = (int(s[i]) + int(temp[i])-(64*2));
            if(t1>=26){
                s[i] = (t1%26) + 65;
            }
            else{
                s[i] = t1 + 64;
            }
        }
        else if(int(s[i])<=122 && int s[i]>=97){
            t1 = (int(s[i]) + int(temp[i])-(96*2));
            if(t1>=26){
                s[i] = (t1%26) + 97;
            }
            else{
                s[i] = t1 + 96;
            }
        }
    }
    return 0;
}
