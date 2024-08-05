Pod::Spec.new do |spec|
  spec.name         = "OAuthSDK"
  spec.version      = "1.0.0"
  spec.summary      = "a short OAuthSDK."
  spec.description  = <<-DESC
                      a sdk for user to user hh.
                      DESC
  spec.homepage     = "https://github.com/zhou-ztz/zhi_test"
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.author       = { "zhoutingzhi" => "zhoutingzh_2021@qq.com" }
  spec.platform     = :ios, "12.0"
  spec.source       = { :git => 'https://github.com/zhou-ztz/zhi_test.git', :tag => '1.0.0' }
  spec.vendored_frameworks = "OAuthSDK.xcframework"
 # spec.source_files  = "OAuthSDK.framework/Headers/**/*.h"
 # spec.public_header_files = "OAuthSDK.framework/Headers/**/*.h"
  spec.requires_arc     = true
#  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'armv7 arm64' }
end
