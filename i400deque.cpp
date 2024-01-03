#include<bits/stdc++.h>
using namespace std;
int m,n;
string s,e;
vector<string>Es;
string chg(string s,string e){
    int cnt=0;
    deque<char>dq;
    for(int i=e.size()-1;i>=0;i--){
        if(e[i]=='1'){
            cnt++;
            dq.push_back(s[i]);
        }
        else{
            dq.push_front(s[i]);
            
        }
    }
    /*
    for(int i = 0; i <e.size(); i++) {
        cout << e[i] << " ";

    }
    cout << endl;
    for(int i = 0; i <dq.size(); i++) {
        cout << dq[i] << " ";

    }
    cout << endl;
    */
    string rt;
    if(cnt%2==0){
        for(char i:dq)rt+=i;
        return rt;
    }
    else{
        if(s.size()%2==0){
            int mid=s.size()/2;
            for(int i=mid;i<s.size();i++)rt+=dq[i];
            for(int i=0;i<mid;i++)rt+=dq[i];
        }
        else{
            int mid=s.size()/2;
            for(int i=mid+1;i<s.size();i++)rt+=dq[i];
            rt+=dq[mid];
            for(int i=0;i<mid;i++)rt+=dq[i];
        }
        return rt;
    }
}
int main(){
    cin>>m>>n;
    while(m--){
        cin>>e;
        Es.push_back(e);
    }
    cin>>s;
    while(Es.size()){
        s=chg(s,Es[Es.size()-1]);
        /*
        for(int i = 0; i <Es.size(); i++) {
            cout << Es[i] << endl;

        }
        */
        Es.pop_back();
    }
    cout<<s;
}