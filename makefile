CFLAGS = -Wall -fexceptions -O2 -Iincluir -ISDL2_image-2.0.5\include -ISDL2-2.0.16\include -std=c99 -D ADD_EXPORTS
OBJS1 = Omake\01_constructores\Fraccion.o Omake\01_constructores\TestFraccion.o Omake\01_constructores\mcd.o
DEP1 = incluir\class\Fraccion.h

OBJS2 = Omake\02_metodos\Fraccion.o Omake\02_metodos\TestMetodos.o Omake\02_metodos\mcd.o Omake\02_metodos\dispgiffiles.o Omake\02_metodos\usemimetex.o 
DEP2 = 01_constructores\Fraccion.cpp 02_metodos\TestMetodos.cpp 02_metodos\mcd.cpp 03_class_Fraccion\dispgiffiles.cpp 03_class_Fraccion\usemimetex.cpp incluir\Fraccion.h

DEPSDL = SDL2_image-2.0.5\include\SDL_image.h SDL2-2.0.16\include\begin_code.h SDL2-2.0.16\include\close_code.h SDL2-2.0.16\include\SDL.h SDL2-2.0.16\include\SDL_assert.h SDL2-2.0.16\include\SDL_atomic.h SDL2-2.0.16\include\SDL_audio.h SDL2-2.0.16\include\SDL_bits.h SDL2-2.0.16\include\SDL_blendmode.h SDL2-2.0.16\include\SDL_clipboard.h SDL2-2.0.16\include\SDL_config.h SDL2-2.0.16\include\SDL_config.h.cmake SDL2-2.0.16\include\SDL_config.h.in SDL2-2.0.16\include\SDL_config_android.h SDL2-2.0.16\include\SDL_config_iphoneos.h SDL2-2.0.16\include\SDL_config_macosx.h SDL2-2.0.16\include\SDL_config_macosx.h.orig SDL2-2.0.16\include\SDL_config_minimal.h SDL2-2.0.16\include\SDL_config_pandora.h SDL2-2.0.16\include\SDL_config_psp.h SDL2-2.0.16\include\SDL_config_windows.h SDL2-2.0.16\include\SDL_config_winrt.h SDL2-2.0.16\include\SDL_config_wiz.h SDL2-2.0.16\include\SDL_copying.h SDL2-2.0.16\include\SDL_cpuinfo.h SDL2-2.0.16\include\SDL_egl.h SDL2-2.0.16\include\SDL_endian.h SDL2-2.0.16\include\SDL_error.h SDL2-2.0.16\include\SDL_events.h SDL2-2.0.16\include\SDL_filesystem.h SDL2-2.0.16\include\SDL_gamecontroller.h SDL2-2.0.16\include\SDL_gesture.h SDL2-2.0.16\include\SDL_haptic.h SDL2-2.0.16\include\SDL_hints.h SDL2-2.0.16\include\SDL_joystick.h SDL2-2.0.16\include\SDL_keyboard.h SDL2-2.0.16\include\SDL_keycode.h SDL2-2.0.16\include\SDL_loadso.h SDL2-2.0.16\include\SDL_locale.h SDL2-2.0.16\include\SDL_log.h SDL2-2.0.16\include\SDL_main.h SDL2-2.0.16\include\SDL_messagebox.h SDL2-2.0.16\include\SDL_metal.h SDL2-2.0.16\include\SDL_misc.h SDL2-2.0.16\include\SDL_mouse.h SDL2-2.0.16\include\SDL_mutex.h SDL2-2.0.16\include\SDL_name.h SDL2-2.0.16\include\SDL_opengl.h SDL2-2.0.16\include\SDL_opengles.h SDL2-2.0.16\include\SDL_opengles2.h SDL2-2.0.16\include\SDL_opengles2_gl2.h SDL2-2.0.16\include\SDL_opengles2_gl2ext.h SDL2-2.0.16\include\SDL_opengles2_gl2platform.h SDL2-2.0.16\include\SDL_opengles2_khrplatform.h SDL2-2.0.16\include\SDL_opengl_glext.h SDL2-2.0.16\include\SDL_pixels.h SDL2-2.0.16\include\SDL_platform.h SDL2-2.0.16\include\SDL_power.h SDL2-2.0.16\include\SDL_quit.h SDL2-2.0.16\include\SDL_rect.h SDL2-2.0.16\include\SDL_render.h SDL2-2.0.16\include\SDL_revision.h SDL2-2.0.16\include\SDL_rwops.h SDL2-2.0.16\include\SDL_scancode.h SDL2-2.0.16\include\SDL_sensor.h SDL2-2.0.16\include\SDL_shape.h SDL2-2.0.16\include\SDL_stdinc.h SDL2-2.0.16\include\SDL_surface.h SDL2-2.0.16\include\SDL_system.h SDL2-2.0.16\include\SDL_syswm.h SDL2-2.0.16\include\SDL_test.h SDL2-2.0.16\include\SDL_test_assert.h SDL2-2.0.16\include\SDL_test_common.h SDL2-2.0.16\include\SDL_test_compare.h SDL2-2.0.16\include\SDL_test_crc32.h SDL2-2.0.16\include\SDL_test_font.h SDL2-2.0.16\include\SDL_test_fuzzer.h SDL2-2.0.16\include\SDL_test_harness.h SDL2-2.0.16\include\SDL_test_images.h SDL2-2.0.16\include\SDL_test_log.h SDL2-2.0.16\include\SDL_test_md5.h SDL2-2.0.16\include\SDL_test_memory.h SDL2-2.0.16\include\SDL_test_random.h SDL2-2.0.16\include\SDL_thread.h SDL2-2.0.16\include\SDL_timer.h SDL2-2.0.16\include\SDL_touch.h SDL2-2.0.16\include\SDL_types.h SDL2-2.0.16\include\SDL_version.h SDL2-2.0.16\include\SDL_video.h SDL2-2.0.16\include\SDL_vulkan.h
DEPSDLDLL = SDL2_image-2.0.5/lib/x64/libjpeg-9.dll SDL2_image-2.0.5/lib/x64/libpng16-16.dll SDL2_image-2.0.5/lib/x64/libtiff-5.dll SDL2_image-2.0.5/lib/x64/libwebp-7.dll SDL2_image-2.0.5/lib/x64/SDL2_image.dll SDL2_image-2.0.5/lib/x64/zlib1.dll SDL2-2.0.16/lib/x64/SDL2.dll
DEPSDLEXE = mimetex.exe



