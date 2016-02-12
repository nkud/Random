# Random

This is cpp class for generating random number.

## Usage

``` cpp
#include <iostream>

int main() {

  std::cout << Random::Instance().randomInt() std::endl;
  
  if( Random::Instance().probability( 10 ) ) {
    std::cout << "Hello, world. You are lucky!" << std::endl;
  }
  
  return 0;
}
```
