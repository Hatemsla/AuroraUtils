%global __provides_exclude_from ^%{_datadir}/%{name}/lib/.*$
%global __requires_exclude ^lib(dconf|flutter-embedder|maliit-glib|.+_platform_plugin)\\.so.*$

Name: ru.auroraos.test_ffi_plugin
Summary: A new Flutter project.
Version: 0.1.1
Release: 3
License: Proprietary
Source0: %{name}-%{version}.tar.zst

BuildRequires: cmake
BuildRequires: ninja
BuildRequires: pkgconfig(flutter-embedder)

%description
%{summary}.

%prep
%autosetup

%build
%cmake -GNinja -DCMAKE_BUILD_TYPE=%{_flutter_build_type}
%ninja_build

%install
%ninja_install

%files
%{_bindir}/%{name}
%{_datadir}/%{name}/*
%{_datadir}/applications/%{name}.desktop
%{_datadir}/icons/hicolor/*/apps/%{name}.png
