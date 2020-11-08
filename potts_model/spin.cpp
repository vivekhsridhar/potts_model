//
//  spin.cpp
//  potts_model
//
//  Created by Vivek Hari Sridhar on 29/09/17.
//  Copyright © 2017 Vivek Hari Sridhar. All rights reserved.
//

#include "spin.h"

spin::spin(void)
{
}

spin::~spin(void)
{
}

void spin::Setup(const CVec2D& set_position, int& set_state)
{
    position = set_position;
    state = set_state;
}

