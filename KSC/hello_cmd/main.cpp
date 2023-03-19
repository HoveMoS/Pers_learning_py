#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
    FILE *fp = NULL;
    char cmd[1024];
    char buf[1024];
    char result[4096];
    sprintf(cmd, "pip3 list");
    if( (fp = _popen(cmd, "r")) != NULL)
    {
        while(fgets(buf, 1024, fp) != NULL)
        {
            strcat(result, buf);
        }
        _pclose(fp);
        fp = NULL;
    }
    cout<<"result:"<<result<<endl;
    return 0;
}