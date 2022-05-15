#include <GLFW/glfw3.h>

#include <stdlib.h>

#include <stdio.h>

#include<windows.h>

#define GLUT_KEY_UP 101



#pragma comment(lib,"opengL32")



static void error_callback(int error, const char* description)

{

    fputs(description, stderr);

}

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)

{

    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)

        glfwSetWindowShouldClose(window, GL_TRUE);

}

void main()

{

    GLFWwindow* window;

    glfwSetErrorCallback(error_callback);

    if (!glfwInit())

        exit(EXIT_FAILURE);

    window = glfwCreateWindow(640, 480, "Simple example", NULL, NULL);

    if (!window)

    {

        glfwTerminate();

        exit(EXIT_FAILURE);

    }

    glfwMakeContextCurrent(window);

    glfwSetKeyCallback(window, key_callback);



    while (!glfwWindowShouldClose(window))

    {

        float ratio;

        int width, height;

        glfwGetFramebufferSize(window, &width, &height);

        ratio = width / (float)height;





        glClearColor(0.7f, 0.7f, 0.7f, 1); //색깔 회색

        glClear(GL_COLOR_BUFFER_BIT);     //색깔 나타냄


        glBegin(GL_TRIANGLES);

        glColor3f(1.0f, 0.0f, 0.0f);

        glVertex2f(0.0f, 0.0f);

        glVertex2f(-0.1f, -0.1f);

        glVertex2f(0.1f, -0.1f);

        glEnd();


        if (GetAsyncKeyState(VK_SPACE) & 0x8000)
        {
            glBegin(GL_TRIANGLES);

            glColor3f(0.0f, 0.51f, 0.0f);

            glVertex2f(-0.5f, 0.3f);

            glVertex2f(-0.5f, 0.1f);

            glVertex2f(-0.7f, 0.1f);

            glEnd();

            glBegin(GL_TRIANGLES);

            glColor3f(0.0f, 0.51f, 0.0f);

            glVertex2f(-0.5f, 0.3f);

            glVertex2f(-0.7f, 0.3f);

            glVertex2f(-0.7f, 0.1f);

            glEnd();

        }
        else
        {
            glBegin(GL_TRIANGLES);

            glColor3f(0.0f, 0.51f, 0.0f);

            glVertex2f(-0.5f, 0.0f);

            glVertex2f(-0.5f, -0.2f);

            glVertex2f(-0.7f, -0.2f);

            glEnd();

            glBegin(GL_TRIANGLES);

            glColor3f(0.0f, 0.51f, 0.0f);

            glVertex2f(-0.5f, 0.0f);

            glVertex2f(-0.7f, 0.0f);

            glVertex2f(-0.7f, -0.2f);

            glEnd();
        }










        //glBegin(GL_LINES);              //선을 그을거임          

        //glColor3f(1.0f, 0.0f, 0.0f);    //빨간색

        //glVertex2f(0.0f, 0.0f);         //0,0    

        //glVertex2f(1.0f, 1.0f);         //1,1

        //glColor3f(0.0f, 0.0f, 1.0f);    // 두번째 선을 그을거임 색깔

        //glVertex2f(0.0f, 0.0f);         //0,0

        //glVertex2f(1.0f, -1.0f);        //1,-1

        //glEnd();

        //glFlush();


        //glBegin(GL_POINT);            //점을 찍을거임

        //glColor3f(1.0f, 0.0f, 0.0f);  //색깔 빨간색

        //glVertex2f(0.0f,0.0f);        //0,0에 찍을거임

        //glEnd();



        //glBegin(GL_LINES);              //선을 그을거임          

        //glColor3f(1.0f, 0.0f, 0.0f);    //빨간색

        //glVertex2f(0.0f, 0.0f);         //0,0    

        //glVertex2f(1.0f, 1.0f);         //1,1

        //glColor3f(0.0f, 0.0f, 1.0f);    // 두번째 선을 그을거임 색깔

        //glVertex2f(0.0f, 0.0f);         //0,0

        //glVertex2f(1.0f, -1.0f);        //1,-1

        //glEnd();



        glfwSwapBuffers(window);

        glfwPollEvents();

    }

    glfwDestroyWindow(window);

    glfwTerminate();

    exit(EXIT_SUCCESS);

}