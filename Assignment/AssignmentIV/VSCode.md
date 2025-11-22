# Connect to GitHub with VSCode

## 1. 開發平台宣告 (Platform Declaration)

- 本作業全程在 Windows 11 平台上開發。
- 編譯器環境: MinGW-w64 (GCC/G++)

## Prerequisites
Before you begin, ensure you have the following:
- Visual Studio Code installed on your computer. [Download VS Code here](https://code.visualstudio.com/)
- Git installed and configured on your system. [Download Git here](https://git-scm.com/).
- A GitHub account.

## Steps to Connect to GitHub

1. **Install the GitHub Extension for VSCode**
    - Open VSCode.
    - Go to the Extensions view by clicking on the Extensions icon in the Activity Bar on the side of the window.
    - Search for "GitHub Pull Requests and Issues" and install the extension.

2. **Sign in to GitHub**
    - Open the Command Palette (`Ctrl+Shift+P` or `Cmd+Shift+P` on macOS).
    - Type `GitHub: Sign in` and select the option.
    - Follow the prompts to authenticate with your GitHub account.

3. **Clone a Repository**
    - In VSCode, open the Command Palette.
    - Type `Git: Clone` and select the option.
    - Paste the URL of your GitHub repository when prompted.
    - Choose a local folder where the repository will be cloned.

4. **Open the Repository**
    - Once the repository is cloned, VSCode will prompt you to open it.
    - Click `Open` to start working on your project.

5. **Make Changes and Commit**
    - Edit files in the repository as needed.
    - Go to the Source Control view in VSCode.
    - Stage your changes, write a commit message, and commit the changes.

6. **Push Changes to GitHub**
    - After committing, click the `Sync Changes` button in the Source Control view.
    - This will push your changes to the GitHub repository.

## 實際操作經驗與故障排除 

 A. 首次提交時的身分驗證錯誤
- 錯誤訊息: "Make sure you configure your "user.name" and "user.email" in git."
- 解決方法: 這是因為 Git 尚未知道誰提交了這次修改。需在 VS Code 內建的終端機中設定全球參數：
    ```bash
    git config --global user.name "你的 GitHub 顯示名稱"
    git config --global user.email "你的 GitHub 註冊信箱"
    ```

 B. 編譯路徑錯誤
- 由於 Windows 環境的指令行解析問題，編譯 C++ 檔案時路徑需使用反斜線 (`\`) 確保 `g++` 能夠找到 `CXX` 資料夾。雖然最終選擇手動編譯繞過 `Makefile.bat`，但這顯示了 Windows 環境在處理跨平台路徑時需要注意。
## Additional Tips
- Use the built-in terminal in VSCode for advanced Git commands.
- Enable GitLens extension for enhanced Git insights.

By following these steps, you can easily connect and manage your GitHub repositories using Visual Studio Code.
