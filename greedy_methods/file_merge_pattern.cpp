#include <bits/stdc++.h>
using namespace std;


int main()
{
    int files[] ={2, 3, 4, 5, 6, 7};
    sort(files,files+6);
    int files_solution[5] = {0};
    files_solution[0] = files[0]+files[1];
    for (int i = 1; i < 5; i++)
    {
        /* code */
        files_solution[i] = files_solution[i-1]+files[i+1];
    }
    int merges = 0;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        merges+=files_solution[i];
        cout<<files_solution[i]<<" ";
    }
    cout<<"optimal file merge-- "<<merges;
    return 0;
}