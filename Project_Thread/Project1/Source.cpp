#include "Header.h"
#include "WaysToCreate.h"
#include "Mutex_Ex.h"
#include "Try_Lock.h"
#include "Timed_Mutex.h"
#include "Recursive_Mutex.h"
#include "Lock_Guard.h"
#include "Unique_Lock.h"
#include "Condition_Variable.h"
#include "Dead_Lock.h"
#include "Std_Lock.h"
#include "Promise_Future.h"
#include "Async_Task.h"
#include "Producer_Consumer_Prob.h"

int main()
{
	cout << "Project starts here :\n";

	//WaysToCreate::Main();
	//Mutex_Ex::Main();
	//Try_Lock::Main();
	//Timed_Mutex::Main();
	//Recursive_Mutex::Main();
	//Lock_Guard::Main();
	//Unique_Lock::Main();
	//Condition_Variable::Main();
	//Dead_Lock::Main();
	//Std_Lock::Main();
	//Promise_Future::Main();
	//Async_Task::Main();
	Producer_Consumer_Prob::Main();

	cout << "\nProject Ends here........\n";

	return 0;
}
