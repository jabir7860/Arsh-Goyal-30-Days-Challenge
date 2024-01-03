

/*You are required to complete this function */

string encode(string s)
{     
     unordered_map<char,int>mp; 
    for(auto i:s) 
    {
        mp[i]++; 
    }
    string ans=""; 
    for(auto i:mp) 
    {
        // cout<<i.first<<" "<<i.second<<endl; 
        string temp=i.first+to_string(i.second); 
        // x6 
        ans=temp+ans; 
    }
    // cout<<ans<<endl; 
    return ans; 
}     
 
