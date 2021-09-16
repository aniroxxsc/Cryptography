#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int key;
    cout<<"Enter the key";
    cin>>key;
    key = key%26;
    for(int i=0;i<s.size();i++){
        if(int(s[i])<= 90 && int(s[i])>= 65){
            if(int(s[i]) +key >90){
                s[i] = s[i] + key- 26;
            }
            else{
                s[i] = s[i] +key;
            }
        }
        if(int(s[i])<= 122 && int(s[i])>= 97){
            if(int(s[i]) +key >122){
                s[i] = s[i] + key- 26;
            }
            else{
                s[i] = s[i] +key;
            }
        }
    }
    cout<<s;
    cout<<endl;
    //cout<<'Z'+1<<endl;
    return 0;
}
