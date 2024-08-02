
Pod::Spec.new do |spec|
  spec.name         = "OAuthSDK"
  spec.version      = "1.0.0"
  spec.summary      = "a short OAuthSDK."
  spec.description  = <<-DESC
                      a sdk for user to user hh.
                      DESC
  spec.homepage     = "https://github.com/zhou-ztz/zhi_test"
  spec.license      = "MIT"
  spec.author             = { "tingzhi.zhou" => "tingzhi.zhou@yiartkeji.com" }
  spec.platform     = :ios, "11.0"
  spec.ios.deployment_target = "11.0"
  spec.osx.deployment_target = "10.7"
  spec.watchos.deployment_target = "2.0"
  spec.tvos.deployment_target = "9.0"
  spec.source       = { :git => "https://github.com/zhou-ztz/zhi_test.git", :tag => "#{spec.version}" }
  spec.source_files  = "OAuthSDK.framework/Headers/**/*.{h,m}"
  spec.public_header_files = "OAuthSDK.framework/Headers/**/*.h"
  spec.frameworks = "UIKit", "Foundation"
end
