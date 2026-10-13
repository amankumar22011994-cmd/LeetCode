class BusBooking {
public:
    unordered_map<string,int>booked;
    int total=0;
    BusBooking(int n) {
        
    }
    
    void toggle(string seat) {
        if(booked.count(seat)){
            total -=booked[seat];
            booked.erase(seat);
            return;
        }
        char c=seat[0];
        string row=seat.substr(1);
        int cost=1;
        if(c=='A' && booked.count("B" + row))cost=3;
        if(c=='D' && booked.count("C"+ row))cost=3;
        booked[seat]=cost;
        total += cost;
    }
    
    int getTotalTime() {
        return total;
    }
    
    int getMinTime() {
        return booked.size();
    }
};

/**
 * Your BusBooking object will be instantiated and called as such:
 * BusBooking* obj = new BusBooking(n);
 * obj->toggle(seat);
 * int param_2 = obj->getTotalTime();
 * int param_3 = obj->getMinTime();
 */