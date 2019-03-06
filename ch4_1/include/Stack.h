#ifndef STACK_H
#define STACK_H
#include <vector>
#include <string>
using namespace std;

class Stack
{
    public:
        Stack();
        virtual ~Stack();
        bool find(const string &elem) const;
        bool count(const string &elem) const;
        bool push(const string&);
        bool pop(string &elem);
        bool peek(string &elem);
        bool empty() const {return _stack.empty();}
        bool full() const {return _stack.size() == _stack.max_size();}
        int size() const {return _stack.size();}
    protected:

    private:
        vector<string> _stack;
};

#endif // STACK_H
