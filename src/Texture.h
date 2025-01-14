#pragma once

#include <Debugger.h>

#include <iostream>
#include <string>

class Texture
{
    private:
        unsigned int m_RendererID;
        std::string m_Filepath;
        unsigned char* m_LocalBuffer;
        int m_Width, m_Height, m_Components;
    public:
        Texture(const std::string& filepath);
        ~Texture();

        void Bind(unsigned int slot = 0) const;
        void Unbind() const;

        inline int GetWidth() const { return m_Width; }
        inline int GetHeight() const { return m_Height; }
};