//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SKPLogoutNotificationPoster : NSObject
{
    _Bool _activated;
    _Bool _observing;
    _Bool _wasLoggedIn;
    NSString *_lastPostedErrorMessage;
    NSString *_lastErrorMessage;
}

@property(nonatomic) _Bool wasLoggedIn; // @synthesize wasLoggedIn=_wasLoggedIn;
@property(nonatomic) _Bool observing; // @synthesize observing=_observing;
@property(retain, nonatomic) NSString *lastErrorMessage; // @synthesize lastErrorMessage=_lastErrorMessage;
@property(retain, nonatomic) NSString *lastPostedErrorMessage; // @synthesize lastPostedErrorMessage=_lastPostedErrorMessage;
@property(nonatomic, getter=isActivated) _Bool activated; // @synthesize activated=_activated;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *loginErrorKeypath;
@property(readonly, nonatomic) NSString *accountStatusKeypath;
- (void)postLocalNotification;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end
