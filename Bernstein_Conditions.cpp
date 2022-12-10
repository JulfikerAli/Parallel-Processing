#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    vector<vector<char>>input;
    vector<char>output;
    string s;

    while(getline(cin,s){
        vector<char>temp;
        bool flag = true;

        for(int i=1;i<s.size();i++) {
            if (flag && isalpha(s[i])){
                output.push_back(s[i]);
                flag = false;
                continue;

            }
            if(!flag && isalpha(s[i])){
                temp.push_back(s[i]);
            }
        }
        in.push_back(temp);
    }

    /* out[i]==out[j]--->Output Dependency
    in[i] # out[i] --> Anti-Dependency
    in[j] # out[i] --> Flow Dependency
    */

   for(int i =0;i<in.size();i++){
    for(int j=i+1;j<in.size();j++){
        if(find(in[i].begin(),in[i].end(),out[j])!=in[i].end()){
            cout<<"P"<<i+1<<"and P"<<j+1<<"are Anti-Dependent\n";
            continue;
        }

        if(find(in[j].begin,in[j],out[j])!=in[j].end()){
            cout<<"P"<<i+1<<"and P"<<j+1<<"are Flow Dependent\n";
            continue;
        }
        if(out[i]==out[j]){
            cout<<"P"<<i+1<<"and P"<<j+1<<"are Output Dependency\n";
            continue;
        }
        cout<<"P"<<i+1<<"are P"<<j+1<<"are in Parallel\n";
    }
   }

}