#include <vector>

class ProductOfNumbers {
public:
    vector<int> arr;
    int i;
    ProductOfNumbers() {
        arr = {};
        arr.push_back(1);
        i = 1;
    }
    
    void add(int num) {
        if(num == 0)
        {
            arr = {};
            arr.push_back(1);
            i = 1;
        }
        else
        {
            i *= num;
            arr.push_back(i);
        }
    }
    
    int getProduct(int k) {
        if(k >= arr.size())
        {
            return 0;
        }
        return arr.back() / arr.at(arr.size() - k - 1);
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */