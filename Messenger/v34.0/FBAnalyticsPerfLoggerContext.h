/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:09 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString;

@interface FBAnalyticsPerfLoggerContext : NSObject {

	int _mergePolicy;
	NSString* _tag;
	NSString* _status;
	NSString* _parentEvent;
	NSString* _moduleName;
	/*^block*/id _extras;
	double _animationDuration;
	NSString* _sequenceId;

}

@property (nonatomic,copy) NSString * tag;                          //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) NSString * status;                       //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * parentEvent;                  //@synthesize parentEvent=_parentEvent - In the implementation block
@property (nonatomic,copy) NSString * moduleName;                   //@synthesize moduleName=_moduleName - In the implementation block
@property (nonatomic,copy) id extras;                               //@synthesize extras=_extras - In the implementation block
@property (assign,nonatomic) int mergePolicy;                       //@synthesize mergePolicy=_mergePolicy - In the implementation block
@property (assign,nonatomic) double animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
@property (nonatomic,copy) NSString * sequenceId;                   //@synthesize sequenceId=_sequenceId - In the implementation block
-(id)extras;
-(void)setExtras:(id)arg1 ;
-(NSString *)sequenceId;
-(NSString *)moduleName;
-(void)setModuleName:(NSString *)arg1 ;
-(void)setSequenceId:(NSString *)arg1 ;
-(void)mergeWithContext:(id)arg1 ;
-(int)mergePolicy;
-(id)debugDescription;
-(void)setAnimationDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(double)animationDuration;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(void)setParentEvent:(NSString *)arg1 ;
-(NSString *)parentEvent;
-(void)setMergePolicy:(int)arg1 ;
@end
