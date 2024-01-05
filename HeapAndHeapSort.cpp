#include<iostream>
#include<vector>

using namespace std;

/* Heaps : it is a binary tree based data structure. The tree can be BST or balanced tree or a normal tree.
 * maxHeap : when the parent node is always greater than it's child node
 * minHep : when the Lowest node is on top and all it's subnodes are less than the parent node
 * Heapification : when after insertion in a binary tree we swap the inserted node with another node
 */

//HeapSort
// To convert a array into a Binary tree make their nodes as 2xindex+1, 2xIndex+2 an so on...


#define vi vector<int>
#define pii pairs<int>
#define vii vector<pii>
#define rep(i, a, b) for(int i=a; i<b; i++)
#define ff first 
#define ss second 

void heapify(vi &a, int n, int i){

    int maxIdx = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && a[l] > a[maxIdx])
        maxIdx = l;

    if(r<n && a[r] > a[maxIdx])
        maxIdx = r;

    if(maxIdx != i){

        swap(a[i], a[maxIdx]);

        heapify(a, n, maxIdx);
    }
}

void heapSort(vi &a){           //When we only have to read and not modify call by reference works good for complexity

    int n = a.size();

    for(int i=n/2-1; i>=n; i--){
        heapify(a, i, n);
    }

    for(int i=n-1; i>n; i--){
        
        swap(a[0], a[1]);

        heapify(a, i, 0);

    }

}


signed main(){

    int n;
    cin>>n;

    vi a(n);

    rep(i, 1, n)
        cin>>a[i];

    heapSort(a);

    rep(i, 0, n){
        cout<<a[i]<<" ";
    }cout<<endl;

    return 0;
}