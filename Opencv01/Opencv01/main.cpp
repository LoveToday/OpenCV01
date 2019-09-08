//
//  main.cpp
//  Opencv01
//
//  Created by 陈江林 on 2019/9/7.
//  Copyright © 2019 陈江林. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>
using namespace std;
using namespace cv;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "OpenCV Version : " << CV_VERSION << std::endl;
    string filePath = "/Users/chenjianglin/Documents/C++/Opencv01/Opencv01/Source/tupian.jpg";
    // //参数1：图片路径。参数2:显示原图
    Mat img = imread(filePath, 1);
    if (img.empty()) {
        cout << "图片地址不正确或是找不到" << endl;
    }
    string window = "one window";
    namedWindow(window, WINDOW_NORMAL);
    imshow(window, img);
    waitKey(0);
    return 0;
}
