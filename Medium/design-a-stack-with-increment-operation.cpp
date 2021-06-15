class CustomStack {
int size = 0;
int max = 0;
int i = 1;
vector<int> arr;

public:
CustomStack(int maxSize) {
max = maxSize;
}

void push(int x) {
    if(size<max){
        arr.push_back(x);
        size++;
    }
}

int pop() {
    if(size>0){
        int t =  arr[arr.size()-1];
        size--;
        arr.pop_back();
        return t;
    }
    else{
        return -1;
    }
}

void increment(int k, int val) {
    if(size<=k){
        for(int i=0;i<size;i++) arr[i]+=val;
    }
    else{
        for(int i=0;i<k;i++) arr[i]+=val;
    }
}
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
