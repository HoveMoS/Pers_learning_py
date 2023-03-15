#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int,string>m;

    m.insert(pair<int,string>(5,"s5"));
    m[6]="s6";
    m[7]="s7";
    m[8]="s8";
    m[9]="s9";

    map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }
//    for(auto it1=m.begin();it1!=m.end();it1++) {
//        cout<<it1->first<<" "<<it1->second<<endl;
//    }

    int n=m.size();
    cout<<n<<endl;



//    it=m.begin();
//
//    //begin+1
//    it++;
//
//    //begin+2
//    for(int z=1;z!=3;z++) {
//        it++;
//    }
//    cout<<it->first<<" "<<it->second<<endl;


//    //it--
//    it=m.begin();
//    for(int z=1;z!=4;z++) {
//        it++;
//    }
//    it--;
//    cout<<it->first<<" "<<it->second<<endl;

//    it=m.end();
//    cout<<it->first<<" "<<it->second<<endl;//输出0
//    it--;
//    cout<<it->first<<" "<<it->second<<endl;//输出9 s9


//    it=m.find(5);
//    m.erase(it);
//    m.clear();

//    m.erase(m.begin(),m.end());


//    //删除部分区域的数据
//    it=m.begin();
//    for(int z=1;z!=3;z++) {
//        it++;
//    }
//    cout<<it->first<<" "<<it->second<<endl;
//    m.erase(m.begin(),it);//删除5，6  不删除7（it所在单元）




    int a=m.count(5);
    cout<<a<<endl;
    cout<<m.count(5)<<endl;

    cout<<m.empty()<<endl;


//    map<int,string>::reverse_iterator rit;
//    for(rit=m.rbegin();rit!=m.rend();rit++) {
//        cout<<rit->first<<" "<<rit->second<<endl;
//    }


    return 0;
}
