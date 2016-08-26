/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface RCTPerformanceLogger : NSObject {

	long long _data[17][2];
	unsigned long long _cookies[17];
	NSArray* _labelsForTags;

}

@property (nonatomic,copy) NSArray * labelsForTags;              //@synthesize labelsForTags=_labelsForTags - In the implementation block
-(void)markStartForTag:(unsigned long long)arg1 ;
-(void)markStopForTag:(unsigned long long)arg1 ;
-(void)setValue:(long long)arg1 forTag:(unsigned long long)arg2 ;
-(void)addValue:(long long)arg1 forTag:(unsigned long long)arg2 ;
-(void)appendStartForTag:(unsigned long long)arg1 ;
-(void)appendStopForTag:(unsigned long long)arg1 ;
-(id)valuesForTags;
-(long long)durationForTag:(unsigned long long)arg1 ;
-(long long)valueForTag:(unsigned long long)arg1 ;
-(NSArray *)labelsForTags;
-(void)setLabelsForTags:(NSArray *)arg1 ;
-(id)init;
@end
