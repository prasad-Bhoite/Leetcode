class MyQueue {
public:

    //Create a two stack...
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) 
    {
        s1.push(x);
    }
    
    int pop() {
        int popElement = -1;

        if(!s2.empty())
        {
            popElement = s2.top();
        }
        else
        {
            //transfer s1 into s2 ...
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            //return s2.top() ...
            popElement = s2.top();
        }
        //remove the element 
        s2.pop();
        //return the topElement...
        return popElement;  
    }
    
    int peek() 
    {
        int frontElement  = -1;

        if(!s2.empty())
        {
            frontElement = s2.top();
        }
        else
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }

            frontElement = s2.top();
        }
          return frontElement;
    }
    
    bool empty() 
    {
        return s1.empty() && s2.empty();
        // if(s1.top()==-1 && s2.top()==-1){
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */