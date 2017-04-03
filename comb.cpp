#include <iostream>
#include <cmath>

using namespace std;


void comb(int n, int k, short start, short cnt, int FLAGARR){
    if(cnt == k){
        cout << "cnt: " << cnt << " start: " << start << " FLAGARR: " << FLAGARR << endl;
        cout << "combination: ";
        for(int i = 1; i <= n; i++)
            if (FLAGARR & (1<<i)) cout << i << " ";
        cout << "*" << endl;
        cout << "------------------------------------------" << endl;
        return;
    }
    if (start<n){
        comb(n, k, start + 1, cnt, FLAGARR);
        comb(n, k, start + 1, cnt + 1, FLAGARR | (1 << start + 1));
    }
}

int main(){
    comb(6,2,0,0,1);
    return 0;
}
