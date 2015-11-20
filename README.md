# Random

This is cpp class for generating random number.

## Usage

``` cpp
#include <iostream>

int main() {

  std::cout << Random::Instance().randomInt() std::endl;
  
  if( Random::Instance().probability( 30 ) ) {
    std::cout << "Hello, world." << std::endl;
  }
  
  return 0;
}
```
