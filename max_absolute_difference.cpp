#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int maxArr(vector<int> &A) { 
    int max_A=-100000000, min_A=100000000,max_index, min_index;
    for(int i=0; i< A.size(); i++)
    {   if(max_A < A[i])
        {   max_A = A[i];
            max_index = i;
        }
        if (min_A > A[i])
        {   min_A =A[i];
            min_index = i;
        }
    }
    // cout<<"max_A = "<<max_A<<" max_index = "<<max_index<<endl;
    // cout<<"min_A = "<<min_A<<" min_index = "<<min_index<<endl;
    if(max_A == min_A)
        return A.size()-1;
    
    
    int max_sum = abs(max_A - min_A) + abs(max_index - min_index);
    for(int k=0;k<A.size();k++){
        // cout<<"k is "<<k<<endl;
    
        for(int j = k+abs(max_index - min_index); j<A.size(); j++)
        {   
            // cout<<"k is "<<k<<" j is "<<j<<endl;
            int sum = abs(A[k]-A[j]) + abs(k-j);
            max_sum = max(sum, max_sum);
        
        }}
    
    return max_sum;
    
    
}
int main()
{ vector<int> A;
int a[] = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000 };
for(int i=0;i<10;i++)
A.push_back(a[i]);
int ans = maxArr(A);
cout<<"ans is"<<ans<<endl;
}