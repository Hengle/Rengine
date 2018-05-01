//
// Created by ��� on 2018/5/1.
//

#ifndef RENGINE_APPLICATION_HPP
#define RENGINE_APPLICATION_HPP

#include <Utility/Singleton.hpp>
#include <string>

namespace ReEngine{
    class Application : public Singleton<Application>{

    public:

        Application() = default;

        /**
         * ��ȡ��ǰ�����ļ���
         * @return
         */
        std::string GetProjectPath();


    private:
        std::string projectPath;
        std::string resourcesPath;
    };
}


#endif //RENGINE_APPLICATION_HPP
