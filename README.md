<img src="https://rudji.com/images/lib/rapp_template.png"/>

[![Build status](https://ci.appveyor.com/api/projects/status/4eoaojge5re9s4hk?svg=true)](https://ci.appveyor.com/project/milostosic/rapp-template)
[![License](https://img.shields.io/badge/license-BSD--2%20clause-blue.svg)](https://github.com/RudjiGames/rmem/blob/master/LICENSE)

**rapp template** is a project demonstrating an example of how to structure files and dependency projects for applications and games based on [**rapp**](https://github.com/RudjiGames/rapp) and [**build**](https://github.com/RudjiGames/build) system scripts.

Source Code
======

You can get the latest source code by cloning it from github:

      git clone https://github.com/RudjiGames/rapp_template.git

After cloning, make sure to run this command to populate the dependencies:

      git submodule update --init --recursive

Build
======

Project files can be manually created using [**GENie**](https://github.com/bkaradzic/GENie).

For an example how to generate project files, or to generate a solution for Visual Studio 2022, please refer to the provided [batch file](https://github.com/RudjiGames/rapp_template/blob/main/scripts/generate_project.bat). The generated solution will be stored at: '*.build\windows\vs2022\app_template\projects\app_template.sln*'

All intermediate files like projects, solutions, obj files, etc. will be stored in '*.biuld*' directory and can always be safely deleted.

License (BSD 2-clause)
======

<a href="http://opensource.org/licenses/BSD-2-Clause" target="_blank">
<img align="right" src="https://opensource.org/wp-content/uploads/2022/10/osi-badge-dark.svg" width="100" height="137">
</a>

	Copyright 2023 Milos Tosic. All rights reserved.
	
	https://github.com/RudjiGames/rmem
	
	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are met:
	
	   1. Redistributions of source code must retain the above copyright notice,
	      this list of conditions and the following disclaimer.
	
	   2. Redistributions in binary form must reproduce the above copyright
	      notice, this list of conditions and the following disclaimer in the
	      documentation and/or other materials provided with the distribution.
	
	THIS SOFTWARE IS PROVIDED BY COPYRIGHT HOLDER ``AS IS'' AND ANY EXPRESS OR
	IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
	MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
	EVENT SHALL COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
	INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
	(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
	ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
	THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
