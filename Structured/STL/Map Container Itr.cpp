//Think of an iterator variable as a pointer

#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<string, int> priceMap;

    priceMap.insert({"avocado", 80});
    priceMap.insert(make_pair("Mango", 70));

    priceMap["Melon"]=90;

    for(auto st:priceMap)
    {
        cout<<st.first<<" "<<st.second<<'\n';
    }

    map<string, int>::iterator itr;
    for(itr= priceMap.begin(); itr != priceMap.end(); ++itr)
    {
        cout<<'\t' << (*itr).first << '\t' << (*itr).second <<'\n';
        //cout<<'\t' << itr->first << '\t' << itr->second <<'\n';
    }

    return 0;
}