##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Movies_Projetc
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/Sharath/CodLiteWorkSpace/Cpp/CppWorkSpace
ProjectPath            :=D:/Sharath/CodLiteWorkSpace/Cpp/CppWorkSpace/Movies_Projetc
IntermediateDirectory  :=../build-$(ConfigurationName)/Movies_Projetc
OutDir                 :=../build-$(ConfigurationName)/Movies_Projetc
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=154501
Date                   :=20/09/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/Movies_Projetc/Movie.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Movies_Projetc/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Movies_Projetc/Movies.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Movies_Projetc/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Movies_Projetc" mkdir "..\build-$(ConfigurationName)\Movies_Projetc"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Movies_Projetc" mkdir "..\build-$(ConfigurationName)\Movies_Projetc"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Movies_Projetc/.d:
	@if not exist "..\build-$(ConfigurationName)\Movies_Projetc" mkdir "..\build-$(ConfigurationName)\Movies_Projetc"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Movies_Projetc/Movie.cpp$(ObjectSuffix): Movie.cpp ../build-$(ConfigurationName)/Movies_Projetc/Movie.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Sharath/CodLiteWorkSpace/Cpp/CppWorkSpace/Movies_Projetc/Movie.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Movie.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Movies_Projetc/Movie.cpp$(DependSuffix): Movie.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Movies_Projetc/Movie.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Movies_Projetc/Movie.cpp$(DependSuffix) -MM Movie.cpp

../build-$(ConfigurationName)/Movies_Projetc/Movie.cpp$(PreprocessSuffix): Movie.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Movies_Projetc/Movie.cpp$(PreprocessSuffix) Movie.cpp

../build-$(ConfigurationName)/Movies_Projetc/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Movies_Projetc/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Sharath/CodLiteWorkSpace/Cpp/CppWorkSpace/Movies_Projetc/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Movies_Projetc/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Movies_Projetc/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Movies_Projetc/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Movies_Projetc/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Movies_Projetc/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/Movies_Projetc/Movies.cpp$(ObjectSuffix): Movies.cpp ../build-$(ConfigurationName)/Movies_Projetc/Movies.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Sharath/CodLiteWorkSpace/Cpp/CppWorkSpace/Movies_Projetc/Movies.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Movies.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Movies_Projetc/Movies.cpp$(DependSuffix): Movies.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Movies_Projetc/Movies.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Movies_Projetc/Movies.cpp$(DependSuffix) -MM Movies.cpp

../build-$(ConfigurationName)/Movies_Projetc/Movies.cpp$(PreprocessSuffix): Movies.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Movies_Projetc/Movies.cpp$(PreprocessSuffix) Movies.cpp


-include ../build-$(ConfigurationName)/Movies_Projetc//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


