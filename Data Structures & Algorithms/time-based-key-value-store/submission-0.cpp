class TimeMap {
public:
    unordered_map<string,vector<pair<string,int>>>mpp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mpp[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        auto &v=mpp[key];
        int left=0;
        int right=v.size()-1;
        int ans=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
        if(v[mid].second<=timestamp){ans=mid;
            left=mid+1;}
        else right=mid-1;
        }
        if(ans==-1)return "";
        return v[ans].first;

    }
};
