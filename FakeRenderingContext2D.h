#pragma once

#include <napi.h>

class FakeRenderingContext2D : public Napi::ObjectWrap<FakeRenderingContext2D> {
  public:
	static Napi::Function GetClass(Napi::Env);
	FakeRenderingContext2D(const Napi::CallbackInfo&);

	Napi::Value SetTransform(const Napi::CallbackInfo&);
	Napi::Value ResetTransform(const Napi::CallbackInfo&);
	Napi::Value FillRect(const Napi::CallbackInfo&);
	Napi::Value StrokeRect(const Napi::CallbackInfo&);
	Napi::Value BeginPath(const Napi::CallbackInfo&);
	Napi::Value LineTo(const Napi::CallbackInfo&);
	Napi::Value Arc(const Napi::CallbackInfo&);
	Napi::Value Fill(const Napi::CallbackInfo&);
	Napi::Value Stroke(const Napi::CallbackInfo&);

  private:
	Napi::Value line_width_;
	Napi::Value GetLineWidth(const Napi::CallbackInfo& info);
	void SetLineWidth(const Napi::CallbackInfo& info, const Napi::Value& value);

	Napi::Value fill_style_;
	Napi::Value GetFillStyle(const Napi::CallbackInfo& info);
	void SetFillStyle(const Napi::CallbackInfo& info, const Napi::Value& value);
};
