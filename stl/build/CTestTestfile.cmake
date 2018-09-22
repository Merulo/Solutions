# CMake generated Testfile for 
# Source directory: /home/damian/Desktop/repos/Solutions/stl-workshop
# Build directory: /home/damian/Desktop/repos/Solutions/stl-workshop/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(sum "/home/damian/Desktop/repos/Solutions/stl-workshop/build/sumTests")
add_test(minmax "/home/damian/Desktop/repos/Solutions/stl-workshop/build/minmaxTests")
add_test(find "/home/damian/Desktop/repos/Solutions/stl-workshop/build/findTests")
add_test(rotate "/home/damian/Desktop/repos/Solutions/stl-workshop/build/rotateTests")
add_test(partial "/home/damian/Desktop/repos/Solutions/stl-workshop/build/partialTests")
add_test(partial_sort "/home/damian/Desktop/repos/Solutions/stl-workshop/build/partial_sortTests")
add_test(partition "/home/damian/Desktop/repos/Solutions/stl-workshop/build/partitionTests")
add_test(remove_duplicates "/home/damian/Desktop/repos/Solutions/stl-workshop/build/remove_duplicatesTests")
add_test(find_diff "/home/damian/Desktop/repos/Solutions/stl-workshop/build/find_diffTests")
add_test(sum_two_containers "/home/damian/Desktop/repos/Solutions/stl-workshop/build/sumTwoContainersTests")
add_test(get_just_odd "/home/damian/Desktop/repos/Solutions/stl-workshop/build/getJustOddTests")
subdirs("lib/gtest-1.8.0")
