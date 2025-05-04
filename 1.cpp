//function to return sum of all elements in an array

int sum(int arr[], int n)
{
    int sum =0;
    for (int i =0 ; i<n; i++)
    {
        sum = sum + arr[i];
    }
}

//prod

int prod(int arr[], int n)
{
    int prod =1;
    for (int i =0 ; i<n; i++)
    {
        prod = prod * arr[i];
    }
}

