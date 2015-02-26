{
    'includes': [
        'djinni_outputs.gypi',
    ],
    'targets': [
        {
            'target_name': 'bootstrap',
            'type': 'none',
            'dependencies': [
                'make_djinni_outputs_gypi',
            ],
        },
        {
            'target_name': 'make_djinni_outputs_gypi',
            'type': 'none',
            'sources': [
                'make_djinni_outputs.py',
            ],
            'dependencies': [
                'run_djinni'
            ],
            'actions': [
                {
                    'action_name': 'make_djinni_outputs',
                    'inputs': [
                        'platform.djinni',
                        'make_djinni_outputs.py'
                    ],
                    'outputs': [ 'djinni_outputs.gypi' ],
                    'action': [ 'python', 'make_djinni_outputs.py' ],
                }
            ],
        },
        {
            'target_name': 'run_djinni',
            'type': 'none',
            'sources': [
                'platform.djinni',
            ],
            'actions': [
                {
                    'action_name': 'run_djinni',
                    'inputs': [ 'platform.djinni' ],
                    'outputs': [
                        'src/gen', # for a valid bootstrap rule
                        '<@(djinni_gen_cpp_files)',
                        '<@(djinni_gen_jni_files)',
                        '<@(djinni_gen_java_files)',
                        '<@(djinni_gen_objc_files)',
                    ],
                    'action': [
                        'djinni/src/run',
                        '--idl', 'platform.djinni',
                        '--jni-out', 'src/gen/jni',
                        '--java-out', 'src/gen/java',
                        '--objc-out', 'src/gen/objc',
                        '--cpp-out', 'src/gen/cpp',
                        '--java-package', 'com.interaxon.example',
                        '--objc-type-prefix', 'IXE',
                        '--cpp-namespace', 'interaxon::example',
                    ],
                },
            ],
        },
    ],
}
