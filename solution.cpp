/*-----------------------------------------------------------------------
*              Name: Thanh Phan
*              Course: CPSC 121, Tue Lab
*              Professor: Ben Blazak
* -----------------------------------------------------------------------*/
/* -----------------------------------------------------------------------
* Copyright &copy; 2015 Thanh Phan <tphan2650@gmail.com
* Released under the [MIT License] (http://opensource.org/
* licenses/MIT)
* -----------------------------------------------------------------------*/
#include <iostream>
using namespace std; //For ease of use, will remove later

template <class T, const unsigned int SIZE>
class Point
{
	private: 
		T components_[SIZE];

	public:
		Point()
		{
			for (int i = 0; i < SIZE; i++)
			{
				components_[i] = 0;
			}
		};
};
