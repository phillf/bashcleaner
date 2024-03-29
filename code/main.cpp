/**
 * bashcleaner
 * A bash history cleanup utility
 *
 * @author      Phill Fernandes <phillfernandes92@gmail.com>
 * @copyright   2012 Phill Fernandes
 * @link        http://www.sachemsoftworks.com/projects/bashcleaner
 * @license     GNU GPL Version 3, see http://www.gnu.org/licenses/gpl-3.0-standalone.html
 * @version     1.0
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

int header()
{
	cout << "Bash Cleaner 1.0" << endl << endl;
	
	return 0;
}

int clear()
{
	
	header();
	
	system("history -c");
	system("cd; rm -rf .bash_history");
	
	cout << "Thank You for using Bash Cleaner by Sachem Softworks!" << endl;
	cout << "Have a nice day!" << endl;
	
	sleep(4);
	system("clear");
	
	return 0;
	
}

int main()
{
	
	system("clear");
	
	header();
	
	char option;
	cout << "Clear Bash Histroy?: ";
	cin >> option;
	
	if ( option == 'y' )
	{
		system("clear");
		clear();
	}
	else
	{
		system("clear");
		
		header();
		
		cout << "Thank You for using Bash Cleaner by Sachem Softworks!" << endl;
		cout << "Exiting Now (0)..." << endl;
		
		sleep(1);
		
		return 0;
	}
	
}
