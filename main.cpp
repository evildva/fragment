#include <iostream>
#include <thread>
#include <sys/epoll.h>


using namespace std;

void print(){
	for(int i=0;i<20;i++){
		cout<<"print"<<endl;
		chrono::system_clock::time_point now = chrono::system_clock::now();
		this_thread::sleep_until(now+chrono::seconds(1));
	}
}

int main(){

	thread t(print);
	t.detach();
	cout<<"main finish"<<endl;
	return 0;
}