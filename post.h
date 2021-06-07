#include <string>

using namespace std;

class Post {
public:
    Post(int id, std::string title, char* date,std::string text);
    ~Post();
    int getPostId();
    void printpost();

private:
    int id;
    std::string title;
    std::string creator;
    char* date;
    std::string text;
};
