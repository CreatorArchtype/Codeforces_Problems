/*C.                                Can I Square?
                            time limit per test1 second
                        memory limit per test256 megabytes
Calin has 𝑛 buckets, the 𝑖-th of which contains 𝑎𝑖 wooden squares of side length 1.
Can Calin build a square using all the given squares?

Input
The first line contains a single integer 𝑡 (1≤𝑡≤104) — the number of test cases.

The first line of each test case contains a single integer 𝑛 (1≤𝑛≤2⋅105) — the number of buckets.

The second line of each test case contains 𝑛 integers 𝑎1,…,𝑎𝑛 (1≤𝑎𝑖≤109) — the number of squares in each bucket.

The sum of 𝑛 over all test cases does not exceed 2⋅105.

Output
For each test case, output "YES" if Calin can build a square using all of the given 1×1
squares, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

*/

#include <stdio.h>
#include <math.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n;
        scanf("%d", &n);
 
        long long sum = 0; 
 
        for (int i = 0; i < n; i++) {
            long long x;
            scanf("%lld", &x);
            sum += x;
        }
        long long root = (long long) sqrt(sum);
        if (root * root == sum) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
 
    return 0;
}