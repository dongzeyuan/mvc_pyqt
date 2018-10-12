#ifndef STOCK_H_
#define STOCK_H_

#include "order.h"
//미래에셋모바일 주식자동주문


class stock
{
public:
	stock();
	virtual ~stock();
private:
	unsigned int price; //- 실시간 가격 정보로 최대 20분까지 지연됩니다.
	unsigned int priceopen;//" - 개장 시점의 가격입니다.
	unsigned inthigh;//" - 현재 날짜의 최고가입니다.
	unsigned int low;//" - 현재 날짜의 최저가입니다.
	unsigned int volume;//" - 현재 날짜의 거래량입니다.
	unsigned int marketcap;//" - 주식의 시가 총액입니다.
	unsigned int tradetime;//" - 마지막 거래 시간입니다.
	unsigned int datadelay;//" - 실시간 데이터의 지연 정도입니다.
	unsigned int volumeavg;//" - 일일 평균 거래량입니다.
	unsigned int pe;//" - 가격 대 수익률입니다.
	unsigned int eps;//" - 주당 순이익입니다.
	unsigned int high52;//" - 52주 최고가입니다.
	unsigned int low52;//" - 52주 최저가입니다.
	unsigned int change;//" - 전 거래일 마감 이후의 가격 변동입니다.
	unsigned int beta;//" - 베타 값입니다.
	unsigned int changepct;//" - 전 거래일 마감 이후 주식 가격의 백분율 변동입니다.
	unsigned int closeyest;//" - 전일 종가입니다.
	unsigned int shares;//" - 발행 주식 수입니다.
	unsigned int currency;//" - 주식이 거래되는 통화입니다.

	// std::string name;	//종목명
	unsigned char code;	//종목코드

	std::list<order> orders;
	unsigned int price_current;
	unsigned int price_bid;
	unsigned int price_offerd;
	unsigned int price_market;

}

#endif /* STOCK_H_ */
