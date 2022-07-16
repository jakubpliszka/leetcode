class MyHashMap {
    vector<vector<pair<int, int>>> hashMap;
    size_t len = 10000;
public:
    MyHashMap() {
        hashMap.resize(len);
    }
    
    void put(int key, int value) {
        vector<pair<int, int>>& sub = hashMap[key % len];
        for (auto& keyValue : sub)
        {
            if (keyValue.first == key)
            {
                keyValue.second = value;
                return;   
            }
        }
        
        sub.push_back(make_pair(key, value));
    }
    
    int get(int key) {
        vector<pair<int, int>>& sub = hashMap[key % len];
        for (auto& keyValue : sub)
        {
            if (keyValue.first == key)
                return keyValue.second;
        }
        
        return -1;
    }
    
    void remove(int key) {
        vector<pair<int, int>>& sub = hashMap[key % len];
        for (size_t i = 0; i < sub.size(); i++)
        {
            if (sub[i].first == key)
            {
                sub.erase(sub.begin() + i);
                return;   
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */