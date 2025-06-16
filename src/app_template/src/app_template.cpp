//--------------------------------------------------------------------------//
/// Copyright 2025 Milos Tosic. All Rights Reserved.                       ///
/// License: http://www.opensource.org/licenses/BSD-2-Clause               ///
//--------------------------------------------------------------------------//

#include <app_template_pch.h>
#include <stdlib.h>

struct AppTemplate : public rapp::App
{
	RAPP_CLASS(AppTemplate)

	rapp::WindowHandle	m_window;

	int init(int32_t _argc, const char* const* _argv, rtmLibInterface* /*_libInterface = 0*/)
	{
		rtm::CommandLine cmdLine(_argc, _argv);

		static const rapp::InputBinding bindings[] =
		{
			{ 0, "exit", 1, { rapp::KeyboardKey::KeyQ,	rapp::KeyboardModifier::LCtrl  }},
			{ 0, "exit", 1, { rapp::KeyboardKey::KeyQ,	rapp::KeyboardModifier::RCtrl  }},
			{ 0, "hide", 1, { rapp::KeyboardKey::Tilde,	rapp::KeyboardModifier::None   }},
			RAPP_INPUT_BINDING_END
		};

		rapp::inputAddBindings("bindings", bindings);
		rapp::cmdAdd("exit",	cmdExit,			this,	"quits the game");
		rapp::cmdAdd("hide",	cmdToggleConsole,		0,	"hides console window");

		uint32_t width, height;
		rapp::windowGetDefaultSize(&width, &height);
		m_width		= width;
		m_height	= height;

		m_window = rapp::appGraphicsInit(this, m_width, m_height, RAPP_WINDOW_FLAG_DPI_AWARE);

		return 0;
	}

	void suspend() {}
	void resume() {}
	void update(float /*_time*/)
	{
	}

	void draw(float /*_alpha*/)
	{
		appRunOnMainThread(mainThreadFunc, this);

		// Use debug font to print information about this example.
		bgfx::dbgTextClear();
		bgfx::dbgTextPrintf(0, 0, 0x9f, m_description);
		bgfx::dbgTextPrintf(0, 2, 0x3f, "Some extra information here");

		// debug input
		rapp::inputDgbGamePads();
		rapp::inputDgbMouse();
		rapp::inputDgbKeyboard();
		rapp::inputDgbTouch();

		const bgfx::Stats* stats = bgfx::getStats();
		bgfx::dbgTextPrintf(0, 1, 0x1f, "Resolution: %d x %d", stats->width, stats->height); 
	}

	void drawGUI()
	{
	}

	void shutDown()
	{
		rtm::Console::rgb(255, 255, 0, "Shutting down app\n", (uint32_t)rtm::threadGetID());

		rapp::appGraphicsShutdown(this, m_window);

		rapp::inputRemoveBindings("bindings");
	}

	static void mainThreadFunc(void* /*_appClass*/)
	{
	}

	static int cmdExit(rapp::App* _app, void* /*_userData*/, int /*_argc*/, char const* const* /*_argv*/)
	{
		_app->quit();
		return 0;
	}

	static int cmdToggleConsole(rapp::App* _app, void* /*_userData*/, int /*_argc*/, char const* const* /*_argv*/)
	{
		rapp::cmdConsoleToggle(_app);
		return 0;
	}
};

RAPP_REGISTER(AppTemplate, "AppTemplate", "Game or application template");
