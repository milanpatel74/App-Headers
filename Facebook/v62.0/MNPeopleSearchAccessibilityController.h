/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface MNPeopleSearchAccessibilityController : NSObject {

	BOOL _didAnnounce;
	NSDictionary* _previousCounts;
	NSDictionary* _counts;

}

@property (nonatomic,copy,readonly) NSDictionary * counts;                      //@synthesize counts=_counts - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * previousCounts;              //@synthesize previousCounts=_previousCounts - In the implementation block
@property (nonatomic,readonly) BOOL didAnnounce;                                //@synthesize didAnnounce=_didAnnounce - In the implementation block
-(BOOL)announceResults;
-(NSDictionary *)previousCounts;
-(BOOL)didAnnounce;
-(void)setCount:(long long)arg1 forResultType:(unsigned long long)arg2 ;
-(id)init;
-(void)reset;
-(NSDictionary *)counts;
@end
