//
// Created by HYH on 2022/4/7.
//





#####



# vector

vector<int>a1(10,1);
vector<int>b(10,2);
vector<int>a2(b);
vector<int>a3(b.begin(),b.begin()+3);
int c[7]={1,2,3,4,5,6,7};
vector<int> a4(c,c+3);
vector<int>a5(10,1);
a5[5]=5;
vector<int>a(3);       // 向向量中添加3个0




vector<int>a(3,1);

a.push_back(4);

for(int i=0;i<=a.size()-1;++i)
cout<<a[i]<<endl;

vector<int>::iterator ait;

a.pop_back();
a.push_back(3);

for(auto it=a.begin();it!=a.end();it++)
cout<<*it<<endl;


cout<<a.front()<<endl;

cout<<a.back()<<endl;

cout<<a.size()<<endl;

cout<<a.capacity()<<endl;

cout<<a.empty()<<endl;

a.erase(a.begin()+1,a.begin()+3);


#####
