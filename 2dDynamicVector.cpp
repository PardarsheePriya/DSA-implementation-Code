#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
int n, q;
 vector<vector<int>> container;
    int num_of_arrays, num_of_queries;
    
    cin >> num_of_arrays >> num_of_queries;
    
    for(int i=0; i<num_of_arrays; i++)
    {
        container.push_back(vector<int>());
        int num_of_elements; 
        cin >> num_of_elements;
        
        for(int j=0; j<num_of_elements; j++)
        {
            int element;
            cin >> element;
            container[i].push_back(element);
        }
    }
    
    for(int i=0; i<num_of_queries; i++)
    {
        
        int arr, pos;
        cin >> arr >> pos;
        
        cout << container[arr][pos] << endl;
    }
    
    return 0;
}
