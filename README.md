<h1 align="center">
uhc-lib
</h1>

<p align="center"> 
  <kbd>
<img src="https://github.com/Bang1338/uhc-lib/assets/75790567/cd32ad66-2b8b-4c50-94ed-f547bf689806">
  </kbd>
</p>

<h3 align="center">
a library for Unregistered HyperCam 2
</h3>

<p align="center">
  <img src="https://img.shields.io/badge/language:-c++-F34B7D">
  <img src="https://img.shields.io/github/languages/top/Bang1338/uhc-lib">
</p>

![Made With C++](https://github.com/Bang1338/strg-bang1338/raw/main/img/forthebadge/MadeWith/made-with-c++.svg)
![Coded With Np++](https://github.com/Bang1338/strg-bang1338/raw/main/img/forthebadge/CodedWith/coded-with-notepad%2B%2B.svg)

# Why?
* If you're planing to make paid software, use it.

# How to use?
1. Import `uhc.dll` to your code
2. use anything to trigger `HPCwtm("text goes here");` and mutex, best with C#:
```csharp
        // .NET Framework 4.0, forgive me
        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked)
            {
                Task.Factory.StartNew(() => HPCwtm("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));
                mutex.WaitOne(0);
            } 
            else mutex.ReleaseMutex();
        }

```

# How to compile?
1. Use `Visual Studio Developer Command Prompt`, which in Visual Studio. If you don't want install VS202X IDE, [check here](https://www.youtube.com/watch?v=DkG3Ox8sLdM)
2. `cd` to the folder `uhc-lib`
3. Run `compile.bat`
4. Now you got `uhc.dll`, use it with any code.

# Credit:
* [hyperionics](http://www.hyperionics.com), father of the meme
* [picocode](https://github.com/picocode1), for basic code

### GitHub, STOP HIGHLIGHTING MAIN LANGUAGE IS C#. THE MAIN LANGUAGE IS C++ BRUH