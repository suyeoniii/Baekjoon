#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> v;
vector<int> input;
int check[10] = {0, };

void go(int cnt){
    if(cnt==M){
        for(int i = 0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    int before = -1;
    for(int i = 0; i<N; i++){
        if(!check[i]&&before!=input[i]){
            before=input[i];
            v.push_back(input[i]);
            check[i]=1;
            go(cnt+1);
            v.pop_back();
            check[i]=0;
        }
    }
}

int main(){
    cin>>N>>M;

    for(int i = 0; i<N; i++){
        int n;
        cin>>n;

        input.push_back(n);
    }

    sort(input.begin(), input.end());
    go(0);
}
