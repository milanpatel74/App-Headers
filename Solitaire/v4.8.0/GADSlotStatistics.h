/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/GADStatistics.h>

@class NSString, NSDictionary;

@interface GADSlotStatistics : GADStatistics {

	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSDictionary * statistics; 
-(void)startTimingAdapter;
-(void)endTimingAdapterWithExitCode:(long long)arg1 ;
-(void)resetTimingAdapters;
-(id)adapterExitCodesParameter;
-(id)adapterDurationsParameter;
-(id)init;
-(void)setIdentifier:(id)arg1 ;
-(NSDictionary *)statistics;
@end
