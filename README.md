mc_rtc new FSM controller template
==

This project is a template for a new FSM controller project wihtin [mc_rtc]

It comes with:
- a CMake project that can build a controller in [mc_rtc], the project can be put within [mc_rtc] source-tree for easier updates
- clang-format files
- automated GitHub Actions builds on three major platforms

Quick start
--

1. Renaming the controller from `NewFSMController` to `MyController`. In a shell (Git Bash on Windows, replace sed with gsed on macOS):

```bash
sed -i -e's/NewFSMController/MyController/g' `find . -type f`
git mv src/NewFSMController.cpp src/MyController.cpp
git mv src/NewFSMController.h src/MyController.h
git mv src/states/NewFSMController_Initial.cpp src/states/MyController_Initial.cpp
git mv src/states/NewFSMController_Initial.h src/states/MyController_Initial.h
git mv etc/NewFSMController.in.yaml etc/MyController.in.yaml
```

2. You can customize the project name in vcpkg.json as well, note that this must follow [vcpkg manifest rules](https://github.com/microsoft/vcpkg/blob/master/docs/users/manifests.md)

2. Build and install the project

3. Run using your [mc_rtc] interface of choice, and setting `Enabled` to `MyController`

[mc_rtc]: https://jrl-umi3218.github.io/mc_rtc/
