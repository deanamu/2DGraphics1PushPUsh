#pragma once

#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.
// Windows 헤더 파일
#include <windows.h>
#ifndef INCLUDED_GAMELIB_FRAMEWORK_H
#define INCLUDED_GAMELIB_FRAMEWORK_H

namespace GameLib {

	class Framework {
	public:
		Framework();
		void update();
		static Framework instance();
		int width() const;
		int height() const;
		unsigned* videoMemory();
		void requestEnd();
		bool isEndRequested() const;

		void start(void* windowHandle);
		void preUpdate();
		void postUpdate();
		static void create();
		static void destroy();
	};

	class StandardInput {
	public:
		StandardInput();
		StandardInput& operator>>(char&);
	private:
		bool mPrevEnterOn;
	};
	extern StandardInput cin;

} //namespace GameLib

#include "GameLib/Base/DebugStream.h"

#endif
