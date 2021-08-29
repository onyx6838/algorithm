#include <iostream>
#include <vector>
#include <unordered_set>

int main()
{
   std::vector<int> num = { 1, 9, 0, 0, 1, 5, -7, 0, -7, 9};
   
   std::cout << "num vector contains:\n";
   for (const int& x: num)
   {
      std::cout << " " << x;
   }
   std::cout << "\n";

   std::unordered_set<int> myset;

   myset.insert(num.begin(), num.end());
   
   while (!num.empty())
   {
      num.pop_back();
   }

   std::cout << "\nmyset contains:\n";
   for (const int& x: myset)
   {
      std::cout << " " << x;
      num.push_back(x);
   }
   std::cout << "\n";
   
   std::cout << "\nnum vector now contains:\n";
   for (const int& x: num)
   {
      std::cout << " " << x;
   }
   std::cout << "\n";
}
