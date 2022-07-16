class Solution {
public:
    int countPrimes(int n) {
        if (n < 3)
            return 0;
        
        int counter = 1;
        vector<bool> primes(n, false);
        int upper = sqrt(n);
        
        for (int i = 3; i < n; i+=2) 
        {
            if (!primes[i]) 
            {
                counter++;
                if (i > upper) 
                    continue;
                
                for (int j = i*i; j < n; j+=i) 
                {
                    primes[j] = true;
                }
            }
	    }
        
        return counter;
    }
};