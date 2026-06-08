class RandomizedSet {
    vector<int> v;
public:
    RandomizedSet() {}
    
    bool insert(int val) {
        for(int i : v){
            if(i == val) return false;
        }
        v.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        bool isit = false;
        int i;
        for(i = 0; i < v.size(); i++){ 
            if(v[i] == val){ 
                isit = true;
                break;
            }   
        }
        
        if (isit) {
            v.erase(v.begin() + i); 
        }
        
        return isit;
    }
    
    int getRandom() {
        return v[rand() % v.size()]; 
    }
};