# Changelog

All notable changes to OBS Scene Organizer will be documented in this file.

## [0.21.0] - 2025-11-16

### Changed
- **BREAKING**: Renamed plugin from "obs_scene_tree_view" to "obs-scene-organizer"
- Renamed dock from "SceneTree" to "Scene Organizer"
- Complete README rewrite with comprehensive feature documentation
- Updated all locale files with new dock name (English, Portuguese, Russian)

### Documentation
- New README with clear feature descriptions and usage guide
- Comprehensive CHANGELOG documenting all versions
- Proper credit to DigitOtter's original work maintained

## [0.20.1] - 2025-11-16

### Added
- Custom folder colors with color picker (right-click folder → "Set Color")
- Color inheritance: scenes automatically inherit parent folder colors
- Color persistence across OBS sessions
- Unicode folder icons (📁 closed, 📂 open) that dynamically change on expand/collapse
- "Remove Color" option in folder context menu

### Changed
- Default folder color changed from gray to white (scenes no longer inherit gray)
- Folder names are now bold for better visual hierarchy

### Fixed
- Fixed context menu not appearing when right-clicking folders
- Fixed broken signal connections after UI refactoring
- Manually connected all Qt signals after changing setupUi() to use container widget

## [0.20.0] - 2025-11-16

### Added
- Initial implementation of folder color feature

### Fixed
- Context menu functionality improvements

## [0.19.1] - 2025-11-16

### Changed
- Made folder icons light gray (#a0a0a0) for better visibility

## [0.19.0] - 2025-11-16

### Added
- Bold folder names for improved visual distinction from scenes

### Changed
- Removed close button (X) from dock widget
- Improved folder visibility with light gray coloring

### Fixed
- Removed `DockWidgetClosable` flag to prevent unwanted close button

## [0.18.9] - 2025-11-16

### Fixed
- Fixed double title bar issue in docked mode
- Added empty title bar widget to hide Qt's default title bar while preserving OBS dock controls

## [0.18.8] - 2025-11-16

### Fixed
- Fixed Qt6 API compatibility issue with `AllDockWidgetFeatures`
- Changed to explicit feature flags: `DockWidgetClosable | DockWidgetMovable | DockWidgetFloatable`

## [0.18.7] - 2025-11-16

### Fixed
- Fixed XML tag mismatch in `scene_tree_view.ui` that prevented builds
- Removed duplicate closing tag from UI file

## [0.1.6] - 2025-11-04

### Changed
- Updated for OBS Studio 32.0 compatibility
- Modernized Qt 6 signal-slot connections from deprecated Qt 5 syntax
- Updated documentation to reflect Qt 6 requirements

### Fixed
- Fixed plugin loading in OBS Studio 32.0+
- Replaced deprecated `QSpinBox::valueChanged` cast syntax with modern Qt 6 syntax
- Updated `QAbstractItemDelegate::closeEditor` connection to use function pointer syntax
- Updated `QAction::triggered` connections to use function pointer syntax

### Technical Details
- Changed from old-style `SIGNAL()/SLOT()` macros to modern function pointer syntax where applicable
- CMakeLists.txt already specified Qt6, but code needed modernization
- Compatible with OBS Studio 28.0 through 32.0+

## [0.1.5] - 2023-08-21
Previous release (Qt 5 compatible, works with OBS Studio up to 31.x)
