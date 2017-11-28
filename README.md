# AOARExperience

This is the library that provides the AR experience for the Australian Open app.

## Installation

### Cocoapods

`AOARExperience` can be installed via Cocoapods, by adding the following line to your podfile:
```
pod 'AOARExperience', git: 'https://github.com/bswarm-ar/AOARExperience'
```
and then running
```
pod install
```

### Manual

If you want to add `AOARExperience` manually, you can follow this steps:

1. Download `AOARExperience.framework` from this repository.

2. Drag the framework into the project:

   ![image](https://user-images.githubusercontent.com/5781314/30682440-04000c52-9eed-11e7-99d1-615f8fa1547c.png)

   Make sure that the <b>Copy items if needed</b> box is checked once the framework is dragged.

3. Click on your project in the file navigator, and then in your app target.

4. Make sure that `AOARExperience.framework` appears both in <b>Embedded Binaries</b> and <b>Linked Frameworks and Libraries</b>.

Build and run to check that the installation was successful.

## Usage

To use `AOARExperience` in your project, import the library in the source file where you intend to show the AR experience:
```objc
#import <AOARExperience/AOARExperience.h>
```
and then present `BSWARExperienceViewController` from your view controller by doing:
```objc
[self presentViewController:[BSWARExperienceViewController instanceWithMode:mode]
                   animated:YES
                 completion:nil];
```
`mode` can be `BSWARExperienceModeStatues` or `BSWARExperienceModeRolex`, depending on whether the AR experience will be used to detect Melbourne Park statues, or Rolex logos.

## Permissions

`AOARExperience` uses the device camera to deliver the AR experience, and the device location to determine that the user is within Melbourne Park.

Because of that, it is necessary that your project includes the `NSCameraUsageDescription` and `NSLocationAlwaysUsageDescription` keys in its `Info.plist`, in order to be able to request authorization to the device camera and location.

Example:
```xml
<key>NSCameraUsageDescription</key>
<string>To experience the Augmented Reality feature.</string>

<key>NSLocationAlwaysUsageDescription</key>
<string>You can experience the Augmented Reality feature when you are within Melbourne Park.</string>
```

## Orientation

`AOARExperience` works mostly in portrait mode. The only screen that supports landscape mode is the one that shows the livestream. However, for that to work, you have to make sure that landscape mode is enabled globally in your app, by supporting that orientation in your `Info.plist`:
```xml
<key>UISupportedInterfaceOrientations</key>
<array>
    <string>UIInterfaceOrientationPortrait</string>
    <string>UIInterfaceOrientationLandscapeLeft</string>
    <string>UIInterfaceOrientationLandscapeRight</string>
</array>
```
