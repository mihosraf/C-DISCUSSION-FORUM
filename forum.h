#include "thread.h"
#include <string>

using namespace std;

class Forum {
public:
    Forum(std::string title, int totalthreads);
    ~Forum();

    void printThreadsTitle();
    void printbytitle(std::string title);
    void printpostbyid(int id);

private:
    std::string title;
    Thread  ** threads;
    int totalthreads;
};
