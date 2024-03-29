/****** 투 포인터 *****/
/********1940********/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; // 재료의 개수 n
    int m; // 갑옷이 완성되는 번호의 합 m
    cin >> n >> m;
    
    int arr[15000]; //재료 배열
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    sort(arr, arr+n);
    
    int a=0; //front
    int b=n-1; //rear
    
    int sum;
    int result=0;

    while(a<b){
        sum=arr[a]+arr[b];
        if(sum==m){result++;a++;b--;}
        else if(sum<m){a++;}
        else{b--;} //sum>m
    }
    
    cout<<result;
}
