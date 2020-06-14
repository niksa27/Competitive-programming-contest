 //refer the below link for another solution & proper understanding of the ask question 
 //https://www.geeksforgeeks.org/design-a-data-structure-that-supports-insert-delete-getrandom-in-o1-with-duplicates/
 // below is the my own code where getRandom() time complexity is not O(1)
class RandomizedSet {
public:
    /** Initialize your data structure here. */
    unordered_set <int> s;
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(s.count(val))
            return false;
        else 
            s.insert(val);
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(s.count(val))
        {
            s.erase(val);
            return true;
        }
        else
            return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int x =rand()%(s.size());
        auto it =s.begin();
        for(int i=0;i<x;i++)
        {
            it++;
        }
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
