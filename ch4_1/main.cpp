#include <iostream>
#include "Stack.h"

#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    Stack st;
    string str;
    //cout<<"1111111111";
    while(cin>>str && !st.full()){
        st.push(str);
        if (getchar() == '\n')    //检测如果是空格，退出循环；
        break;
    }


    if(st.empty()){
        cout<<"\nOops:no strings were read!";
        return 1;
    }
    st.peek(str);
    if(st.size() == 1&&str.empty()){
        cout<<"\nOops:no strings were read!";
        return 1;
    }
    cout<<"\nRead in"<<st.size()<<"strings!\n";
//        <<"The strings,in reverse order:\n";
//
//    while(st.size()){
//        if(st.pop(str))
//            cout<<str<<' ';
//    }
    cin.clear();
    cout<< "what word to search for?";
    cin>>str;

    bool found = st.find(str);
    int count = found?st.count(str):0;
    cout <<str<<(found?"is":"isn\'t")<<"in the stack";
    if(found)
        cout<<"it occurs"<<count<<"times";
    cout << "\nthere are"<<st.size()<<" strings in Stack!" << endl;
    return 0;
}
