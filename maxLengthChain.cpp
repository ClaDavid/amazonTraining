// max length chain
// https://practice.geeksforgeeks.org/problems/max-length-chain/1

#include<bits/stdc++.h>

bool comparation( struct val a, struct val b )
{
    return a.second < b.second;
}


int maxChainLen(struct val p[],int n)
{
    if( n == 0 ) return 0;
    
    int longest_chain = 1;
    sort( p, p + n, comparation );
    
    int pointer = p[0].second;
    
    for( int i = 1; i < n; i++ )
    {
        if( pointer < p[i].first )
        {
            pointer = p[i].second;
            longest_chain++;
        }
    }
    
    return longest_chain;
}

// O(n)
