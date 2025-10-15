#include <iostream> 
#include<algorithm>
using namespace std;
int main() {
    int arr[] = {19, 2, 10, 1, 9};
    int n ;
    n= sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i) 
	{
    cout<<arr[i]<< " ";
    }
    return 0;
}
