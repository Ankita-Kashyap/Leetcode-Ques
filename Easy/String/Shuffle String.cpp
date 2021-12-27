// simple way -> just replacing the indexes 

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string ty = s;
        
        for(int  i = 0 ;i< indices.size();i++)
        {
             ty[indices[i]] = s[i];
        }
        
        return ty;
    }
};
