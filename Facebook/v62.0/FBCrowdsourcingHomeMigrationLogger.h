/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCrowdsourcingHomeMigrationModel, NSString;

@interface FBCrowdsourcingHomeMigrationLogger : NSObject {

	FBCrowdsourcingHomeMigrationModel* _model;
	NSString* _homeSessionID;

}

@property (nonatomic,copy) NSString * homeSessionID;              //@synthesize homeSessionID=_homeSessionID - In the implementation block
-(id)extraDictionary;
-(void)logEvent:(id)arg1 WithExtraData:(id)arg2 ;
-(NSString *)homeSessionID;
-(void)setHomeSessionID:(NSString *)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)logEvent:(id)arg1 ;
@end
