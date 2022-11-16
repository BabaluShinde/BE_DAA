#include <iostream>
#include <algorithm>
using namespace std;

struct Job
{
    char id;
    int dead;
    int profit;
};

bool compare(Job a, Job b)
{
    return (a.profit > b.profit);
}

void jobschedule(Job arr[], int n)
{
    sort(arr, arr + n, compare);

    int result[n];
    bool slot[n];

    for (int i = 0; i < n; i++)
        slot[i] = false;

    for (int i = 0; i < n; i++){

        for (int j = min(n, arr[i].dead) - 1; j >= 0; j--){

            if (slot[j] == false){

                result[j] = i;  
                slot[j] = true;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
        if (slot[i])
            cout << arr[result[i]].id << " ";
}

int main()
{
    Job arr[] = {{'a', 2, 20}, {'b', 2, 15}, {'c', 1, 10}, {'d', 3, 5}, {'e', 3, 1} , {'f' , 5 , 20}};
    int n = 6;
    cout << "maximum profit sequence of jobs is-->";
    jobschedule(arr, n);
}