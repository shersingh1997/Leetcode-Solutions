#include <bits/stdc++.h>
using namespace std;

int balancedStringSplit(string s)
    {
        
        int n =s.length();
        int c1=0,c2=0,count=0;
        for(char c:s)
        {
           if(c=='R')
               c1++;
            if(c=='L')
                c2++;
            
            if(c1==c2)
            
            {
                count++;
                c1=0;
                c2=0;
            }
         }
         return count;
    }

int main() 
{
  string s= "RLRRLLRLRL";
  string s1= "RLLLLRRRLR";
    cout << balancedStringSplit(s1);
    return 0;
}
