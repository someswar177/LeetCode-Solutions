class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> people;
        for(int i=0;i<names.size();i++) {
            people.push_back({names[i],heights[i]});
        }
        sort(people.begin(),people.end(),[](const auto& a,const auto& b){
            return a.second > b.second;
        });
        vector<string> sortedNames;
        for(const auto& person:people){
            sortedNames.push_back(person.first);
        }
        return sortedNames;
    }
};