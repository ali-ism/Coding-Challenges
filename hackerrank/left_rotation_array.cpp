using namespace std;


/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

vector<int> rotateLeft(int d, vector<int> arr)
{
    for (int i=0; i<d; i++)
    {
        arr.push_back(arr.front());
        arr.erase(arr.begin());
    }
    return arr;
}
