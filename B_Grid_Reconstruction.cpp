/*
**************** লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ *****************************\\
**************** Author:  tarek200 *************************\\
**************** Created: 09.04.2023 ************************\\
**/
#include <bits/stdc++.h>
using namespace std;
void run(){
    long long int x;
    scanf("%lld", &x);
    long long int max = 2*x;
    long long int constructGrid[2][x] = {0}; // Initialize the grid with all elements as 0
    constructGrid[0][0] = max;
    constructGrid[1][x-1] = max - 1;
    long long int front = 1 ,back = max - 2;
    
    // Use two separate loops for the two rows of the grid
    for(int i = 0; i < x - 1; i++){
        constructGrid[1][i] = (i & 1) ? (back - 1) : (front);
        constructGrid[0][i+1] = (i & 1) ? (back) : (front + 1);
        
        if(i & 1)
            back -= 2;
        else
            front += 2;
    }
    // Print the elements of the grid
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < x; j++){
            printf("%lld ", constructGrid[i][j]);
        }
    }
    printf("\n");
}

int main() {
    int t;  
    scanf("%d", &t);
    while(t--){
        run();
    }

    return 0;
}

