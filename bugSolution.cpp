std::vector<int> vec = {1, 2, 3};
vec.reserve(10);
vec.push_back(4);
vec.push_back(5);
vec.clear(); // Correct way to reduce the vector size
vec.push_back(6);
vec.push_back(7); //Now you can add elements