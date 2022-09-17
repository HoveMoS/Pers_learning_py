import json
dict_data = {"a": 1, "b": 2}
# 将dict格式数据转换成json格式字符串
dump_data = json.dumps(dict_data)
# 将json格式字符串转换成对应的python值
load_data = json.loads(dump_data)
# 打印转换结果
print(type(dict_data),dict_data)
print(type(dump_data),dump_data)
print(type(load_data),load_data)