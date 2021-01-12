//
//  hello_moltenvk.cpp
//  moltenvk-sample
//
//  Created by Akira Suzuki on 2021/01/11.
//

#include "hello_moltenvk.hpp"

void HelloMoltenVK::create_instance() {
    const auto app_info = vk::ApplicationInfo{
        "HelloMoltenVK", VK_MAKE_VERSION(0, 1, 1),
        "sample engine", VK_MAKE_VERSION(0, 1, 1),
        VK_API_VERSION_1_2
    };
    m_instance =
        vk::createInstanceUnique(vk::InstanceCreateInfo()
                                 .setPApplicationInfo(&app_info));
}
