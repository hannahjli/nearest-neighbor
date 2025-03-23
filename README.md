# nearest-neighbor
This program runs the nearest neighbor classification algorithm using k-fold cross validation.\
The results using the 2 included data files are as follows.\
\
Small data: Strongest features {1, 4, 5} found on 3rd level of search tree.\
Beginning search.\
Using feature(s): {1} accuracy is 83.8%\
Using feature(s): {1, 4} accuracy is 78.6%\
Using feature(s): {1, 4, 5} accuracy is 91.8%\
Using feature(s): {1, 4, 5, 3} accuracy is 91.8%\
Using feature(s): {1, 4, 5, 3, 6} accuracy is 88.2%\
Using feature(s): {1, 4, 5, 3, 6, 2} accuracy is 83.8%\

Large data: Strongest features {1, 35, 19} found on 3rd level of search tree.\
Beginning search.\
Using feature(s): {1} accuracy is 68.4%\
Using feature(s): {1, 35} accuracy is 84.5%\
Using feature(s): {1, 35, 19} accuracy is 92.7%\
Using feature(s): {1, 35, 19, 7} accuracy is 90.8%\
Using feature(s): {1, 35, 19, 7, 6} accuracy is 88.4%\
Using feature(s): {1, 35, 19, 7, 6, 33} accuracy is 86.3%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9} accuracy is 85%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11} accuracy is 83.5%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40} accuracy is 82.5%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34} accuracy is 80.5%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28} accuracy is 80.6%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12} accuracy is 78.7%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39} accuracy is 78.7%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16} accuracy is 78%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5} accuracy is 76.4%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22} accuracy is 75%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26} accuracy is 74.7%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10} accuracy is 75.1%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14} accuracy is 75.1%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18} accuracy is 73.8%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31} accuracy is 74.6%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2} accuracy is 73.3%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37} accuracy is 73.1%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25} accuracy is 73.8%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13} accuracy is 73.3%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3} accuracy is 72.9%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32} accuracy is 72.9%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32, 4} accuracy is 72.9%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32, 4, 38} accuracy is 73.2%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32, 4, 38, 8} accuracy is 72.8%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32, 4, 38, 8, 23} accuracy is 72.3%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32, 4, 38, 8, 23, 29} accuracy is 71.6%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32, 4, 38, 8, 23, 29, 20} accuracy is 71.2%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32, 4, 38, 8, 23, 29, 20, 30} accuracy is 71%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32, 4, 38, 8, 23, 29, 20, 30, 21} accuracy is 70.8%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32, 4, 38, 8, 23, 29, 20, 30, 21, 17} accuracy is 70.4%\
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32, 4, 38, 8, 23, 29, 20, 30, 21, 17, 24} accuracy is 70%
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32, 4, 38, 8, 23, 29, 20, 30, 21, 17, 24, 27} accuracy is 70.6%
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32, 4, 38, 8, 23, 29, 20, 30, 21, 17, 24, 27, 15} accuracy is 69.5%
Using feature(s): {1, 35, 19, 7, 6, 33, 9, 11, 40, 34, 28, 12, 39, 16, 5, 22, 26, 10, 14, 18, 31, 2, 37, 25, 13, 3, 32, 4, 38, 8, 23, 29, 20, 30, 21, 17, 24, 27, 15, 36} accuracy is 68.4%
