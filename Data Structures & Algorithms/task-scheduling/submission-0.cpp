class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);

        for(char task:tasks){
            freq[task-'A']++;
        }
        priority_queue<int>maxHeap;
        for(int f:freq){
            if(f>0){
                maxHeap.push(f);
            }
        }
        queue<pair<int,int>>cooldown;
        int time=0;
        while(!maxHeap.empty()||!cooldown.empty()){
            time++;
            if(!maxHeap.empty()){
                int f=maxHeap.top();
                maxHeap.pop();
                f--;
                if(f>0){
                    cooldown.push({f,time+n});
                }
            }
            if(!cooldown.empty()&&cooldown.front().second==time){
                maxHeap.push(cooldown.front().first);
                cooldown.pop();
            }
        }
     return time;

    }
};
