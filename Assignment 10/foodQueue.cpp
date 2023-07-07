#include <iostream>
using namespace std;

#include "queue.h"

int getPrice(int order, int quantity) {
	if(order > 3 || order < 1) return 0;
	int prices[] = {0, 100, 20, 50};
	return prices[order] * quantity;
}

int main(int argc, char * argv[]) {

	Queue q;
	int customer = 1;
	for(int i = 1; i < argc; i+= (argv[i][0] == 'x' ? 1 : 2)) {
		if(argv[i][0] == 'x')
			if(q.front() == 0) cout << (q.dequeue() || true ? "No food": "") << endl;
			else {
				int price = q.dequeue();
				cout << "Customer " << customer++ << " has to pay " << price << endl;
				int cash;
				do {
					cout << "Cash: ";
					cin >> cash;
				} while(cash < price);
				if(cash - price) {
					cout << "Change is: " << cash - price << endl;
				}
			}
			
		else {
			int order = atoi(argv[i]);
			int quantity = atoi(argv[i+1]);
			q.enqueue(getPrice(order, quantity));
		}
	}
	if(q.getSize()) cout << q.getSize() << " customers left in the queue." << endl;
}