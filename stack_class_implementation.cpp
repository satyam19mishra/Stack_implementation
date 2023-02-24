#include<iostream>
#include<climits>
using namespace std;

template<typename T>

class Stack{
private:
	T * data;
	int nextindex;
	int capacity;
public:
	Stack(int size){
		data = new T[size];
		nextindex = 0;
		capacity = size;
	}
	~Stack(){
		delete [] data;
	}
public:
	// methods of stack

	//getting the size of the stack
	int size(){
		return nextindex;
	}

	//pushing the data into the stack
	void push(T x){
		if(nextindex==capacity){
			cout << "stack if full" << endl;
			return;
		}
		data[nextindex] = x;
		nextindex++;
	}

	//poping the data form the stack
	T pop(){
		if(empty()){
			cout << "stack is empty" << endl;
			return INT_MIN;
		}
		nextindex--;
		return data[nextindex];
	} 

	//returning the top element of the stack

	T top(){
		if(empty()){
			cout << "stack is empty" <<endl;
			return INT_MIN;
		}
		return data[nextindex-1];
	}

    //checking the empty or not 
    bool empty(){
    	if(nextindex==0) return true;
    	return false;
    }
};

int main(){
	Stack<int> s1(5);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);

	cout << s1.top() <<endl;
	s1.pop();
	cout << s1.top()<<endl;
	cout << s1.empty()  <<endl;

	cout << s1.top() <<endl;
	s1.pop();
	cout << s1.top()<<endl;
	cout << s1.empty() ;
}