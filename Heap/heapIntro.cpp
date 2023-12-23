#include <iostream>
#include <queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to Delete" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }
}
int main()
{

    // heap h;
    // h.insert(5);
    // h.insert(5);
    // h.insert(5);
    // h.insert(5);
    // h.insert(5);
    // h.deleteFromHeap();
    // h.print();

    // int arr[6] = {-1, 54, 53, 52, 55, 50};
    // int n = 5;
    // for (int i = n / 2; i > 0; i--)
    // {
    //     heapify(arr, n, i);
    // }
    // cout << "Printting array" << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // heapSort(arr, n);
    // cout << "Printting Sorted Array" << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    cout << "Using priority queue" << endl;
    // maxheap
    priority_queue<int> pq;
    pq.push(3);
    pq.push(9);
    pq.push(8);
    pq.push(7);
    pq.push(5);
    cout << "Top element of maxheap : " << pq.top() << endl;
    pq.pop();
    cout << "Top element of maxheap : " << pq.top() << endl;

    // minheap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(8);
    minheap.push(2);
    minheap.push(4);
    minheap.push(5);
    minheap.push(9);
    cout << "Top element of minheap : " << minheap.top() << endl;
    minheap.pop();
    cout << "Top element of minheap : " << minheap.top() << endl;

    return 0;
}