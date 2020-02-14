#ifndef MESSAGE_HPP_
#define MESSAGE_HPP_

enum UpdateType {
	FleetSunk = 0,
	PlayerKicked
};

class Message {
public:

	// update_type
	UpdateType update_type;

	// from
	std::string from;

	// to
	std::string to;

protected:

private:

};

#endif // !MESSAGE_HPP_
