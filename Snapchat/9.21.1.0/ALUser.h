//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALPrivateAPI.h"

@class NSString;

@interface ALUser : NSObject <ALPrivateAPI>
{
    _Bool _videoPublished;
    _Bool _audioPublished;
    _Bool _screenPublished;
    long long _userId;
    NSString *_videoSinkId;
    NSString *_screenSinkId;
}

@property(copy, nonatomic) NSString *screenSinkId; // @synthesize screenSinkId=_screenSinkId;
@property(copy, nonatomic) NSString *videoSinkId; // @synthesize videoSinkId=_videoSinkId;
@property(nonatomic) _Bool screenPublished; // @synthesize screenPublished=_screenPublished;
@property(nonatomic) _Bool audioPublished; // @synthesize audioPublished=_audioPublished;
@property(nonatomic) _Bool videoPublished; // @synthesize videoPublished=_videoPublished;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

