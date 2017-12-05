
Pod::Spec.new do |s|
  s.name             = 'AOARExperience'
  s.version          = '1.0.4'
  s.summary          = 'AOARExperience'

  s.homepage         = 'https://github.com/papercloud/AOARExperience'
  s.license          = { :type => 'MIT'}
  s.author           = { 'cb@papercloud.com.au' => 'cb@papercloud.com.au' }
  s.source           = { :git => 'https://github.com/Papercloud/AOARExperience.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'
  s.ios.vendored_frameworks = 'AOARExperience.framework'
end
