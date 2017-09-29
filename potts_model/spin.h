//
//  spin.h
//  potts_model
//
//  Created by Vivek Hari Sridhar on 29/09/17.
//  Copyright © 2017 Vivek Hari Sridhar. All rights reserved.
//

#ifndef spin_h
#define spin_h
#include <iostream>
#include "vector2D.h"

class spin
{
public:
    spin(void);
    ~spin(void);
    
    void Setup(const CVec2D& set_position, int& set_state);
    
    CVec2D position;
    int state;
};

#endif /* spin_h */
