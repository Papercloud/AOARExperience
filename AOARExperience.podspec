
Pod::Spec.new do |s|
  s.name             = 'AOARExperience'
  s.version          = '0.1.0'
  s.summary          = 'AOARExperience'

  s.homepage         = 'https://github.com/papercloud/AOARExperience'
  s.license          = { :type => 'MIT'}
  s.author           = { 'cb@papercloud.com.au' => 'cb@papercloud.com.au' }
  s.source           = { :git => 'https://github.com/papercloud/Bswarm-AR-Experience.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'
  s.ios.vendored_frameworks = 'AOARExperience.framework'
end
