#include"post.h"

#include <string>

using namespace std;

class Thread {
public:
    Thread(std::string subject, std::string creator,char* date,int totalposts);
    ~Thread();
    void printThreadTitle();
    std::string getThreadTitle();
    int printpostbyid(int id);
    void printThread();

private:
    std::string subject;
    Post  ** posts;
    int totalposts;
    std::string creator;
    char* date;
};
