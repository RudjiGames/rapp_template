--
-- Copyright 2023 by Milos Tosic. All rights reserved.
-- License: http://www.opensource.org/licenses/BSD-2-Clause
--

function projectDescription_app_template()
	return {
		version		= "1.0",
		shortname	= "app_template",
		longname	= "app_template",
		logo_square	= "images/logo_square.png",	-- should be no less than 480x480 (xb1)
		logo_wide	= "images/logo_wide.png",	-- should be no less than 1920x1080

		publisher   = {
			company			= "Rudji Games",
			organization	= "Rudji Games",
			location		= "Belgrade",
			state			= "",
			country			= "Serbia"
		},

		description = "RTM application template"
	}
end

function projectDependencies_app_template()
	return { "rprof" }
end

function projectAdd_app_template()
	addProject_game("app_template")
end
