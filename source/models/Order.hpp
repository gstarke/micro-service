#ifndef ORDER_HPP_
#define ORDER_HPP_

enum OrderResult {
    IllegalOrder = 0,
    IllegalOrderShipSunk,
    OrderNotExecuted,
    Miss,
    ShipHit,
    ShipSunk,
    ShipFound,
    ShipNotFound,
    MessageSent
};

enum OrderType {
    Attack = 0,
    Recon,
    BroadcastMessage
};

class Order {
public:
    // type
    OrderType type;

    // coordinate
    Coordinate coordinate = Coordinate(-1, -1);

    // data
    std::string data;

    // result
    OrderResult result = OrderResult::OrderNotExecuted;

    // from
    std::string from;

    // String
    friend std::ostream& operator<<(std::ostream& os, const Order& obj)
    {
        os << "Order -- Type: " << obj.type << ", Coordinate: " << obj.coordinate << ", Data: " << obj.data << ", Result: " << obj.result;
        return os;
    }


protected:

private:

};

#endif // !ORDER_HPP_