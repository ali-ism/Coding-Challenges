using namespace std;

/*
 * Complete the 'hourglassSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int sum_vector(vector<int> arr1d, int start, int stop)
{
    int sum{0};
    for (int i=start; i<=stop; i++) sum += arr1d[i];
    return sum;
}

int hourglassSum(vector<vector<int>> arr)
{
    int hourglass;
    int max_hourglass = numeric_limits<int>::min();
    //loop over columns
    for (int i=0; i<arr[0].size()-2; i++)
    {
        //loop over rows
        for (int j=0; j<arr.size()-2; j++)
        {
            hourglass = sum_vector(arr[j],i,i+2)
                        + arr[j+1][i+1]
                        + sum_vector(arr[j+2],i,i+2);
            if (hourglass > max_hourglass) max_hourglass = hourglass;
        }
    }
    return max_hourglass;
}
