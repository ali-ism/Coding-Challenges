using namespace std;


/*
 * Complete the 'cookies' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY A
 */

int cookies(int k, vector<int> A)
{
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int num:A) pq.push(num);
    int c1, c2;
    int num_iter{0};
    while(pq.top()<k)
    {
        if(pq.size()<2) return -1;
        c1 = pq.top();
        pq.pop();
        c2 = pq.top();
        pq.pop();
        pq.push(c1+2*c2);
        num_iter++;
    }
    return num_iter;
}
