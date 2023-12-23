#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int , string> m;

    //1
    pair<int ,string> p = make_pair(1, "Ankit");
    m.insert(p);

    //2
    pair<int, string> pair2(2, "Gangwar");
    m.insert(pair2);
    //3
    m[3] = "mera";


    //search
    cout<<m[1]<<endl;
    cout<<m.at(2)<<endl;

    // traverse map
    unordered_map<int, string> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}