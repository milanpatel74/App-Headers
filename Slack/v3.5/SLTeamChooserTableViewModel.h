/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface SLTeamChooserTableViewModel : NSObject {

	NSArray* _accounts;
	NSString* _enterpriseName;
	NSString* _enterpriseId;

}

@property (nonatomic,retain) NSArray * accounts;                     //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) NSString * enterpriseName;              //@synthesize enterpriseName=_enterpriseName - In the implementation block
@property (nonatomic,retain) NSString * enterpriseId;                //@synthesize enterpriseId=_enterpriseId - In the implementation block
-(NSString *)enterpriseName;
-(NSString *)enterpriseId;
-(void)setEnterpriseId:(NSString *)arg1 ;
-(void)setEnterpriseName:(NSString *)arg1 ;
-(NSArray *)accounts;
-(void)setAccounts:(NSArray *)arg1 ;
@end
