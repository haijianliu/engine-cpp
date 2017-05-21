//
//  FSM.cpp
//  Engine
//
//  Created by haijian on 2017/05/21.
//  Copyright © 2017年 haijian. All rights reserved.
//

#include "FSM.hpp"


FSM::FSM(){};

void FSM::Load(std::string name){
  std::cout << "Load " << name << '\n';
  scriptName = name;
  std::cout << "scriptName " << scriptName << '\n';
}
