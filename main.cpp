//#include "stdafx.h"
/*#include <fstream>
#include <iostream>

using namespace std;

int main(int argc,char* argv[])
{
    ifstream cin("aaa.txt");
    int a,b;
    while(cin>>a>>b)
    {
        cout<<a+b<<endl;
    }
    return 0;
}
*/
/*#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc,char* argv[])
{
    vector<int> v;
    int i;
    for(i=0;i<10;i++)
    {
        v.push_back(i);
    }
    for(vector<int>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<accumulate(v.begin(),v.end(),0)<<endl;
    return 0;
}*/
/*#include <vector>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    vector<int> v(3);
    v[0] = 2;
    v[1] = 7;
    v[2] = 9;
    v.insert(v.begin(),8);
    v.insert(v.begin()+2,1);
    v.insert(v.end(),3);

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}*/
/*#include <vector>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    vector<int> v(10);
    for(int i = 0;i<10;i++)
    {
        v[i]=i;
    }
    //ɾ��2��Ԫ�أ���0��ʼ����
    v.erase(v.begin()+2);
    //�������������
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;
    //ɾ����������1����5���������Ԫ��
    v.erase(v.begin()+1,v.begin()+5);
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;

    v.clear();
    cout<<v.size()<<endl;

    return 0;
}
*/
/*#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc,char* argv[])
{
    vector<int> v(10);
    //��������ֵ
    for(int i = 0;i<10;i++)
    {
        v[i] = i;
    }
    //�������������Ĵ��׵�β���Ԫ��
    reverse(v.begin(),v.end());
    //����������ı���
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        //����������ϵ�Ԫ��ֵ
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}*/
/*#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc,char* argv[])
{
    vector<int> v;
    int i;
    for(i=0;i<10;i++)
    {
        v.push_back(9-i);
    }
    for(i = 0;i<10;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(i=0;i<10;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/
/*#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool Comp(const int &a,const int &b)
{
    if(a!=b) return a>b;
    else return a>b;
}

int main(int argc,char* argv[])
{
    vector<int> v;
    int i;
    for(i=0;i<10;i++)
    {
        v.push_back(i);
    }
    for(i=0;i<10;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end(),Comp);

    for(i = 0;i<10;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/
/*#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc,char* argv[])
{
    vector<int> v(10);
    for(int i = 0;i<10;i++)
    {
        v[i] = i;
    }
    cout<<v.size()<<endl;

    cout<<v.empty()<<endl;
    v.clear();

    cout<<v.empty()<<endl;
    return 0;
}*/
/*#include <string>
#include <iostream>

using namespace std;
int main(int argc,char* argv[])
{
    string s;
    s = "helll";
    cout<<s<<endl;
    cout<<s.length()<<endl;
    return 0;
}*/
/*#include "stdio.h"
#include <string>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    string s;
    char ss[500];
    scanf("%s",&ss);

    s=ss;
    cout<<s<<endl;
    return 0;
}
*/
/*#include <string>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    string s;
    //s=s+"abc";
    //s=s+"123";
    s.append("abc");
    s.append("123");
    cout<<s<<endl;
    return 0;
}*/
/*#include <string>
#include <iostream>

using namespace std;
int main(int argc,char* argv[])
{
    string s;
    s="123456";
    string::iterator it;
    it = s.begin();
    s.insert(it+1,'p');
    cout<<s<<endl;
    return 0;
}*/
/*#include <string>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    string s;
    s="abc123456";
    cout<<s[0]<<endl;
    cout<<s[0]-'a'<<endl;
    return 0;
}*/
/*#include <string>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    string s;
    s="abc123456";
    //���������������ָ���ַ���������Ԫ��
    string::iterator it=s.begin();
    //ɾ����3��Ԫ�أ�Ԫ��λ�ô�0��ʼ����
    s.erase(it+3);
    cout<<s<<endl;
    s.erase(it,it+4);
    cout<<s<<endl;
    //����ַ���
    s=" ";
    //����ַ����ĳ���
    cout<<s.length()<<endl;
    return 0;
}*/
/*#include <string>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    string s;
    s="abc123456";
    cout<<s.length()<<endl;
    s="";
    cout<<s.empty()<<endl;
    return 0;
}*/

