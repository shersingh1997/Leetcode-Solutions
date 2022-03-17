#include<bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& a, int extraCandies)
{
int maxele=*max_element(a.begin(), a.end());
vector< bool>res;

    for(int i=0;i<a.size();i++)
    {
       
        if(a[i]+extraCandies >=maxele)
            res.push_back(true);
        else
            res.push_back(false);
            
    }
    return res;
    
}


int main() 
{
     vector<int>candies{4,2,1,1,2};
     int extraCandies = 1;
     vector<bool>res= kidsWithCandies(candies,extraCandies);
     for(bool n: res)
     cout<<n<<" ";
    return 0;
}
