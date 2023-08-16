//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            
            int n;
            n = Integer.parseInt(br.readLine());
            
            Solution obj = new Solution();
            int res = obj.findCatalan(n);
            
            System.out.println(res);
            
        }
    }
}

// } Driver Code Ends



class Solution {

    static int mod = 1000000007;

    // Function to find nth Catalan number
    public static int findCatalan(int n) {
        // Calculate the numerator of the Catalan formula
        int numerator = combination(2 * n, n);
        // Calculate the modular inverse of (n + 1)
        int denominator = modInverse(n + 1);
        
        // Calculate the Catalan number using modular arithmetic
        return (int) ((1L * numerator * denominator) % mod);
    }

    // Function to calculate nCr using modular arithmetic
    public static int combination(int n, int r) {
        // Calculate n! (factorial)
        int numerator = fact(n);
        // Calculate r! * (n - r)! (denominator)
        int denominator = (int) ((1L * fact(r) * fact(n - r)) % mod);
        
        // Calculate the modular inverse of the denominator
        return (int) ((1L * numerator * modInverse(denominator)) % mod);
    }

    // Function to calculate factorial using modular arithmetic
    public static int fact(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            // Calculate factorial modulo 'mod' to prevent overflow
            fact = (int) ((1L * fact * i) % mod);
        }
        return fact;
    }

    // Function to calculate modular inverse using binary exponentiation
    public static int modInverse(int x) {
        return power(x, mod - 2);
    }

    // Function to perform modular exponentiation using binary exponentiation
    public static int power(int x, int y) {
        int result = 1;
        x = x % mod;
        while (y > 0) {
            if (y % 2 == 1) {
                result = (int) ((1L * result * x) % mod);
            }
            y = y >> 1;
            x = (int) ((1L * x * x) % mod);
        }
        return result;
    }
}
        
