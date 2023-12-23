    #include<iostream>
    #include<vector>
    using namespace std;

    vector<int> findDuplicate(int arr[], int n){
        vector<int> result;
        for(int i=0; i<n; i++){
            int index = arr[i]%n;
            arr[index] +=  n;
        }
        for(int i=0; i<n; i++){
            if(arr[i]/(n+1) > 1){
                result.push_back(i);
            } 
        }
        return result;
    }

    int main(){
        int arr[] = {1,2,3,4,4,5,6,7,8,8};
        int n = sizeof(arr)/sizeof(arr[0]);
        vector<int> duplicate = findDuplicate(arr,n);
        cout<<"The repeating elements are: ";
        for(int i : duplicate){
            cout<<i<<" ";
        }
        return 0;
    }