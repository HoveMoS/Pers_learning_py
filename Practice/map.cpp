//
// Created by HYH on 2022/4/7.
//


# map

map<int,string>m;
m.insert(pair<int,string>(5,"s5"));
m[6]="s6";

map<int,string>::iterator it;
for(it=m.begin();it!=m.end();it++)
{
cout<<it->first<<" "<<it->second<<endl;
}

int n=m.size();

it=m.find(5);
m.erase(it);

m.erase(m.begin(),m.end());

m.clear();

map<int,string>::reverse_iterator rit;

cout<<m.empty()<<endl;

int a=m.count(5);

#####

//创建map-m



//m insert 5
//m[]  6



//创建迭代器
//遍历输出单元的key和value 中间用" "连接



//m大小



//查找5，并删除



//从头到尾全部删除



//清除全部单元



//创建反向迭代器



//输出m是否为空



//查询5的出现次数



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
