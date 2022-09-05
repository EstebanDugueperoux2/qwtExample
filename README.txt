# qwtExample

Test qwt/6.2.0 with conan on Github codespace:

pip3 install --user conan
conan create . --build missing --profile:build profile --profile:host profile -c tools.system.package_manager:mode=install -c tools.system.package_manager:sudo=True

# But get following error:

...
linking ../bin/curvedemo
g++: error: /home/codespace/.conan/data/qt/5.15.2/_/_/package/e582f9d156d6ef3cd4f0a641280d3bdd1a9096ae/lib/libfontconfig.so: No such file or directory
g++: error: /home/codespace/.conan/data/qt/5.15.2/_/_/package/e582f9d156d6ef3cd4f0a641280d3bdd1a9096ae/lib/libfreetype.so: No such file or directory
g++: error: /home/codespace/.conan/data/qt/5.15.2/_/_/package/e582f9d156d6ef3cd4f0a641280d3bdd1a9096ae/lib/libz.so: No such file or directory
g++: error: /home/codespace/.conan/data/qt/5.15.2/_/_/package/e582f9d156d6ef3cd4f0a641280d3bdd1a9096ae/lib/libQt5LinuxAccessibilitySupport.a: No such file or directory
g++: error: /home/codespace/.conan/data/qt/5.15.2/_/_/package/e582f9d156d6ef3cd4f0a641280d3bdd1a9096ae/lib/libQt5VulkanSupport.a: No such file or directory
...