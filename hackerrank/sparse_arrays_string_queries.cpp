using namespace std;


/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY strings
 *  2. STRING_ARRAY queries
 */

vector<int> matchingStrings(vector<string> strings, vector<string> queries)
{
    unordered_map<string, int> strcount;
    for(string elem:strings)
    {
        if(strcount.count(elem)) strcount[elem]++;
        else strcount[elem] = 1;
    }
    vector<int> counts;
    counts.reserve(queries.size());
    for(string query:queries) counts.push_back(strcount[query]);
    return counts;
}