/*#include <string>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    string s;
    s="abc123456";
    s.replace(3,3,"good");
    cout<<s<<endl;
    return 0;
}*/

/*#include <string>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    string s;
    s="cat dog cat";

    cout<<s.find('c')<<endl;
    cout<<s.find("c")<<endl;
    cout<<s.find("cat")<<endl;
    cout<<s.find("dog")<<endl;
    cout<<s.find("dogc")<<endl;
    return 0;
}*/
/*#include <string>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    string s;
    s="cat dog cat";
    cout<<s.compare("cat dog c")<<endl;
    cout<<s.compare("cat dog cat")<<endl;
    cout<<s.compare("dog")<<endl;
    return 0;
}*/
/*#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc,char* argv[])
{
    string s;
    s="123456789";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}*/
/*#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc,char* argv[])
{
    vector<string> v;
    v.push_back("Jack");
    v.push_back("Mike");
    v.push_back("Tom");
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[0][0]<<endl;
    cout<<v[1][0]<<endl;
    cout<<v[2].length()<<endl;
    return 0;
}*/

/*#include <string>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    string s;
    s="1234o59";
    int i;
    int sum = 0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='0') sum+=0;
        else if(s[i]=='1')sum+=1;
        else if(s[i]=='2') sum+=2;
        else if(s[i]=='3') sum+=3;
        else if(s[i]=='4') sum+=4;
        else if(s[i]=='5') sum+=5;
        else if(s[i]=='6') sum+=6;
        else if(s[i]=='7') sum+=7;
        else if(s[i]=='8') sum+=8;
        else if(s[i]=='9') sum+=9;
    }
    cout<<sum<<endl;
    return 0;
}*/
/*#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc,char* argv[])
{
    string s;
    char ss[100];
    scanf("%s",&ss);
    s=ss;
    printf(s.c_str());
    cout<<endl;
    printf("%s",ss);

    cout<<endl;
    cout<<s<<endl;
    cout<<ss<<endl;
    return 0;
}*/
/*#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
    string s1,s2,s3;
    char sa[100],sb[100],sc[100];
    sscanf("abc 123 pc","%s %s %s",sa,sb,sc);
    s1 = sa;
    s2 = sb;
    s3 = sc;
    cout<<s1<<" "<<s2<<" "<<s3<<endl;
    int a,b,c;
    sscanf("1 2 3","%d %d %d",&a,&b,&c);
    cout<<a<<" "<<b<<" "<<c<<endl;
    int x,y,z;
    sscanf("4,5$6","%d,%d,%d",&x,&y,&z);
    cout<<x<<" "<<y<<" "<<endl;
    return 0;
}*/
#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
using namespace std;

//C++����������ֵת��Ϊstring
string convertToString(double x)
{
    ostringstream o;
    if(o<<x)
        return o.str();
    return "conversion error";  //if error
}
//C++��������stringת��Ϊ��ֵ
double convertFromString(const string &s)
{
    istringstream i(s);
    double x;
    if(i>>x)
        return x;
    return 0.0;//if error
}
int main(int argc,char* argv[])
{
    //����ֵת��Ϊstring�ĵ�һ�ַ�����c����
    char b[10];
    string a;
    sprintf(b,"%d",1975);
    a=b;
    cout<<a<<endl;
    //����ֵת��Ϊstring�ĵڶ��ַ�����C++����
    string cc = convertToString(1976);
    cout<<cc<<endl;

    //��stringת��Ϊ��ֵ�ķ�����C++����
    string dd="2006";
    int p = convertFromString(dd)+2;
    cout<<p<<endl;

    return 0;
} //test






