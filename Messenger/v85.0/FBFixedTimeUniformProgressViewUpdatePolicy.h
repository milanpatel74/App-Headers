/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBProgressViewUpdatePolicy.h>

@class NSString;

@interface FBFixedTimeUniformProgressViewUpdatePolicy : NSObject <FBProgressViewUpdatePolicy> {

	double _totalTime;
	double _updateInterval;
	BOOL _animated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) id completionBlock; 
-(id)initWithTotalTime:(double)arg1 updateInterval:(double)arg2 animated:(BOOL)arg3 ;
-(float)incrementForCurrentProgress:(double)arg1 ;
-(BOOL)animated;
-(double)updateInterval;
@end
