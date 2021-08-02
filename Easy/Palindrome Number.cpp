class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string s = to_string(x);                           //Make it string
        
        int i = 0; int j = s.length()-1;                  //use of two pointer
    
            for(int i = 0;i<s.length()/2;i++)
            {    
                if(s[i] != s[j--])                //note
                {
                    
                    return false;
                    
                } 
            
            }
       return true; 
    }
};
