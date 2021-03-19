#include <napi.h>

#include "FakeRenderingContext2D.h"

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
	exports.Set("FakeRenderingContext2D", FakeRenderingContext2D::GetClass(env));
	return exports;
}

NODE_API_MODULE(addon, Init)
