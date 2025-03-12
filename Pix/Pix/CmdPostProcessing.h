#pragma once

#include "Command.h"

class CmdPostProcessingBeginDraw : public Command
{
public:
	const char* GetName() override
	{
		return "PostProcessingBeginDraw";

	}

	const char* GetDescription() override
	{
		return
			"PostProcessingBeginDraw()"
			"\n"
			"- initiates rendering to the render target instead of the main screen";
	}
	bool Execute(const std::vector<std::string>& params) override;

};

class CmdPostProcessingEndDraw : public Command
{
public:
	const char* GetName() override
	{
		return "PostProcessingEndDraw";

	}

	const char* GetDescription() override
	{
		return
			"PostProcessingEndDraw()"
			"\n"
			"- draws the rendertarget back to the main screen\n"
			"- applies set effects to the image";
	}
	bool Execute(const std::vector<std::string>& params) override;

};

class CmdPostProcessingSetEffectType : public Command
{
public:
	const char* GetName() override
	{
		return "PostProcessingSetEffectType";

	}

	const char* GetDescription() override
	{
		return
			"PostProcessingSetEffectType(effectType"
			"\n"
			"- sets the effect type to be applied to the image\n"
			"- none, monochrome, invert, mirror, blur"
			"- colormaskr, colormaskg, colormaskb"
			"- sepia, wave, fisheye";
	}
	bool Execute(const std::vector<std::string>& params) override;
};
