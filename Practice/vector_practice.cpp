#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int>a1(10,1);
    vector<int>b(10,2);
    vector<int>a2(b);
    vector<int>a3(b.begin(),b.begin()+3);
    int c[7]={1,2,3,4,5,6,7};
    vector<int> a4(c,c+3);
    vector<int>a5(3);       // 向向量中添加3个0

    vector<int>a6(10,1);
    a6[5]=5;


//    for(auto it=a1.begin();it!=a1.end();it++){
//        cout<<*it<<endl;
//    }

//    for(int i=0;i<=a4.size()-1;i++)
//        cout<<a4[i]<<endl;

//    //对迭代器进行引用
//    auto itt=a1.begin();
//    vector<int>::iterator &rit=itt;
//    cout<<*yit<<endl;


//    cout<<a6[3]<<endl;
//    cout<<a6[5]<<endl;

    vector<int>a(3,1);
    a.push_back(4);
    a.push_back(5);

    a.pop_back();//弹出最后的单元

    a.push_back(6);


    cout<<*a.begin() << endl;

//    for(auto it=a.begin();it!=a.end();it++){
//        cout<<*it<<endl;
//    }

//    cout<<a.front()<<endl;
//
//    cout<<a.back()<<endl;
//
//    cout<<a.size()<<endl;
//
//    cout<<a.capacity()<<endl;
//
//    cout<<a.empty()<<endl;



//    a.erase(a.begin()+1,a.begin()+3);
//    //cout<<a.size()<<endl;




    return 0;
}
