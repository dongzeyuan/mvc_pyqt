#ifndef SUFFER_SELLER_H_
#define SUFFER_SELLER_H_

#include "order.h"
//미래에셋모바일 주식자동주문

class enrollAutomaticBuy : public order {
public:
	enrollAutomaticBuy();
	virtual ~enrollAutomaticBuy();
}

class enrollAutomaticSell : public order {
public:
	seller();
	virtual ~seller();
};


class seller {
public:
	seller();
	virtual ~seller();
};

#endif /* SUFFER_SELLER_H_ */
