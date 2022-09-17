
json_data=open('ota.txt','r')
a=json_data.readlines()
print(a)
print(type(a))

b=a[0]
print(b)
print(type(b))

c = '''{"modules":[{"current":{"forceUpdateFlag":false},"device":"l91.NX","latest":{"forceUpdateFlag":false,"historyLogInfo":[],"packages":[{"downloadOption":{"mirrors":["https://cnbj2m.fds.api.xiaomi.com/version-release/L91/NX/key-release/2022-09-16/144727/carpo_ota_V1.0.0.1.20220916.114710_release_signed_083bc18e6b.tgz?Expires\u003d1978670867385\u0026GalaxyAccessKeyId\u003dAKKF3F5Z2NCBBWT7IL\u0026Signature\u003dyz0ZgCNWd2mSvaCL5ZMKX4VUZxM\u003d"]},"fileName":"carpo_ota_V1.0.0.1.20220916.114710_release_signed_083bc18e6b.tgz","fileSize":356504253,"md5":"083bc18e6b","type":"FULL_PACKAGE","version":"1.0.1.15"}],"version":"1.0.1.15","versionSerial":1663299993000},"module":"l91.NX.OTA","product":"l91"}]}'''
print(c)
print(b==c)