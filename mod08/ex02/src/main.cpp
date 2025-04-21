/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:04:09 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/16 16:07:49 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../header/MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    vector<int> v = {1, 3, 7, 9};
//
//    // Insert element 8 at index 2
//    v.insert(v.begin() + 2, 8);
//
//    for (auto i : v)
//        cout << i << " ";
//    return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	
//	list<int> l{4, 5};
//	vector<int> v{1, 2, 3,};
//	
//	// Inserting all elements of l to v
//	v.insert(v.begin() + 3, l.begin(), l.end());
//	
//	for (auto i : v)
//		cout << i << " ";
//	return 0;
//}
