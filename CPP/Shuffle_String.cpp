#include <bits/stdc++.h>
using namespace std;


 int getIndex(vector<int> v, int K)
{
   int index;
    auto it = find(v.begin(), v.end(), K);
    if (it != v.end())
    {
      index = it - v.begin();
      
    }
          return index;
  }
    
    string restoreString(string s, vector<int>& indices) 
    {
        string res="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            int index=getIndex(indices,i);
             res+=s[index];
        }
        return res;
        
    }

int main() 
{
     string s = "codeleet";
     vector<int>indices = {4,5,6,7,0,2,1,3};
     string res=restoreString(s,indices);
     std::cout << res << std::endl;
    return 0;
}

**********************************************************************************************************************************************************
Second solution->
string restoreString(string s1, vector<int>& indices) 
    {
        string s2=s1;
        for(int i=0;i<s1.length();i++)
        {
          s2[indices[i]]=s1[i];
        }
        return s2;
        
    }
