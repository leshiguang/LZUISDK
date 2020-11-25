#
# Be sure to run `pod lib lint LZUISDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LZUISDK'
  s.version          = '0.1.5'
  s.summary          = 'A short description of LZUISDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

#pod repo push leshiguang LZUISDK.podspec --allow-warnings --verbose --skip-import-validation

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/leshiguang/LZUISDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'wuyong' => 'yong.wu@lifesense.com' }
  s.source           = { :git => 'https://github.com/leshiguang/LZUISDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'
  
  s.pod_target_xcconfig = { 'VALID_ARCHS[sdk=iphonesimulator*]' => '' }

  s.source_files = 'LZUISDK/Classes/**/*'
  s.subspec 'NetWork' do |network|
      network.ios.vendored_framework = 'LZUISDK/SDK/LSNetwork_iOS.framework'
  end
  
  s.subspec 'LSDeviceManagerFramework' do |dm|
      dm.ios.vendored_framework = 'LZUISDK/SDK/LSDeviceManagerFramework.framework'
  end
  
  s.subspec 'LSBluetoothUI_iOS' do |ui|
      ui.ios.vendored_framework = 'LZUISDK/SDK/LSBluetoothUI_iOS.framework'
  end
  
  s.subspec 'LSBluetooth' do |bluetooth|
      bluetooth.ios.vendored_framework = 'LZUISDK/SDK/LSBluetooth.framework'
  end
  
  s.subspec 'LSAuthorization' do |authorization|
      authorization.ios.vendored_frameworks = 'LZUISDK/SDK/LSAuthorization.framework'
  end
  
  
  s.dependency 'IQKeyboardManager'
  s.dependency 'Masonry'
  s.dependency 'MBProgressHUD'
  s.dependency 'SDWebImage'
  s.dependency 'YYModel'
  s.dependency 'Logan', '~> 1.2.5'


#  s.vendored_frameworks = 'LZUISDK/SDK/LSNetwork_iOS.framework','LZUISDK/SDK/LSNDBManager.framework','LZUISDK/SDK/LSDeviceManagerFramework.framework','LZUISDK/SDK/LSBluetoothUI_iOS.framework','LZUISDK/SDK/LSBluetooth.framework','LZUISDK/SDK/LSAuthorizationFramework.framework'
  # s.resource_bundles = {
  #   'LZUISDK' => ['LZUISDK/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
