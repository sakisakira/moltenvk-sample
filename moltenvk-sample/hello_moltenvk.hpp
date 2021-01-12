//
//  hello_moltenvk.hpp
//  moltenvk-sample
//
//  Created by Akira Suzuki on 2021/01/11.
//

#ifndef hello_moltenvk_hpp
#define hello_moltenvk_hpp

#include <stdio.h>
#include <vulkan/vulkan.hpp>

class HelloMoltenVK {
public:
    HelloMoltenVK() = default;
    virtual ~HelloMoltenVK() = default;
    
private:
    void create_instance();
    
    vk::UniqueInstance m_instance;
};

#endif /* hello_moltenvk_hpp */
