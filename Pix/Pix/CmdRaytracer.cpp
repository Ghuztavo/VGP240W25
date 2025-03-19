#include "CmdRaytracer.h"
#include "Raytracer.h"
#include "VariableCache.h"

bool CmdBeginRaytracing::Execute(const std::vector<std::string>& params)
{
	return Raytracer::Get()->BeginDraw();
}

bool CmdEndRaytracing::Execute(const std::vector<std::string>& params)
{
	return Raytracer::Get()->EndDraw();
}

bool CmdRTSphere::Execute(const std::vector<std::string>& params)
{
	if (params.size() < 7)
	{
		return false;
	}

	VariableCache* vc = VariableCache::Get();
	float x = vc->GetFloat(params[0]);
	float y = vc->GetFloat(params[1]);
	float z = vc->GetFloat(params[2]);
	float radius = vc->GetFloat(params[3]);
	float r = vc->GetFloat(params[4]);
	float g = vc->GetFloat(params[5]);
	float b = vc->GetFloat(params[6]);
	float ri = 0.0f;
	if (params.size() > 7)
	{
		ri = vc->GetFloat(params[7]);
	}
	Raytracer::Get()->AddObject({ {x, y, z}, radius }, { r, g, b, 1.0f}, ri);
	return true;
}

bool CmdRTLight::Execute(const std::vector<std::string>& params)
{
	if (params.size() < 6)
	{
		return false;
	}

	VariableCache* vc = VariableCache::Get();
	float x = vc->GetFloat(params[0]);
	float y = vc->GetFloat(params[1]);
	float z = vc->GetFloat(params[2]);
	float r = vc->GetFloat(params[3]);
	float g = vc->GetFloat(params[4]);
	float b = vc->GetFloat(params[5]);
	Raytracer::Get()->AddLight({ x, y, z }, { r, g, b, 1.0f });
	return true;
}