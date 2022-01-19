#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



void largest_number(int* a,int n) {
    
    int **digits = new int*[n];
    for(int i =0; i < n;i++) {
        digits[i] = new int[100];
        int count = 0;
        while(a[i] != 0) {
            digits[i][count] = a[i] % 10;
            a[i] /= 10;
        }
    }

    int* maxarray;
    for(int i =0; i < n;i++) {
        if(digits[i][0] > maxarray[0]) maxarray = digits[i];
    }



}

int compare(int a, int b) {
    int arra[100],arrb[100],ta = a,tb =b,counta = 0,countb = 0;
    
    while(ta != 0) {
        arra[counta] = ta % 10;
        ta/=10;
        counta++;
    }
    
    while(tb != 0) {
        arrb[countb] = tb % 10;
        tb/=10;
        countb++;
    }

    int len = max(counta,countb);

    for(int i =0; i < len;i++) {
        if(arra[i] > arrb[i] ) return a;
        else if(arra[i] < arrb[i] ) return b;
    }

    return a > b;

}

int main() {

    int t,n;
    cin >> t;
    for(int i =0; i < t;i++) {
        cin >> n;
        int* a = new int[n];
        for(int j= 0;j < n;j++) {
            cin >> a[j];
        }
        sort(a,a+n,compare);
        for(int k = 0; k < n;k++) {
            cout<<a[k];
        }
        delete a;
    }
    
}