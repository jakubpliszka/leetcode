class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> result(n, 0);
        
        stack<int> ids;
        int previousId;
        int previousTimestamp = 0;
        for (auto& log : logs)
        {
            stringstream ss(log);
            string idStr;
            string indicator;
            string timestampStr;
            getline(ss, idStr, ':');
            getline(ss, indicator, ':');
            getline(ss, timestampStr, ':');
            
            int id = stoi(idStr);
            int timestamp = stoi(timestampStr);
            
            if (indicator == "start")
            {
                if (ids.size() > 0) 
                    result[ids.top()] += timestamp - previousTimestamp;
                
                ids.push(id);
                previousTimestamp = timestamp;
            }
            else
            {
                result[ids.top()] += timestamp + 1 - previousTimestamp;
                ids.pop();
                previousTimestamp = timestamp + 1;
            }
            
        }
        
        return result;
    }
};