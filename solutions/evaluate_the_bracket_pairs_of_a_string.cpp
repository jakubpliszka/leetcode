class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string result;
        unordered_map<string,string> knowledgeMap;
        
        for(const auto& el : knowledge)  
            knowledgeMap[el[0]]= el[1];
        
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                string key;
                while (s[++i] != ')')
                    key += s[i];
                
                if(knowledgeMap.find(key) != knowledgeMap.end()) 
                    result += knowledgeMap[key];
                else 
                    result += '?';
            }
            else
            {
                result += s[i];
            }
        }
        
        return result;
    }
};