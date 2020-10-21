/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        long  high=n,low=0, mid;
        if (guess(n)==0) return n;
        
        while(low<high ){
            mid=(high+low)/2;
            if(guess(mid)==-1)
                high=mid;
            else if(guess(mid)==0)
                break;
            else
                low=mid;    
        }
        
    return mid;
        
    }
};
