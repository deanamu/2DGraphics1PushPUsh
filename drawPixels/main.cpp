#include "GameLib/Framework.h"

namespace GameLib {
	void Framework::update() {
		unsigned* vram = videoMemory();
		static unsigned i;
		vram[i] += i * 100;
		i += 9973; //1万以下最大の素数
		i %= (width() * height());
	}
}
