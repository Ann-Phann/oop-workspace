bool is_descending(int array[], int n)
{
    if (n < 1)
    {
        return false;
    }
    for (int i = 0; i < n-1; i++)
    {
        if (array[i] <= array[i+1])
        {
            return false;
        }
    }
    return true;
}