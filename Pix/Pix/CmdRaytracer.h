#pragma once

#include "Command.h"

class CmdBeginRaytracing : public Command
{
public:
	const char* GetName() override
	{
		return "BeginRayTracing";
	}

	const char* GetDescription() override
	{
		return "BeginRaytracing()"
			"\n"
			"- Begin raytracing prep.";
	}

	bool Execute(const std::vector<std::string>& params) override;
};

class CmdEndRaytracing : public Command
{
public:
	const char* GetName() override
	{
		return "EndRayTracing";
	}

	const char* GetDescription() override
	{
		return "EndRayTracing()"
			"\n"
			"- Ends raytracing prep and renders the scene.";
	}

	bool Execute(const std::vector<std::string>& params) override;
};

class CmdRTSphere : public Command
{
public:
	const char* GetName() override
	{
		return "RTSphere";
	}

	const char* GetDescription() override
	{
		return "RTSphere(x, y, z, radius, r, g, b, refractionIndex)"
			"\n"
			"- Adds a sphere to the raytracing scene."
			"- optional ri (refraction index)";
	}

	bool Execute(const std::vector<std::string>& params) override;
};

class CmdRTLight : public Command
{
public:
const char* GetName() override
	{
		return "RTLight";
	}

	const char* GetDescription() override
	{
		return "RTLight(x, y, z, r, g, b)"
			"\n"
			"- Adds a light to the raytracing scene.";
	}

	bool Execute(const std::vector<std::string>& params) override;
};;