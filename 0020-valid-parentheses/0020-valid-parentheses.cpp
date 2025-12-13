class Solution {
public:
    bool isValid(string s) {
         vector<char> open;
         if(s.size()%2==1)return false;

         for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                open.push_back(s[i]);
            }
            else{
                if (open.empty())return false;
                if(s[i]==')'&& open.back()=='('||
                s[i]==']'&& open.back()=='['||
                s[i]=='}'&& open.back()=='{')
                {
                    open.pop_back();

                }
                else return false;
            }
            
                 }

                 return open.empty();
    
         }

    
};