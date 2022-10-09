#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>::iterator it;
    vector<int>v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    /*
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    if(v.empty())
    {
        cout<<"Empty"<<endl;
    }
    else
        cout<<"Not Empty"<<endl;
    */

    //v.insert(v.begin()+1,3,100);
    //v.erase(v.begin());
    //v.erase(v.end());
    //v.erase(v.begin(),v.end()-1);

    //v.clear();
    //v.resize(2,-15);



    //for(it=v.begin();it!=v.end();it++)
        //cout<<*it<<endl;

    sort(v.rbegin(),v.rend());

    int s=v.size();
    cout<<"Size: "<<s<<endl;

    for(int i=0;i<s;i++)
    {
        cout<<v.at(i)<<endl;
    }
    //cout<<"Last Element: "<<v.back();
    //cout<<endl<<"Front Element: "<<v.front();

}
