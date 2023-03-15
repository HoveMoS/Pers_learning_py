

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
