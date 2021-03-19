#include "FakeRenderingContext2D.h"

FakeRenderingContext2D::FakeRenderingContext2D(const Napi::CallbackInfo& info)
	: Napi::ObjectWrap<FakeRenderingContext2D>(info)
{
	Napi::Env env = info.Env();

	if (info.Length() > 0) {
		Napi::TypeError::New(env, "Too many arguments")
				.ThrowAsJavaScriptException();
		return;
	}
}

Napi::Value FakeRenderingContext2D::GetLineWidth(const Napi::CallbackInfo& info)
{
	return line_width_;
}

void FakeRenderingContext2D::SetLineWidth(const Napi::CallbackInfo& info, const Napi::Value& value)
{
	line_width_ = value;
}

Napi::Value FakeRenderingContext2D::GetFillStyle(const Napi::CallbackInfo& info)
{
	return fill_style_;
}

void FakeRenderingContext2D::SetFillStyle(const Napi::CallbackInfo& info, const Napi::Value& value)
{
	fill_style_ = value;
}

Napi::Value FakeRenderingContext2D::SetTransform(const Napi::CallbackInfo& info)
{
	Napi::Env env = info.Env();

	if (info.Length() != 6) {
		Napi::TypeError::New(env, "Wrong number of arguments")
				.ThrowAsJavaScriptException();
		return env.Undefined();
	}

	return env.Undefined();
}

Napi::Value FakeRenderingContext2D::ResetTransform(const Napi::CallbackInfo& info)
{
	Napi::Env env = info.Env();

	if (info.Length() > 0) {
		Napi::TypeError::New(env, "Wrong number of arguments")
				.ThrowAsJavaScriptException();
		return env.Undefined();
	}

	return env.Undefined();
}

Napi::Value FakeRenderingContext2D::FillRect(const Napi::CallbackInfo& info)
{
	Napi::Env env = info.Env();

	if (info.Length() != 4) {
		Napi::TypeError::New(env, "Wrong number of arguments")
				.ThrowAsJavaScriptException();
		return env.Undefined();
	}

	return env.Undefined();
}

Napi::Value FakeRenderingContext2D::StrokeRect(const Napi::CallbackInfo& info)
{
	Napi::Env env = info.Env();

	if (info.Length() != 4) {
		Napi::TypeError::New(env, "Wrong number of arguments")
				.ThrowAsJavaScriptException();
		return env.Undefined();
	}

	return env.Undefined();
}

Napi::Value FakeRenderingContext2D::BeginPath(const Napi::CallbackInfo& info)
{
	Napi::Env env = info.Env();

	if (info.Length() > 0) {
		Napi::TypeError::New(env, "Wrong number of arguments")
				.ThrowAsJavaScriptException();
		return env.Undefined();
	}

	return env.Undefined();
}

Napi::Value FakeRenderingContext2D::LineTo(const Napi::CallbackInfo& info)
{
	Napi::Env env = info.Env();

	if (info.Length() != 2) {
		Napi::TypeError::New(env, "Wrong number of arguments")
				.ThrowAsJavaScriptException();
		return env.Undefined();
	}

	return env.Undefined();
}

Napi::Value FakeRenderingContext2D::Arc(const Napi::CallbackInfo& info)
{
	Napi::Env env = info.Env();

	if (info.Length() != 5) {
		Napi::TypeError::New(env, "Wrong number of arguments")
				.ThrowAsJavaScriptException();
		return env.Undefined();
	}

	return env.Undefined();
}

Napi::Value FakeRenderingContext2D::Fill(const Napi::CallbackInfo& info)
{
	Napi::Env env = info.Env();

	if (info.Length() > 0) {
		Napi::TypeError::New(env, "Wrong number of arguments")
				.ThrowAsJavaScriptException();
		return env.Undefined();
	}

	return env.Undefined();
}

Napi::Value FakeRenderingContext2D::Stroke(const Napi::CallbackInfo& info)
{
	Napi::Env env = info.Env();

	if (info.Length() > 0) {
		Napi::TypeError::New(env, "Wrong number of arguments")
				.ThrowAsJavaScriptException();
		return env.Undefined();
	}

	return env.Undefined();
}

Napi::Function FakeRenderingContext2D::GetClass(Napi::Env env)
{
	return DefineClass(
			env,
			"FakeRenderingContext2D",
			{
					InstanceAccessor<&FakeRenderingContext2D::GetLineWidth, &FakeRenderingContext2D::SetLineWidth>("lineWidth"),
					InstanceAccessor<&FakeRenderingContext2D::GetFillStyle, &FakeRenderingContext2D::SetFillStyle>("fillStyle"),
					InstanceMethod<&FakeRenderingContext2D::SetTransform>("setTransform"),
					InstanceMethod<&FakeRenderingContext2D::ResetTransform>("resetTransform"),
					InstanceMethod<&FakeRenderingContext2D::FillRect>("fillRect"),
					InstanceMethod<&FakeRenderingContext2D::StrokeRect>("strokeRect"),
					InstanceMethod<&FakeRenderingContext2D::BeginPath>("beginPath"),
					InstanceMethod<&FakeRenderingContext2D::LineTo>("lineTo"),
					InstanceMethod<&FakeRenderingContext2D::Arc>("arc"),
					InstanceMethod<&FakeRenderingContext2D::Fill>("fill"),
					InstanceMethod<&FakeRenderingContext2D::Stroke>("stroke"),
			});
}
