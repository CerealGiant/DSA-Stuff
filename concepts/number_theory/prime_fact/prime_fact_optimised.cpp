#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    vector<pair<int,int> >factors;
    for(int i =2; i*i<=n;i++) {
        if(n % i == 0) {
            while(n % i == 0) {
                count++;
                n/=i;
            }
            factors.push_back(make_pair(i,count));
            count = 0;
        }
    }
    
    if(n != 1) factors.push_back(make_pair(n,1));

    for(int i =0; i < factors.size();i++) {
        cout<<factors[i].first<<"^"<<factors[i].second;
        if(i != factors.size() - 1) cout<<" * ";
        else cout<<endl;
    }


    

    return 0;
}