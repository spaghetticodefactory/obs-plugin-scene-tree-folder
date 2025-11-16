# OBS Scene Organizer

**Organize your OBS scenes with folders, colors, and hierarchy**

A powerful scene management plugin for OBS Studio that lets you organize scenes into folders with custom colors and visual hierarchy.

**Compatible with OBS Studio 32.0+**

---

> **Credits**: This plugin is based on the [original obs_scene_tree_view by DigitOtter](https://github.com/DigitOtter/obs_scene_tree_view).
>
> This fork adds enhanced organizational features including:
> - Custom folder colors with inheritance
> - Visual folder icons with expand/collapse states
> - Full Qt6 modernization and OBS v32 API compatibility
> - Automated cross-platform builds
>
> All credit for the original scene tree concept goes to DigitOtter.

---

![Screenshot](images/obs_scene_tree_view_example.png)

## Features

### 📁 Folder Organization
- Organize scenes into folders with drag-and-drop support
- Nested folder hierarchy for complex scene setups
- Collapsible/expandable folders to reduce clutter

### 🎨 Custom Colors
- Set custom colors for folders using a color picker
- Scene names automatically inherit their parent folder's color
- Remove colors to return to default appearance
- Colors persist across OBS sessions

### 🔖 Visual Indicators
- Unicode folder icons (📁 closed, 📂 open) that change dynamically
- Bold folder names for easy identification
- Light gray default styling for better visibility in both light and dark themes

### ⚡ Seamless Integration
- Works alongside OBS's native Scenes dock
- Drag-and-drop scenes between folders
- Right-click context menu for quick actions
- Scene selection syncs with OBS Studio

## Installation

### Automated Installation (Recommended)

Download the latest release for your platform from [Releases](https://github.com/yourusername/obs-scene-organizer/releases):

- **Windows**: Download and run the installer `.exe` file
- **Linux**: Download the `.tar.gz` and extract to your OBS plugins directory
- **macOS**: Download the `.pkg` installer

After installation, restart OBS Studio and enable "Scene Organizer" from **View → Docks → Scene Organizer**.

### Manual Installation

#### Linux
```bash
# Install dependencies (Arch Linux)
sudo pacman -S obs-studio qt6-base cmake

# Build and install
mkdir build && cd build
cmake ..
make
sudo make install
```

#### Arch Linux (AUR)
```bash
pikaur -S obs-scene-tree-view-git
```

#### Windows
See the [Building from Source](#building-from-source) section below.

## Usage

### Creating Folders
1. Click the **📁 Add Folder** button at the bottom of the Scene Organizer dock
2. Enter a unique folder name
3. Drag scenes into the folder to organize them

### Setting Folder Colors
1. Right-click on any folder
2. Select **"Set Color"** from the context menu
3. Choose a color from the color picker
4. All scenes in that folder will inherit the color automatically

To remove a color, right-click the folder and select **"Remove Color"**.

### Managing Scenes
- **Add Scene**: Click the **+** button (same as OBS's native function)
- **Remove Scene/Folder**: Select an item and click the **-** button
- **Rename**: Double-click on any scene or folder name
- **Move**: Drag and drop scenes between folders or to the root level

### Folder Icons
- 📁 Closed folder icon appears when the folder is collapsed
- 📂 Open folder icon appears when the folder is expanded
- Icons automatically update as you expand/collapse folders

## Building from Source

### Prerequisites
- CMake 3.20+
- Qt6 (Widgets module)
- OBS Studio 32.0+ development files

### Linux Build
```bash
git clone https://github.com/yourusername/obs-scene-organizer.git
cd obs-scene-organizer/obs_scene_tree_view
mkdir build && cd build
cmake ..
make -j$(nproc)
sudo make install
```

### Windows Build (Inside OBS Source Tree)
1. Set up the OBS Studio build environment ([Instructions](https://obsproject.com/wiki/Install-Instructions))
2. Clone this repository into `UI/frontend-plugins/obs_scene_tree_view`
3. Add to `UI/frontend-plugins/CMakeLists.txt`:
   ```cmake
   set(BUILD_IN_OBS ON)
   add_subdirectory(obs_scene_tree_view)
   ```
4. Build OBS Studio as normal

### macOS Build
```bash
mkdir build && cd build
cmake --preset macos ..
cmake --build .
```

## Known Issues

- Undo/Redo for scene renames does not update the Scene Organizer (OBS limitation)

## Changelog

See [CHANGELOG.md](CHANGELOG.md) for version history and updates.

## Contributing

Contributions are welcome! Please feel free to submit issues or pull requests.

## License

This project inherits the license from the original obs_scene_tree_view project by DigitOtter.
