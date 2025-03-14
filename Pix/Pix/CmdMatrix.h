#pragma once

#include "Command.h"

class CmdPushTranslation : public Command
{
public:
	const char* GetName() override
	{
		return "PushTranslation";
	}

	const char* GetDescription() override
	{
		return
			"Pushes translation (x, y, z)"
			"\n"
			"- pushes a translation matrix into the matrix stack";
	}

	bool Execute(const std::vector<std::string>& params) override;
};

class CmdPushRotationX : public Command
{
public:
	const char* GetName() override
	{
		return "PushRotationX";
	}

	const char* GetDescription() override
	{
		return
			"Pushes RotationX (rad)"
			"\n"
			"- pushes a rotation matrix along the x axis into the matrix stack";
	}

	bool Execute(const std::vector<std::string>& params) override;
};

class CmdPushRotationY : public Command
{
public:
	const char* GetName() override
	{
		return "PushRotationY";
	}

	const char* GetDescription() override
	{
		return
			"Pushes RotationY (rad)"
			"\n"
			"- pushes a rotation matrix along the y axis into the matrix stack";
	}

	bool Execute(const std::vector<std::string>& params) override;
};

class CmdPushRotationZ : public Command
{
public:
	const char* GetName() override
	{
		return "PushRotationZ";
	}

	const char* GetDescription() override
	{
		return
			"Pushes RotationZ (rad)"
			"\n"
			"- pushes a rotation matrix along the z axis into the matrix stack";
	}

	bool Execute(const std::vector<std::string>& params) override;
};

class CmdPushScaling : public Command
{
public:
	const char* GetName() override
	{
		return "PushScaling";
	}

	const char* GetDescription() override
	{
		return
			"Pushes Scaling (x, y, z)"
			"\n"
			"- pushes a scale matrix into the matrix stack";
	}

	bool Execute(const std::vector<std::string>& params) override;
};

class CmdPopMatrix : public Command
{
public:
	const char* GetName() override
	{
		return "PopMatrix";
	}

	const char* GetDescription() override
	{
		return
			"PopMatrix()"
			"\n"
			"- pop the last matrix from the matrix stack";
	}

	bool Execute(const std::vector<std::string>& params) override;
};