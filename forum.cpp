#include"forum.h"
#include <iostream>

extern std::string ssubject[5];
extern std::string screator[10];
using namespace std;
Forum::Forum(std::string title, int totalthreads) : title(title),totalthreads(totalthreads) {
    threads = new Thread*[totalthreads];
    int totalposts = rand () % 4 + 1;
    for (int i = 0; i < totalthreads; i++) {
        int randssub = rand()% 4 + 1;
        int randscre = rand()% 9 + 1;
        time_t ttime = time(0);
        char* date = ctime(&ttime);
        if (i==0) {
        threads[i] = new Thread("Κανόνες και Χρησιμες Πληροφοριες",screator[randscre],date,totalposts);
      }
        else{
        threads[i] = new Thread(ssubject[randssub],screator[randscre],date,totalposts);
        }

    }

    cout << "Forum with title: " << title << " has just been created! "  << endl;
    cout << "Thread number : " <<totalthreads << endl;
}

Forum::~Forum() {
    for (int i = 0; i < totalthreads; i++) {
        delete threads[i];
    }
    delete [] threads;

    cout << "Forum with title: " << title << " is about to be destroyed " << endl;
}

void Forum::printThreadsTitle() {
    for (int i = 0; i < totalthreads; i++) {
        threads[i]->printThreadTitle();
    }
}

void Forum::printbytitle(std::string title){
  int counter = 0;
  for (int i = 0; i < totalthreads; i++) {
    std::string returntitle = threads[i]->getThreadTitle() ;
    if  (returntitle == title){
        counter++ ;
      }
}
if (counter > 0 ){
  cout << title << " FOUND!!!" << endl;
}
else {cout << "TITLE NOT FOUND!!!" << endl;}
}

void Forum::printpostbyid(int id){
  int postfound;
  for (int i = 0; i < totalthreads; i++) {
    postfound = threads[i]->printpostbyid(id);
      }
      if (postfound > 0) {cout << "ID FOUND!!"<< endl;}
      else {cout<< "ID NOT FOUND" << endl;}
}
