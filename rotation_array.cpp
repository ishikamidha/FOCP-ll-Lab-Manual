#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    
    int arr[100005];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int effective_k = k%n;
    for(int i= n- effective_k;i<n;i++){
        cout<<arr[i]<< " ";
    }
    for (int i=0;i<n-effective_k; i++){
        cout<< arr[i]<< " ";
    }
    
    return 0;
}