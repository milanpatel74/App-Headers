/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class SLKAccount, NSMutableDictionary, NSMutableArray;

@interface SLKAccountManager : NSObject {

	BOOL _isSwitching;
	SLKAccount* _currentAccount;
	SLKAccount* _previousAccount;
	NSMutableDictionary* _info;
	NSMutableArray* _accounts;

}

@property (nonatomic,retain) NSMutableDictionary * info;                //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSMutableArray * accounts;                 //@synthesize accounts=_accounts - In the implementation block
@property (assign) BOOL isSwitching;                                    //@synthesize isSwitching=_isSwitching - In the implementation block
@property (nonatomic,retain) SLKAccount * currentAccount;               //@synthesize currentAccount=_currentAccount - In the implementation block
@property (nonatomic,retain) SLKAccount * previousAccount;              //@synthesize previousAccount=_previousAccount - In the implementation block
+(id)privateManager;
-(SLKAccount *)currentAccount;
-(BOOL)isSwitching;
-(BOOL)clearAndSave:(BOOL)arg1 ;
-(SLKAccount *)previousAccount;
-(void)setCurrentAccount:(SLKAccount *)arg1 ;
-(void)setPreviousAccount:(SLKAccount *)arg1 ;
-(void)setIsSwitching:(BOOL)arg1 ;
-(BOOL)save;
-(NSMutableDictionary *)info;
-(void)setInfo:(NSMutableDictionary *)arg1 ;
-(BOOL)saveToKeychain;
-(NSMutableArray *)accounts;
-(void)setAccounts:(NSMutableArray *)arg1 ;
@end

