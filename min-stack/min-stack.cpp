// class MinStack {
// public:

//     vector< pair<int,int> >  st;


//     MinStack() { 
//     }
    
//     void push(int val) {
//        if(st.empty())
//        {
//            pair<int,int> p;
//            p.first = val;
//            p.second = val;
//            st.push_back(p);
//        }    
//        else
//        {
//            pair<int,int> p;
//            p.first = val;
//            p.second = min(val,st.back().second);
//            st.push_back(p);
//        }
//     }
    
//     void pop() {
//         st.pop_back();
//     }
    
//     int top() {
//         return st.back().first;
//     }
    
//     int getMin() {
//         return st.back().second;
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */



class MinStack {
 public:
  void push(int x) {
    if (stack.empty())
      stack.emplace(x, x);
    else
      stack.emplace(x, min(x, stack.top().second));
  }

  void pop() {
    stack.pop();
  }

  int top() {
    return stack.top().first;
  }

  int getMin() {
    return stack.top().second;
  }

 private:
  stack<pair<int, int>> stack;  // {x, min}
};
