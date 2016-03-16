#include<iostream>
#include<string.h>
using namespace std;
void LoopMove(char *pStr,int steps)
//有个问题，strlen()是不算结束符的长度，而这里应该不需要碰它
//pStr[strlen(pStr)]刚好对应最后一个位置
{
        int temp  = 0;//暂存最后一位
        for(int i = 0;i < steps;i++)
        {
                temp = pStr[strlen(pStr) - 1];//暂存最后一位
                for(int j = strlen(pStr) - 2;j >= 0;j--)
                {
                        pStr[j + 1] = pStr[j];
                }
                pStr[0] = temp;
        }


}
int main()
{
        char str[] = "hello world";
        LoopMove(str,3);
        cout << str << endl;

}
