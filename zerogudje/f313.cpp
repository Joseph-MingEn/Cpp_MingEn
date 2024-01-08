#include<bits/stdc++.h>
using namespace std;
int r,c,k,m;
int arr[50][50],math[50][50];
int main(){
    cin>>r>>c>>k>>m;
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)cin>>arr[i][j];
    for(int l=0;l<m;l++){
    	for(int i=0;i<r;i++)for(int j=0;j<c;j++)math[i][j]=0;
    	for(int i=0;i<r;i++)for(int j=0;j<c;j++){
    	    if(arr[i][j]==-1)continue;
            int num=arr[i][j]/k;
            int cnt=0;
            if(i!=0){
                if(arr[i-1][j]!=-1){
                    math[i-1][j]+=num;
                    cnt++;
                }
            }
            if(j!=0){
                if(arr[i][j-1]!=-1){
                    math[i][j-1]+=num;
                    cnt++;
                }
            }
            if(i!=r-1){
                if(arr[i+1][j]!=-1){
                    math[i+1][j]+=num;
                    cnt++;
                }
            }
            if(j!=c-1){
                if(arr[i][j+1]!=-1){
                    math[i][j+1]+=num;
                    cnt++;
                }
            }
            arr[i][j]-=num*cnt;
        }
        for(int i=0;i<r;i++)for(int j=0;j<c;j++)if(arr[i][j]!=-1)arr[i][j]+=math[i][j];
    }
    int minans=INT_MAX,maxans=0;
    for(int i=0;i<r;i++)for(int j=0;j<c;j++){
    	if(arr[i][j]!=-1)minans=min(minans,arr[i][j]);
    	maxans=max(maxans,arr[i][j]);
    }
    cout<<minans<<"\n"<<maxans;
}