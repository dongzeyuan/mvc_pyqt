#ifndef ORDER_H_
#define ORDER_H_


#include "stock.h"

enum order_price_type {
	CURRENT_PRICE,//현재가,
	BID_PRICE,	//매도호가
	OFFERED_PRICE, //매수호가,
	MARKET_PRICE//시장가
	//최유리지정가
	//최우선지정가
	//IOC, Immediate or Cancel
	//FOK, Fill or Kill
}

class order
{
public:
	order();
	virtual ~order();
private:
	stock m_stock;
	order_price_type m_order_price_type
}


#endif /* ORDER_H_ */
