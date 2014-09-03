
set PROJ_DIR=project_default

@echo ================================
@echo project dir = %PROJ_DIR%
@echo ================================

md %PROJ_DIR%
cd %PROJ_DIR% && cmake ..\..\src 


