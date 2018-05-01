//
// Created by ��� on 2018/5/1.
//

#ifndef RENGINE_APPLICATION_HPP
#define RENGINE_APPLICATION_HPP

#include <Utility/Singleton.hpp>
#include <string>

namespace ReEngine{
    class Application {

    public:

        Application() = default;

        /**
         * ��ȡ��ǰ�����ļ���
         * @return
         */
        static std::string GetProjectPath();


    private:
        static std::string projectPath;
    };
}


#endif //RENGINE_APPLICATION_HPP
