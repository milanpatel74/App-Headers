//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SKPDirectoryWatcher : NSObject
{
    id <SKPDirectoryWatcherDelegate> delegate;
    int dirFD;
    int kq;
    struct __CFFileDescriptor *dirKQRef;
}

+ (id)watchFolderWithPath:(id)arg1 delegate:(id)arg2;
@property(nonatomic) __weak id <SKPDirectoryWatcherDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
