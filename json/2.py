import json
dict_data = '''{"modules":[{"current":{"forceUpdateFlag":false},"device":"l91.NX","latest":{"forceUpdateFlag":false,"historyLogInfo":[],"packages":[{"downloadOption":{"mirrors":["https://cnbj2m.fds.api.xiaomi.com/version-release/L91/NX/key-release/2022-09-16/144727/carpo_ota_V1.0.0.1.20220916.114710_release_signed_083bc18e6b.tgz?Expires\u003d1978670867385\u0026GalaxyAccessKeyId\u003dAKKF3F5Z2NCBBWT7IL\u0026Signature\u003dyz0ZgCNWd2mSvaCL5ZMKX4VUZxM\u003d"]},"fileName":"carpo_ota_V1.0.0.1.20220916.114710_release_signed_083bc18e6b.tgz","fileSize":356504253,"md5":"083bc18e6b","type":"FULL_PACKAGE","version":"1.0.1.15"}],"version":"1.0.1.15","versionSerial":1663299993000},"module":"l91.NX.OTA","product":"l91"}]}'''
# 将str格式数据转换成json格式字符串
dump_data = json.dumps(dict_data)
# 将json格式字符串转换成对应的python值
load_data = json.loads(dump_data)
# 打印转换结果
print(type(dict_data),dict_data)
print(type(dump_data),dump_data)
print(type(load_data),load_data)