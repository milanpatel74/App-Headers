//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCAddressSummaryAPI : NSObject
{
}

+ (void)_makeDownloadRequestForEndpoint:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)_makeDataRequestForEndpoint:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)getLocationImageForLocation:(CDStruct_2c43369c)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (id)coordinateStringForCoordinate:(CDStruct_2c43369c)arg1;
+ (void)getDurationToLocation:(CDStruct_2c43369c)arg1 fromLocation:(CDStruct_2c43369c)arg2 mode:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)getDrivingDurationToLocation:(CDStruct_2c43369c)arg1 fromLocation:(CDStruct_2c43369c)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)getWalkingDurationToLocation:(CDStruct_2c43369c)arg1 fromLocation:(CDStruct_2c43369c)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)getLocationsForAddress:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end
