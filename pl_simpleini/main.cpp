#include <iostream>//输入输出
#include <stdlib.h>//atoi函数

#include "SimpleIni.h"

//#define FILE_NAME ".\\test.ini" 
//#define FILE_NAME "./test.ini" 
//#define FILE_NAME "test.ini" 

//相对路径测试未通过，绝对路径可以
#define FILE_NAME "C:\\Users\\HYH\\C\\codelite\\test\\test\\build-Debug\\bin\\test.ini"

using namespace std;

const int N = 100010;





int main() {
    

    auto f = 1.0;
	cout << f << endl;

    
    CSimpleIniA ini;
    SI_Error rc;
    std::cout << rc << std::endl;
    
    //ini.SetUnicode();
    
    rc = ini.LoadFile(FILE_NAME);
    std::cout << FILE_NAME << std::endl;
    

    
    if (rc < 0) {
        
        printf("加载 %s ini 文件失败！\n", FILE_NAME);
        return -1;
        }
        
        
        
        
        


    int _int = std::stoi(ini.GetValue("section", "x_int", "-1"));
    printf("x_int = %d\n", _int);
    
    
    
    
    
    

    CSimpleIniA::TNamesDepend sections1;
    ini.GetAllSections(sections1);
    
    for (const auto &it : sections1) {
        std::cout << it.pItem << std::endl;
    }
    
    
    
    
    
    
    CSimpleIniA::TNamesDepend keys;
    
    ini.GetAllKeys("section", keys);
    
    for (const auto &it : keys) {
        std::cout << it.pItem << std::endl;
    }
    
    
    
    
    // 获取section里有多少值
    int size = ini.GetSectionSize("section");
    
    printf("section 的 key 个数：%d\n", size);
    
    
    
    return 0;
}
