//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTRequestErrorContext : NSObject
{
    _Bool _waitingForTokenExport;
    double _minimalExecuteTime;
    unsigned long long _internalServerErrorCount;
    unsigned long long _floodWaitSeconds;
}

@property(nonatomic) _Bool waitingForTokenExport; // @synthesize waitingForTokenExport=_waitingForTokenExport;
@property(nonatomic) unsigned long long floodWaitSeconds; // @synthesize floodWaitSeconds=_floodWaitSeconds;
@property(nonatomic) unsigned long long internalServerErrorCount; // @synthesize internalServerErrorCount=_internalServerErrorCount;
@property(nonatomic) double minimalExecuteTime; // @synthesize minimalExecuteTime=_minimalExecuteTime;

@end

