# AOARExperience

This is the library that provides the AR experience for the Australian Open app.

## Installation

`AOARExperience` is installed via Cocoapods, by adding the following line to your podfile:

```
pod 'AOARExperience', git: 'https://github.com/Papercloud/AOARExperience'
```

## Usage

To use `AOARExperience` in your project, import the library in the source file where you intend to show the AR experience:
```objc
#import <AOARExperience/AOARExperience.h>
```
and then present `BSWARExperienceViewController` from your view controller by doing:
```objc
[self presentViewController:[BSWARExperienceViewController instance]
                   animated:YES
                 completion:nil];
```

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
