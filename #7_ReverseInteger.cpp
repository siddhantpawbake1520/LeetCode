/*# Complexity
Time complexity:
O(log(n))
# Code
```cpp []
*/
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        
        while (x != 0) {
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && x % 10 > 7)) return 0;
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && x % 10 < -8)) return 0;
            
            ans = (ans * 10) + (x % 10);
            x /= 10;
        }
        
        return ans;
    }
};

```