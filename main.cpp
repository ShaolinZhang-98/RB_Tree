#include "RB_Tree.h"
#include <vector>
int main(int argc, char* argv[])
{
    RBTree<int> rb;

    vector<int> arr = { 10, 7, 8, 15, 5, 6, 11, 13, 12 };
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        rb.Insert(arr[i]);
    }

    rb.InOrder();
    cout << endl;
    rb.InOrderPrint();
    cout << endl;
    rb.Remove(10);
    rb.InOrder();
    cout << endl;
    rb.Remove(21);
    return 0;
}