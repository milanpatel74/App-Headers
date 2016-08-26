/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBClashUnit;
@interface FBCountedClashUnit : NSObject {

	id<FBClashUnit> _clashUnit;
	unsigned long long _numberOfTimesShown;
	unsigned long long _initialPriority;

}

@property (nonatomic,readonly) id<FBClashUnit> clashUnit;                          //@synthesize clashUnit=_clashUnit - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfTimesShown;              //@synthesize numberOfTimesShown=_numberOfTimesShown - In the implementation block
@property (nonatomic,readonly) unsigned long long initialPriority;                 //@synthesize initialPriority=_initialPriority - In the implementation block
+(id)newWithClashUnit:(id)arg1 initialPriority:(unsigned long long)arg2 ;
-(id<FBClashUnit>)clashUnit;
-(unsigned long long)initialPriority;
-(unsigned long long)numberOfTimesShown;
-(void)incrementNumberOfTimesShown;
-(void)decrementNumberOfTimesShown;
@end
