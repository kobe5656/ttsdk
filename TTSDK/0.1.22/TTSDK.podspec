#
# Be sure to run `pod lib lint TTSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'TTSDK'
  s.version          = '0.1.22'
  s.summary          = 'A short description of TkfSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/kobe5656'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'TTk' => 'kobe969696@proton.me' }
  s.source           = { :git => 'https://github.com/kobe5656/ttsdk.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '12.0'

  s.static_framework = true

  s.source_files = 'TTSDK/Classes/**/*'
#  s.resource_     = 'TSDK/Assets/TkfBundle.bundle'
  
  # s.resource_bundles = {
  #   'TTSDK' => ['TTSDK/Assets/*.png']
  # }
  s.vendored_frameworks = ['TTSDK/Classes/TkfSDK.framework'] #自己的framework在工程中的路径
  s.resource_bundles = {
      'Resources' => 'TTSDK/Assets/TkfBundle.bundle'
  }#资源文件的路径，会在pod中创建“Resources”的文件夹
  
   s.public_header_files = 'Pod/Classes/**/*.h'
   
   s.frameworks = 'UIKit'
  
   s.dependency 'AFNetworking'
  
   s.dependency 'BANetManager'

   s.dependency 'MJRefresh'

   s.dependency 'JSONModel', '1.7.0'

   s.dependency 'Masonry'

   s.dependency 'SDWebImage'

   s.dependency 'IQKeyboardManager'
   
   s.dependency 'TZImagePickerController' #iOS8 and later

   s.dependency 'MBProgressHUD'

   s.dependency 'OpenSSL-Universal'

   s.dependency 'CocoaAsyncSocket'

   s.dependency 'Protobuf', '~> 3.21.12'

   s.dependency 'FMDB/SQLCipher', '~> 2.5'

   s.dependency 'YBImageBrowser'

   s.dependency 'YBImageBrowser/Video'

   s.dependency 'YYText','~> 1.0.7'

   s.dependency 'SocketRocket'

   s.dependency 'GMenuController'

   s.dependency 'Toast'
  
  
end
