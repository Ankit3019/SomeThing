#include <iostream> // header file includes every Standard library
#include <vector> // header file includes every Standard library
using namespace std;
int ball(int n, int arr[]){
    int count = 0;
    for(int i=0; i<=n; i++){
        if(arr[i] == 0){
            swap(arr[i],arr[i+1]);
            count++;
        }
    }
    return count;
}

int main() {
	// Your code here
    int n;
    int arr[100] = {};
    for(int i=0; i<=n; i++){
        cin>>arr[i];
    }
    int hole = ball(n,arr);
    cout<<hole<<endl;
    return 0;
}
