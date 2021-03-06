/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMAMraidBaseAdView, NSDictionary;

@interface AMMRCommand : NSObject {

	AMAMraidBaseAdView* _view;
	NSDictionary* _parameters;

}

@property (assign,nonatomic,__weak) AMAMraidBaseAdView * view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                     //@synthesize parameters=_parameters - In the implementation block
+(id)sharedCommandClassMap;
+(Class)commandClassForString:(id)arg1 ;
+(id)commandForString:(id)arg1 ;
+(id)commandType;
-(double)floatFromParametersForKey:(id)arg1 withDefault:(double)arg2 ;
-(id)stringFromParametersForKey:(id)arg1 ;
-(double)floatFromParametersForKey:(id)arg1 ;
-(BOOL)boolFromParametersForKey:(id)arg1 ;
-(int)intFromParametersForKey:(id)arg1 ;
-(id)urlFromParameters:(id)arg1 ;
-(AMAMraidBaseAdView *)view;
-(void)setView:(AMAMraidBaseAdView *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(BOOL)execute;
@end

