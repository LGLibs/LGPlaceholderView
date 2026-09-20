Pod::Spec.new do |s|
    s.name = 'LGPlaceholderView'
    s.version = '1.0.3'
    s.platform = :ios, '12.0'
    s.license = 'MIT'
    s.homepage = 'https://github.com/LGLibs/LGPlaceholderView'
    s.author = { 'Grigorii Lutkov' => 'grigorii@lutkov.dev' }
    s.source = { :git => 'https://github.com/LGLibs/LGPlaceholderView.git', :tag => s.version }
    s.summary = 'View covers everything inside view controller, and shows some alert text, progress bar or other view, when you need to hide content'
    s.description = 'View covers everything inside view controller, and shows some alert text, '         \
                    'progress bar or other view, when you need to hide content. '                        \
                    'For example when you push view controller and want to load some data from server, ' \
                    'you can prepare everything while LGPlaceholderView will show activity indicator for user.'
    s.requires_arc = true
    s.source_files = 'LGPlaceholderView/*.{h,m}'
end
