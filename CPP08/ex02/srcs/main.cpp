/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:14:36 by daalmeid          #+#    #+#             */
/*   Updated: 2022/07/05 17:39:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// int main() {

// 	std::vector<int>	myvector(2, 200);
// 	MutantStack<int>	mstack;
	
// 	mstack.push(5);
// 	mstack.push(24);
// 	mstack.push(17);
// 	mstack.push(45);
// 	mstack.push(42);
// 	mstack.push(79);
// 	std::cout << "stack 1 top: " << mstack.top() << std::endl;
// 	MutantStack<int>::iterator it = mstack.begin();
// 	std::cout << "begin: " << *it << std::endl;
// 	MutantStack<int>::iterator ite = mstack.end();
// 	ite--;
// 	std::cout << "end: " << *ite << std::endl;
// 	std::cout << "stack 2 top: " << mstack.top() << std::endl;

// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	// std::stack<int> s(mstack);
// 	return 0;
// }

// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// mstack.push(24);
// mstack.push(17);
// mstack.push(45);
// mstack.push(42);
// mstack.push(79);
// mstack.push(0);
// MutantStack<int>::reverse_iterator it = mstack.rbegin();
// MutantStack<int>::reverse_iterator ite = mstack.rend();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }

int main ()
{
  std::deque<int> mydeque (3,100);          // deque with 3 elements
  std::vector<int> myvector (2,200);        // vector with 2 elements

  MutantStack<int> first;                    // empty stack
  MutantStack<int> second (mydeque);         // stack initialized to copy of deque

  MutantStack<int,std::vector<int> > third;  // empty stack using vector
  MutantStack<int,std::vector<int> > fourth (myvector);

  std::cout << "size of first: " << first.size() << std::endl;
  std::cout << "size of second: " << second.size() << std::endl;
  std::cout << "size of third: " << third.size() << std::endl;
  std::cout << "size of fourth: " << fourth.size() << std::endl;

  return 0;
}
