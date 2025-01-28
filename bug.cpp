std::vector<int> vec = {1, 2, 3};
vec.reserve(10);
vec.push_back(4);
vec.push_back(5);
vec.resize(3); // Unexpected behavior