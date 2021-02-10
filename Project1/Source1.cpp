#include <iostream>

using namespace std;

class Ex
{

public:
	virtual void run()
	{
		cout << "\n Base Run";
	}
	virtual void go()
	{
		cout << "\n Base Go";
	}

	virtual ~Ex()
	{
		cout << "\n Base Destructor Called";

	}
};

class Der : public Ex
{
	void run()
	{
		cout << "\n Run";
	}

	void go()
	{
		cout << "\n Go";
	}

	virtual ~Der()
	{
		cout << "\n Der Destructor Called";
	}
};

static void mymain()
{
	Ex* pbase = new Der();

	pbase->go();
	pbase->run();

	delete pbase;
	pbase = NULL;
}

