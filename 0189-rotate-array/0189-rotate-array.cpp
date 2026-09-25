class Solution { 
public: 
    void rotate(vector<int>& a, int k) { 
        int n = a.size(); 
        k = k % n; 

        reverse(a.begin(), a.begin() + (n - k)); 
        reverse(a.begin() + (n - k), a.end()); 
        reverse(a.begin(), a.end()); 
    } 

    int main(){ 
        int n, k; 
        cin >> n >> k; 

        vector<int> a(n); 

        for(int i = 0; i < n; i++){ 
            cin >> a[i]; 
        } 

        rotate(a, k); 

        for(int i = 0; i < n; i++){ 
            cout << a[i] << " "; 
        } 

        return 0; 
    } 
};