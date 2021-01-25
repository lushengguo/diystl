#pragma once
#include <string.h>
#include <vector>
namespace diy
{
class string
{
public:
  string(const char *str)
  {
    if (str != nullptr)
    {
      container.reserve(strlen(str));
      for (size_t i = 0; i < strlen(str); ++i) { container.emplace_back(str[i]); }
    }
  }

  string(const string &str) { container = str.container; }
  const string &append(const char *str) {if(container.size()+strlen(str))}

private:
  size_t            cur_index;
  std::vector<char> container;
};
} // namespace diy