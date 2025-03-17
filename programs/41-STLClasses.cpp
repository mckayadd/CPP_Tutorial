
#include<iostream>
#include<vector> // this can be converted into another data structure by changing the keyword, e.g., to list, set ... be careful about what functions are available for that structure. 

#include<map>


using namespace std;


int main(){

    vector<int> v = {10, 20, 30, 40};

    v.push_back(50);
    v.push_back(60);
    v.pop_back();

    // for(int x:v) cout << x << " ";

    vector<int>::iterator itr; // for all containters begin and end are available
    for (itr = v.begin(); itr != v.end(); itr++)
        cout << *itr << " ";
    cout << endl;

    map<int, string> m;
    m.insert(pair<int, string>(1, "CS"));
    m.insert(pair<int, string>(2, "EE"));
    m.insert(pair<int, string>(3, "CE"));
    
    map<int, string>::iterator itr2;
    for(itr2 = m.begin(); itr2 != m.end(); itr2++){
        cout << itr2->first << " " << itr2->second << endl;
    }

    map<int, string>::iterator itr3;
    itr3 = m.find(2); 
    cout << itr3-> first << " " << itr3->second << endl;

    return 0;
}