default: 01_constructores
01_constructores: $(OBJS1)
	g++ $(OBJS1) $(CFLAGS) -o ejecutables\01_constructores 
Omake\01_constructores\mcd.o: $(DEP1) 
	g++ $(CFLAGS) -c 02_metodos\mcd.cpp -o Omake\01_constructores\mcd.o
Omake\01_constructores\Fraccion.o: $(DEP1) 
	g++ $(CFLAGS) -c 01_constructores\Fraccion.cpp -o Omake\01_constructores\Fraccion.o
Omake\01_constructores\TestFraccion.o: $(DEP1) 
	g++ $(CFLAGS) -c 01_constructores\TestFraccion.cpp -o Omake\01_constructores\TestFraccion.o


02_metodos: $(OBJS2) $(DEPSDLDLL) $(DEPSDLEXE) 
	g++ $(OBJS2) $(CFLAGS) -o ejecutables\02_metodos $(DEPSDLDLL)
Omake\02_metodos\Fraccion.o: $(DEP2) $(DEPSDL)  
	g++ $(CFLAGS) -c 01_constructores\Fraccion.cpp -o Omake\02_metodos\Fraccion.o 
Omake\02_metodos\TestMetodos.o: $(DEP2) $(DEPSDL) 
	g++ $(CFLAGS) -c 02_metodos\TestMetodos.cpp -o Omake\02_metodos\TestMetodos.o 
Omake\02_metodos\mcd.o: $(DEP2) $(DEPSDL) 
	g++ $(CFLAGS) -c 02_metodos\mcd.cpp -o Omake\02_metodos\mcd.o 
Omake\02_metodos\dispgiffiles.o: $(DEP2) $(DEPSDL) 
	g++ $(CFLAGS) -c 03_class_Fraccion\dispgiffiles.cpp -o Omake\02_metodos\dispgiffiles.o 
Omake\02_metodos\usemimetex.o: $(DEP2) $(DEPSDL) 
	g++ $(CFLAGS) -c 03_class_Fraccion\usemimetex.cpp -o Omake\02_metodos\usemimetex.o 

