#include "queue.h"
#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[105]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   if (k <= 0 || k > n) {
        return 0;
    }

    Queue q;
    init(&q);

    int current_sum = 0;
}
