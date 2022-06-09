#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree<T, null_type,less<T>, rb_tree_tag, tree_order_statistics_node_update>;


ordered_set<int> OS;

OS.insert(10);
OS.insert(20);
OS.insert(30);

//Find 2nd smallest element
cout << *(OS.find_by_order(1)) << "\n";

//Counting elements strictly less than 15
cout << OS.order_of_key(15) << "\n";

//Check existence of 30
cout << (OS.find(30) == OS.end()) << "\n";

//Delete 30
OS.erase(30);
