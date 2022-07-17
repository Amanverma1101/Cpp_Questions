#include <bits/stdc++.h>
 
using namespace std;
 
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 
vector<int> breakingRecords(vector<int> scores) {
    int h=0,l=0;
    vector<int> high;
     vector<int> low; 
      vector<int> res;   
    high.push_back(scores[0]);
    low.push_back(scores[0]);
    for(int i=1;i<scores.size();i++){
        if(scores[i]>scores[i-1])
        {
           if(scores[i]>high[i-1]){
            high.push_back(scores[i]);
            }else{high.push_back(high[i-1]);}
            low.push_back(low[i-1]);
        }
        else if(scores[i]<scores[i-1]){
            high.push_back(high[i-1]);
            if(scores[i]<low[i-1]){
                low.push_back(scores[i]);
            }else{
                low.push_back(low[i-1]);
            }
        }else{ 
            low.push_back(low[i-1]);
            high.push_back(high[i-1]); }
    }
 
for(int i=1;i<scores.size();i++){
    if(high[i]>high[i-1]){h++;}
    if(low[i]<low[i-1]){l++;}
}
 
res.push_back(h);
res.push_back(l);
 
return res;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    string n_temp;
    cout<<"Enter n"<<endl;
    getline(cin, n_temp);
 
    int n = stoi(ltrim(rtrim(n_temp)));
 
    string scores_temp_temp;
    cout<<"Enter Scores"<<endl;
    getline(cin, scores_temp_temp);
 
    vector<string> scores_temp = split(rtrim(scores_temp_temp));
 
    vector<int> scores(n);
 
    for (int i = 0; i < n; i++) {
        int scores_item = stoi(scores_temp[i]);
 
        scores[i] = scores_item;
    }
 
    vector<int> result = breakingRecords(scores);
    cout<<"result"<<endl;
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
 
        if (i != result.size() - 1) {
            cout << " ";
        }
    }
 
    fout << "\n";
 
    fout.close();
 
    return 0;
}
 
string ltrim(const string &str) {
    string s(str);
 
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );
 
    return s;
}
 
string rtrim(const string &str) {
    string s(str);
 
    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );
 
    return s;
}
 
vector<string> split(const string &str) {
    vector<string> tokens;
 
    string::size_type start = 0;
    string::size_type end = 0;
 
    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));
 
        start = end + 1;
    }
 
    tokens.push_back(str.substr(start));
 
    return tokens;
}
