#include"thread.h"
#include <iostream>

extern std::string stitle[10];
extern std::string stext[10];
Thread::Thread(std::string subject, std::string creator,char* date,int totalposts) : subject(subject),creator(creator),date(date),totalposts(totalposts) {
    posts = new Post*[totalposts];

    for (int i = 0; i < totalposts; i++) {
      int randid = rand()% 15 + 1;
      int randtitle = rand()% 9 + 1;
      int randtext = rand()%9 + 1;
        posts[i] = new Post(randid,stitle[randtitle],date,stext[randtext]);
    }

    cout << "Thread with subject: "<< subject << " has just been created! " << endl;
}

Thread::~Thread() {
    for (int i = 0; i < totalposts; i++) {
        delete posts[i];
    }
    delete [] posts;

    cout << "Thread with subject: " <<subject<< " is about to be destroyed " << endl;
}
void Thread::printThreadTitle() {
    cout << " Subject title:  " << subject << endl;
}

std::string Thread::getThreadTitle(){
  return subject;
}
int Thread::printpostbyid(int id){
  int postcounter = 0;
  for (int i = 0; i < totalposts; i++) {
    if  (posts[i]->getPostId() == id){
        postcounter++;
      }
}
return postcounter;
}

void Thread::printThread(){
  cout << "Thread with subject: " << subject << " creator : " << creator << " date : " << date << " total posts : "<<totalposts << endl;
}
