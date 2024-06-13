#pragma once

	class Customer : public Account {
	private:
		Order* or ;

	public:
		Customer();
		void givefeedback();
		void placeorder();
		void makepayment();
		void feedback(feedback* f);
		~Customer();

	};


