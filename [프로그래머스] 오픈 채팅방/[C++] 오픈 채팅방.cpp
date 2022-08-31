#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iostream>

using namespace std;
vector<string> solution(vector<string> record);

int main(int argc, char* argv[]) {

    vector<string> record;
    vector<string> ans;

    record.push_back("Enter uid1234 Muzi");
    record.push_back("Enter uid4567 Prodo");
    record.push_back("Leave uid1234");
    record.push_back("Enter uid1234 Prodo");
    record.push_back("Change uid4567 Ryan");

    ans = solution(record);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }

    return 0;
}


vector<string> solution(vector<string> record) {
    vector<string> answer;
    
    map<string, string> user; // ID, 넥네임
    vector < vector <string> > records;
    for(int i = 0; i < record.size();i++){
        stringstream ss(record[i]);
        string action, id, name;
        ss >> action >> id >> name;
        
        vector<string> user_v;
        user_v.push_back(action);
        user_v.push_back(id);
        user_v.push_back(name);
        records.push_back(user_v);

        if(action == "Enter" || action == "Change"){
            user[id] = name;  //나중에 userID로 닉네임을 찾기 위함
        }
    }

    for(int i = 0; i < records.size(); i++){
        if(records[i][0] == "Enter"){
            answer.push_back(user[records[i][1]] + "님이 들어왔습니다.");
        }
        if(records[i][0] == "Leave"){
            answer.push_back(user[records[i][1]] + "님이 나갔습니다.");
        }
    }
    
    
    
    return answer;
}