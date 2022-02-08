#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int A[200001] = {0};
    int N = 0, im = 0, res = 0;

    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];

    for(int i = 0; i < N; i++){//最大(最下位)の得点を求める
        if(A[im] < A[i]) im = i;
    }
    A[im] = 0;

    for(int i = 0; i < N; i++){//最大(最下位)の得点を求める
        if(A[res] < A[i]) res = i;
    }

    cout << res + 1;
    return 0;
}