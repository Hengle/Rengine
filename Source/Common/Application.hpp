//
// Created by ��� on 2018/5/1.
//

#ifndef RENGINE_APPLICATION_HPP
#define RENGINE_APPLICATION_HPP

#include <Utility/Singleton.hpp>

namespace ReEngine{
    class Application : Singleton<Application>{

    public:

        Application() = default;

        /**
         * ��ȡ��ǰ�����ļ���
         * @return
         */
        std::string GetProjectPath();

        /**
         * ��ȡ��Դ�ļ���
         * @return
         */
        std::string GetResourcesPath();

    private:
        std::string projectPath;
        std::string resourcesPath;
    };
}


#endif //RENGINE_APPLICATION_HPP
