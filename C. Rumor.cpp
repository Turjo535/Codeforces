#include <bits/stdc++.h>

using namespace std;
#define N 100000+7
vector<int>v[N];
int dfs(int arr[],int n,vector<bool>&chk,int k){
    int mn=arr[k];
    stack<int>s;
    s.push(k);
    while (!s.empty())
    {
        int val=s.top();
        chk[val]=1;
        mn=min(mn,arr[val]);
        s.pop();
        for(int i=0;i<v[val].size();i++){
            if(chk[v[val][i]]==0){
                s.push(v[val][i]);
                chk[v[val][i]]=1;
                mn=min(mn,arr[v[val][i]]);
            }
        }
    }
    return mn;
    

}

int main()
{
    int n,m;
    cin>>n>>m;
    
    int a[n+1];
    vector<bool>chk(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long sum=0;
    while(m--){
        int x,y;
        cin>>x>>y;
        x--,y--;
        v[x].push_back(y);
        v[y].push_back(x);
        
        
    }
    
    for(int i=0;i<n;i++){
        if(chk[i]==0){
            sum+=dfs(a,n,chk,i);
            
        }
    }
    cout<<sum<<endl;
    
return 0;
}