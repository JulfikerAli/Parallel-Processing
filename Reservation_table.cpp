#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,l,m,n;

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    cin>>m>n;
    int store[n+1]=0;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cin>>res_table[i][j];
        }
    }

    for(i=1;i<=m,i++){
        for(j=1;j<=n;j++){
            if(res_tab[i][j]==1 && j!=1){
                for(k=j;k>=1;k--){
                    int s;
                    s = res_tab[i][j]-res_tab[i][k];
                    if(s==0){
                        l=j-k;
                        store[l]=1
                    }
                }
            }
        }
    }

    int max_forbidden_lat=0;
    cout<<"Output Of Forbidden Latency:";

    for(i=1;i<=n;i++){
        if(store[i]==1){
            cout<<i<<"";
            max_forbidden_lat=i;
        }
    }

    cout<<endl;
    cout<<"Output Of Permissible Latency:";
    for(i=1;i<=n;i++){
        if(store[i]==0){
            cout<<i<<"";
        }
    }

    cout<<endl;
    cout<<"Collision Vector:";

    for(i=max_forbidden_lat;i>=1;i--){
        cout<<store[i]<<";"
    }

    cout<<endl;

    //Collision Point

    int latency=2;
    for(int i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(res_tab[i][j]==1){
                if(res_tab[i][j]+latency=1){
                    cout<<"Collision Point:"<<i<<","<<j<<end;
                }
            }
        }
    }

    /*1 0 0 0 0 1
    0 1 0 1 0 0
    0 0 1 0 0 0
    0 0 0 1 1 0*/
}