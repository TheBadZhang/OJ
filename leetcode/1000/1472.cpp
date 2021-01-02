class BrowserHistory {
    vector <string> history;
    int now;
public:
    BrowserHistory(string homepage) {
        history.push_back (homepage);
        now = 0;
        // cout << "init" << homepage << endl;
    }
    
    void visit(string url) {
        // cout << "visit" << url << endl;
        history.erase (history.begin() + now + 1, history.end ());
        history.push_back (url);
        now ++;
    }
    
    string back(int steps) {
        now -= steps;
        if (now < 0) now = 0;
        // std::cout << "back" << history [now] << endl;
        return history [now];
    }
    
    string forward(int steps) {
        now += steps;
        if (now >= history.size ()) now = history.size ()-1;
        // std::cout << "forward" << history [now] << endl;
        return history [now];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */