// beautyF.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <stdio.h>

#include "Header.h"


int _tmain(int argc, _TCHAR* argv[])
{
	String fileName = "E:\\test_img\\2056240.jpg";
	Mat srcImg = imread(fileName);

	Mat dstImg(srcImg.rows, srcImg.cols, srcImg.type());

	//float ksize = 7.0;
	//float sigma = 0.3*((ksize - 1)*0.5 - 1) + 0.8;
	//cvSmooth()
	bilateralFilter(srcImg, dstImg,20,40,20);
	//GaussianBlur(dstImg, dstImg, Size(ksize, ksize), 2, 2);
	imshow("0", srcImg);
	imshow("1", dstImg);
	cvWaitKey();
	return 0;
}

