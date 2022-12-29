//
// Created by shecannotsee on 2022/12/26.
//

#include <iostream>
#include "method_1.h"
#include "method_2.h"
#include "method_3.h"
#include "aes_cbc_128_interface.h"
#include "rsa_method_1.h"

int main() {
  std::cout<<"openssl test start.\n";
//  method_1::main();
//  method_2::main();
//  method_3::main();
  aes_cbc_128_interface::main();
  std::cout<<"openssl test end.\n";
  return 0;
};