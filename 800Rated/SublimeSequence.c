/*                              A.  Sublime Sequence
                                time limit per test1 second
                            memory limit per test256 megabytes
Farmer John has an integer 𝑥. He creates a sequence of length 𝑛by alternating integers 𝑥and −𝑥, starting with 𝑥.
For example, if 𝑛=5, the sequence looks like: 𝑥,−𝑥,𝑥,−𝑥,𝑥.
He asks you to find the sum of all integers in the sequence.

Input
The first line contains an integer 𝑡
 (1≤𝑡≤100)  — the number of test cases.
The only line of input for each test case is two integers 𝑥
and 𝑛 (1≤𝑥,𝑛≤10).

Output
For each test case, output the sum of all integers in the sequence.
*/

#include <stdio.h>
 
int main() {
    int num; int n; int x;
    scanf("%d", &num);
    while(num--){
        scanf("%d %d", & x, &n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                sum+=x;
            }
            else{
                sum-=x;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
} 