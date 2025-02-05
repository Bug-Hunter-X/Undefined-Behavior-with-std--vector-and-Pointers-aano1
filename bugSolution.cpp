std::vector<int> vec = {1, 2, 3};
int size = vec.size();
for (int i = 0; i < size; ++i) {
  //Process each element safely
}
vec.push_back(4);
//Access elements after push_back is safe.