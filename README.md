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
\
Large data: Strongest features {35, 19} found on 2nd level of search tree.\
Beginning search.\
Using feature(s): {35} accuracy is 86.8%\
Using feature(s): {35, 19} accuracy is 96.3%\
Using feature(s): {35, 19, 33} accuracy is 95%\
Using feature(s): {35, 19, 33, 28} accuracy is 91.8%\
Using feature(s): {35, 19, 33, 28, 2} accuracy is 89%\
Using feature(s): {35, 19, 33, 28, 2, 13} accuracy is 86.8%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40} accuracy is 85.1%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1} accuracy is 84.1%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12} accuracy is 82.1%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14} accuracy is 81.8%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34} accuracy is 80%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6} accuracy is 79.4%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26} accuracy is 79.5%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18} accuracy is 79.4%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38} accuracy is 78.1%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31} accuracy is 77.5%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9} accuracy is 76.2%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10} accuracy is 76.1%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24} accuracy is 76.8%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20} accuracy is 76.3%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30} accuracy is 75.7%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3} accuracy is 75.9%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36} accuracy is 75.6%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25} accuracy is 74.6%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32} accuracy is 74.7%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11} accuracy is 74.1%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7} accuracy is 75%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7, 27} accuracy is 75.2%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7, 27, 5} accuracy is 73.4%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7, 27, 5, 37} accuracy is 72.6%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7, 27, 5, 37, 8} accuracy is 71.8%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7, 27, 5, 37, 8, 21} accuracy is 72.2%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7, 27, 5, 37, 8, 21, 39} accuracy is 71.6%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7, 27, 5, 37, 8, 21, 39, 15} accuracy is 71.1%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7, 27, 5, 37, 8, 21, 39, 15, 22} accuracy is 70.9%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7, 27, 5, 37, 8, 21, 39, 15, 22, 23} accuracy is 70.5%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7, 27, 5, 37, 8, 21, 39, 15, 22, 23, 17} accuracy is 69.9%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7, 27, 5, 37, 8, 21, 39, 15, 22, 23, 17, 4} accuracy is 69.7%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7, 27, 5, 37, 8, 21, 39, 15, 22, 23, 17, 4, 29} accuracy is 69.5%\
Using feature(s): {35, 19, 33, 28, 2, 13, 40, 1, 12, 14, 34, 6, 26, 18, 38, 31, 9, 10, 24, 20, 30, 3, 36, 25, 32, 11, 7, 27, 5, 37, 8, 21, 39, 15, 22, 23, 17, 4, 29, 16} accuracy is 68.4%\
