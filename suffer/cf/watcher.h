#ifndef WATCHER_H_
#define WATCHER_H_


//미래에셋모바일 주식자동주문


class watcher
{
public:
	watcher();
	virtual ~watcher();
private:
	enum watcher_type{PRICE, VOLUME};
	watcher_type m_watcher_type;

	std::vector<stock> stocks;
	prepareStocks(stocks);
	std::for_each(stocks.begin(), stocks.end(), conditions.buyIfSatisfy());


	void buyIfSatisfy(){
		void flip = [](const stock& _stock) {
			if (condition.type == PRICE)
			{
				switch(condition.price_type)
				{
				case CURRENT_PRICE://현재가,
					price = price_current;
				case BID_PRICE:	//매도호가
					price = price_bid;
				case OFFERED_PRICE : //매수호가,
					price = price_offerd;
				default:
					return FAILURE;
				}
				std::vector<int> values;
				// cbegin과 cend를 사용하고 있습니다
				auto it = std::find(values.cbegin(),values.cend(), 1983);
				// 이제 인자로 const_iterator도 받습니다
				values.insert(it, 1998);



				if( price >  condition.price)
				{
					order{ either 현금||신용,  either 현재가||매도호가||매수호가, price, Quantity)
					}

				}
				elseif (condition.type == VOLUME) {
					if( stock.volume > condition.volume )
					{
						order{ either 현금||신용,  either 현재가||매도호가||매수호가, price, Quantity)
						}
					}
				}



			}

#endif /* WATCHER_H_ */
