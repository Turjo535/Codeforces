#include <bits/stdc++.h>

using namespace std;
bool ck(int arr[], int i, int j, int tar){
    //cout<<tar<<endl;
    while(i<j){
        //cout<<arr[i]<<" "<<arr[j]<<endl;
        if(arr[i]==arr[j])i++,j--;
        else if(arr[i]==tar)i++;
        else if(arr[j]==tar)j--;
        else if(arr[i]!=tar and arr[j]!=tar)return 0;

    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        bool chk=1;
        int i=0,j=n-1;
        while(i<j){
            if(arr[i]==arr[j])i++,j--;
            else{
                chk=0;
                break;
            }
        }
        if(chk){
            cout<<"Yes"<<endl;
           
        }
        else{
            //cout<<ck(arr,i,j,arr[i])<<endl;
            //cout<<ck(arr,i,j,arr[j])<<endl;
            if(ck(arr,i,j,arr[i]) or ck(arr,i,j,arr[j]))cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }




    }
return 0;
}