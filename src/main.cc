#include <iostream>
#include <vector>

#include "naivedb_config.h"

auto main(int argc, char *argv[]) -> int {
  std::vector<int> a;
  a.push_back(1);
  if (argc < 2) {
    // report version
    std::cout << "NaiveDB" << " Version " << NAIVEDB_VERSION_MAJOR << "."
              << NAIVEDB_VERSION_MINOR << "." << NAIVEDB_VERSION_PATCH << std::endl;
    std::cout << "Usage: "
              << "naivedb"
              << " <command>" << std::endl;
    return 1;
  }
  return 0;
}
