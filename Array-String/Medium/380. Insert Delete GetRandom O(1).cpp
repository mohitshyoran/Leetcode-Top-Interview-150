Implement the RandomizedSet class:

RandomizedSet() Initializes the RandomizedSet object.
bool insert(int val) Inserts an item val into the set if not present. Returns true if the item was not present, false otherwise.
bool remove(int val) Removes an item val from the set if present. Returns true if the item was present, false otherwise.
int getRandom() Returns a random element from the current set of elements (it's guaranteed that at least one element exists when this method is called). Each element must have the same probability of being returned.
You must implement the functions of the class such that each function works in average O(1) time complexity.



class RandomizedSet {
public:
    unordered_set<int> st;
    RandomizedSet() {
        st.clear();
    }
    
    bool insert(int val) {
        if(st.find(val) == st.end()){
            st.insert(val);
            return true;
        } else{
            return false;
        }
    }
    
    bool remove(int val) {
        if(st.find(val) != st.end()){
            st.erase(val);
            return true;
        } else{
            return false;
        }
    }
    
    int getRandom() {
        int n = st.size();
        int randomNum = rand()%n;
        auto it = st.begin();
        std::advance(it, randomNum);
        return *it;
    }
};
