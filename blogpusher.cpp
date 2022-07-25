#include <iostream>
using namespace std;

int main(int argc, char** argv){
    string commit;
    for(int i = 1; i < argc; i++){
        commit += argv[i];
        if(i != argc - 1){
            commit += " ";
        }
    }
    string commitInput = "git commit -m\"" + commit + "\"";
    cout<<"==========BEGIN PULL=========="<<endl;
    system("git pull origin master");
    cout<<"==========BEGIN ADD=========="<<endl;
    system("git add .");
    cout<<"git add success"<<endl;
    cout<<"==========BEGIN COMMIT=========="<<endl;
    system(commitInput.c_str());
    cout<<"==========BEGIN PUSH=========="<<endl;
    system("git push origin master");
    return 0;
}