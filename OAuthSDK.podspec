
Pod::Spec.new do |spec|
  spec.name         = "OAuthSDK"
  spec.version      = "1.0.2"
  spec.summary      = "a short OAuthSDK."
  spec.description  = <<-DESC
                      a sdk for user to user hh.
                      DESC
  spec.homepage     = "https://github.com/zhou-ztz/zhi_test"
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.author       = { "tingzhi.zhou" => "tingzhi.zhou@yiartkeji.com" }
  spec.platform     = :ios, "12.0"
  spec.source       = { :git => 'https://github.com/zhou-ztz/zhi_test.git', :tag => '1.0.2' }
  spec.vendored_frameworks = "OAuthSDK.xcframework"
  spec.source_files  = "OAuthSDK.xcframework/**/*.h"
  spec.requires_arc     = true
end
