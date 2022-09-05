# qwtExample

Test qwt/6.2.0 with conan on Github codespace:

pip3 install --user conan
#export CONAN_SYSREQUIRES_MODE=enabled 
#As CONAN_SYSREQUIRES_MODE=enabled uses doesn't succeed to install all requirement we do it manually
sudo apt install -y libx11-xcb-dev  libfontenc-dev  libxaw7-dev  libxcomposite-dev  libxcursor-dev  libxdamage-dev  libxfixes-dev  libxi-dev  libxinerama-dev  libxkbfile-dev  libxmu-dev  libxmuu-dev  libxpm-dev  libxrandr-dev  libxres-dev  libxtst-dev  libxv-dev  libxvmc-dev  libxxf86vm-dev  libxcb-render0-dev  libxcb-render-util0-dev  libxcb-xkb-dev  libxcb-icccm4-dev  libxcb-image0-dev  libxcb-keysyms1-dev  libxcb-randr0-dev  libxcb-shape0-dev  libxcb-sync-dev  libxcb-xfixes0-dev  libxcb-xinerama0-dev  libxcb-dri3-dev libxcb-util-dev
sudo apt install -y libxcb-util-dev
#To have qmake as we don't have it through conan center as we can have it with cmake as tool_requires
sudo apt install -y qt5-qmake
#Strangly qwt build doesn't looks for qt in conan cache, then we install qt dev files from apt repo
sudo apt install -y qtbase5-dev
#Then we try to build qwt 
conan create . --build missing --profile:build profile --profile:host profile

# But get following error:

compiling ../source_subfolder/src/qwt_polar_canvas.cpp
In file included from ../source_subfolder/src/qwt_plot_glcanvas.cpp:239:
moc/moc_qwt_plot_glcanvas.cpp:153:5: error: cannot convert ‘const QMetaObject* const*’ to ‘const QMetaObject::SuperData*’ in initialization
  153 |     qt_meta_extradata_QwtPlotGLCanvas,
      |     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
      |     |
      |     const QMetaObject* const*
make[1]: *** [Makefile:2169: obj/qwt_plot_glcanvas.o] Error 1
make[1]: *** Waiting for unfinished jobs....
In file included from ../source_subfolder/src/qwt_plot_opengl_canvas.cpp:257:
moc/moc_qwt_plot_opengl_canvas.cpp:154:5: error: cannot convert ‘const QMetaObject* const*’ to ‘const QMetaObject::SuperData*’ in initialization
  154 |     qt_meta_extradata_QwtPlotOpenGLCanvas,
      |     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
      |     |
      |     const QMetaObject* const*
make[1]: *** [Makefile:2181: obj/qwt_plot_opengl_canvas.o] Error 1
make[1]: Leaving directory '/home/codespace/.conan/data/qwt/6.2.0/_/_/build/54a7422544bfa3320a8a50eacf7c38ca26e754a9/src'
make: *** [Makefile:53: sub-src-make_first-ordered] Error 2
qwt/6.2.0: 
qwt/6.2.0: ERROR: Package '54a7422544bfa3320a8a50eacf7c38ca26e754a9' build failed
qwt/6.2.0: WARN: Build folder /home/codespace/.conan/data/qwt/6.2.0/_/_/build/54a7422544bfa3320a8a50eacf7c38ca26e754a9
ERROR: qwt/6.2.0: Error in build() method, line 99
        self.run("make -j {}".format(tools.cpu_count()))
        ConanException: Error 2 while executing make -j 4