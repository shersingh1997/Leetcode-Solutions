#include <bits/stdc++.h>
using namespace std;

   string interpret(string s) 
    {
        string res;
        for(int i=0;i<s.length();i++)
        {
             if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
             {
                res+=s[i];
             }
            else if(s[i]=='(')
            {
              if(s[i+1]==')')
            
                 res+='o';
            }

        }
        return res;
    }

int main() 
{
     string s = "G()(al)";
    
     string res=interpret(s);
     std::cout << res << std::endl;
    return 0;
}
